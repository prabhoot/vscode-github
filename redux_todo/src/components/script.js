const list = document.getElementById("container")
const list_item = document.getElementsByTagName("Input")

function add() {
    if (list_item.value ==='') {
        alert("You must write something!!!")
    }
    else {
        let my= document.createElement("Checkbox");
        my.innerHTML=list_item;
        list.append(my)
    }
}
export default add;