import React, {useState} from 'react';
import {RiArrowDropLeftLine, RiArrowDropRightLine} from "react-icons/ri";
import Card from './Card';
import {data} from './Data';
function AllTestimonials() {
    const [currIndex, setCurrIndex] = useState(0);
    function decrementHandler(){
        if(currIndex===0){
            setCurrIndex(data.length-1);
        }
        else{
            setCurrIndex(currIndex-1);
        }
    }
    function incrementHandler(){
        if(currIndex===data.length-1){
            setCurrIndex(0);
        }
        else{
            setCurrIndex(currIndex+1);
        }
    }
    function supriseHandler(){
        let randomNumber=Math.floor(Math.random() * data.length);
        setCurrIndex(randomNumber);
    }
    return (
        <div className='bg-yellow-50 rounded-sm block mt-5 p-5 flex flex-col hover:shadow-lg transition-8'>
            <div className="cards "><Card {...data[currIndex]} /></div>
            <div className="buttons flex justify-center gap-40 mt-20 mb-8">
                <RiArrowDropLeftLine size={30} onClick={decrementHandler} />
                <RiArrowDropRightLine size={30} onClick={incrementHandler} />
            </div>
            <div className="flex justify-center font-medium">
                <button className=' bg-purple-300 rounded-md p-3 hover:ring-1 hover:ring-pink-300 hover:shadow-md mb-2 select-none' onClick={supriseHandler}>Surprise me</button>
            </div>
        </div>
    )
}

export default AllTestimonials;