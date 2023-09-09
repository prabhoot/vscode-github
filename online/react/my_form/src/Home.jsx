import React, { useState } from 'react';
import ComponentA from './ComponentA';
import ComponentB from './ComponentB';
import {Link} from 'react-router-dom';
function Home() {
  const [showComponentA, setShowComponentA] = useState(false);
  const [showComponentB, setShowComponentB] = useState(false);

  const handleShowComponentA = () => {
    setShowComponentA(true);
    setShowComponentB(false);
  };

  const handleShowComponentB = () => {
    setShowComponentA(false);
    setShowComponentB(true);
  };

  const handleShowAllComponents=()=>{
    setShowComponentA(true);
    setShowComponentB(true);
  };

  return ( 
    <>
   
    <center>
      <button onClick={handleShowComponentA}>Show Component A</button>
      <button onClick={handleShowComponentB}>Show Component B</button>
      <button onClick={handleShowAllComponents}>Show all Components</button>
      
      <p>
        Hello i am the main page 
      </p>
      {showComponentA && <ComponentA />}
      {showComponentB && <ComponentB />}
    </center>
    </>
  );
}

export default Home;
