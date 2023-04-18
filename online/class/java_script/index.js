let countvar=document.getElementById("count-id").innerText;
let previousSaved=document.getElementById("previous-id").innerText;
function increment(){
document.getElementById("count-id").innerText=++countvar;
}
function decrement(){
if(countvar){document.getElementById("count-id").innerText=--countvar;}
}
function save(){
    console.log(countvar);
    document.getElementById("previous-id").innerText+=("-"+countvar)
    document.getElementById("count-id").innerText=0;
}


// // strings
// let username="prabhoot ";
// let message="you have 3 new notifications"
// console.log(username+message);