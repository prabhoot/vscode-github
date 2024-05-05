import React, {useState} from "react";

const Random = () => {
  const [gif,setGif]=useState("https://image.tmdb.org/t/p/original/pofZLIwFSpIuU223mrEZAaSPOcx.jpg");
  function clickHandler(){

  }
  return <div className="wrapper ">
    <h1>Random gif</h1>
    <div className="gif">
      <img src={gif} alt="random gif" width={700}/>
      <button onClick={clickHandler}>generate</button>
    </div>
  </div>;
};

export default Random;