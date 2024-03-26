import React from 'react';
import {data2} from '../components/Data';
import Template from '../components/Template';
function Signup({setIsLogin}) {
  return (
    <div>this is signup page
      <Template {...data2} setIsLogin={setIsLogin}/>
    </div>
  )
}

export default Signup