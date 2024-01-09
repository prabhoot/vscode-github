import React, {useState} from 'react';
import './Main.css';
function Main() {
  const [count,setCount]=useState(0);
  function decrementHandler(){
    setCount(count-1);
  }
  function incrementHandler(){
    setCount(count+1);
  }
  function resetHandler(){
    setCount(0);
  }
  return (
    <div className=" container main">
      <div className="decrement main btn" onClick={decrementHandler} >-</div>
      <div className="value main">{count}</div>
      <div className="increment main btn" onClick={incrementHandler}>+</div>
      <div className="btn" type="submit" onClick={resetHandler}>Reset</div>
    </div>
  )
}

export default Main