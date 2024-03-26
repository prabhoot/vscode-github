import React from 'react';
import {data1} from '../components/Data';
import Template from '../components/Template';
function About({setIsLogin}) {
  return (
    <div className='flex flex-col bg-slate-100 relative justify-center items-center border-8 w-screen h-screen z-10'>
      <Template {...data1} setIsLogin={setIsLogin} />
    </div>
  )
}

export default About