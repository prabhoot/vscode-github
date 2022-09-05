a = [1, 2, 3, 4]
b = 3
flag = True
for i in range(len(a)):
    if a[i] == b:
        print(f'element found at location {i}')
        flag = False
if flag:
    print("element not found")