import React from 'react'
import {useSelector, useDispatch} from "react-redux"
import {increment, decrement,reset,incA} from './counterSlice'
import { useState } from 'react';
function Counter() {
    const count = useSelector((state) => state.counter.count);
    const dispatch = useDispatch();
    const [incrementAmount,setIncrementAmount]=useState(0);
    const addValue=Number(incrementAmount)||0;
    const resetAll=()=>{
        setIncrementAmount(0);
        dispatch(reset())
    }
    return (
        <>
            <div>counter</div>
            <p>{count}</p>
            <div><button onClick={()=>{dispatch(increment())}}>+</button></div>
            <div><button onClick={()=>{dispatch(decrement())}}>-</button></div>
            <div><button onClick={()=>{dispatch(reset())}}>reset</button></div>
            <div>< input type='text' value={incrementAmount} onChange={(e)=>setIncrementAmount(e.target.value)}/></div>
            <div><button onClick={()=>{dispatch(incA(addValue))}}>add amount</button></div>
            <div><button onClick={resetAll}>resetAll</button></div>
        </>
    ) 
}
export default Counter