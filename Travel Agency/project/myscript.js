         let onSlide = false;
         window.addEventListener("load", () => {
            autoSlide();
         
            const dots = document.querySelectorAll(".carousel_dot");
            for (let i = 0; i < dots.length; i++) {
               dots[i].addEventListener("click", () => slide(i));
            }
         
            const buttonPrev = document.querySelector(".carousel_button__prev");
            const buttonNext = document.querySelector(".carousel_button__next");
            buttonPrev.addEventListener("click", () => slide(getItemActiveIndex() - 1));
            buttonNext.addEventListener("click", () => slide(getItemActiveIndex() + 1));
         })
         
         function autoSlide() {
            setInterval(() => {
               slide(getItemActiveIndex() + 1);
            }, 3000); // slide speed = 3s
         }
         
         function slide(toIndex) {
            if (onSlide)
               return;
            onSlide = true;
         
            const itemsArray = Array.from(document.querySelectorAll(".carousel_item"));
            const itemActive = document.querySelector(".carousel_item__active");
            const itemActiveIndex = itemsArray.indexOf(itemActive);
            let newItemActive = null;
         
            if (toIndex > itemActiveIndex) {
               // check if toIndex exceeds the number of carousel items
               if (toIndex >= itemsArray.length) {
                  toIndex = 0;
               }
         
               newItemActive = itemsArray[toIndex];
         
               // start transition
               newItemActive.classList.add("carousel_item__pos_next");
               setTimeout(() => {
                  newItemActive.classList.add("carousel_item__next");
                  itemActive.classList.add("carousel_item__next");
               }, 20);
            } else {
               // check if toIndex exceeds the number of carousel items
               if (toIndex < 0) {
                  toIndex = itemsArray.length - 1;
               }
         
               newItemActive = itemsArray[toIndex];
         
               // start transition
               newItemActive.classList.add("carousel_item__pos_prev");
               setTimeout(() => {
                  newItemActive.classList.add("carousel_item__prev");
                  itemActive.classList.add("carousel_item__prev");
               }, 20);
            }
         
            // remove all transition class and switch active class
            newItemActive.addEventListener("transitionend", () => {
               itemActive.className = "carousel_item";
               newItemActive.className = "carousel_item carousel_item__active";
               onSlide = false;
            }, {
               once: true
            });
         
            slideIndicator(toIndex);
         }
         
         function getItemActiveIndex() {
            const itemsArray = Array.from(document.querySelectorAll(".carousel_item"));
            const itemActive = document.querySelector(".carousel_item__active");
            const itemActiveIndex = itemsArray.indexOf(itemActive);
            return itemActiveIndex;
         }
         
         function slideIndicator(toIndex) {
            const dots = document.querySelectorAll(".carousel_dot");
            const dotActive = document.querySelector(".carousel_dot__active");
            const newDotActive = dots[toIndex];
         
            dotActive.classList.remove("carousel_dot__active");
            newDotActive.classList.add("carousel_dot__active");
         }


         function data(){
            var b=document.getElementById("n").value;
            alert(b);
        }
        function data(){
            var b=document.getElementsByClassName("n").value;
            var d=document.getElementById("p").value;
            if(b==""){
               if(d=="1234"){
                  alert("wrong id and correct password");
              }
              else{
                  alert("correct id and wrong password");
              }
            }
            else{
               if(d=="1234"){
                  alert("correct id and correct password");
              }
              else{
                  alert("correct id and wrong password");
              }
            }
        }