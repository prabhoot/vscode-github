from ultralytics import YOLO
import cv2
import cvzone
import math
import time

cap=cv2.VideoCapture(0)
cap.set(3,640)
cap.set(4,480)

model=YOLO("/home/prabhoot/vscode-github/face/runs/detect/train_118/weights/best.pt")

classNames = ["Real", "Fake"]
pre_frame_time=0
new_frame_time=0

while True:
    new_frame_time=time.time()
    success,img=cap.read()
    results=model(img,stream=True,verbose=False)
    for r in results:
        boxes=r.boxes
        for box in boxes:
            x1,y1,x2,y2=box.xyxy[0]
            x1,y1,x2,y2=int(x1),int(y1),int(x2),int(y2)
            w,h=x2-x1,y2-y1
            cvzone.cornerRect(img,(x1,y1,w,h))
            conf=math.ceil((box.conf[0]*100))/100
            cls=int(box.cls[0])
            cvzone.putTextRect(img,f'{classNames[cls]}{conf}',(max(0,x1),max(35,y1)),scale=1,thickness=2)
    fps=1/(new_frame_time-pre_frame_time)
    pre_frame_time=new_frame_time
    print(fps)
    cv2.imshow("image",img)
    cv2.waitKey(10)