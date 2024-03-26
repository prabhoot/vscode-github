import React from 'react';
import {FcGoogle} from "react-icons/fc";
import LoginForm from './LoginForm';
import SignupForm from './SignupForm';
function Template({title, desc1, desc2, image, alt, formType, setIsLogin}) {
  return (
    <>
      <div className="heading">{title}</div>
      <div className="description">{desc1}</div>
      <div className="sub-description">{desc2}</div>
      <div className="bg-red-400 aspect-ratio">n
        <img className='' src={image} alt={alt} />
      </div>
      {formType === "signup" ? (<SignupForm setIsLogin={setIsLogin} />) : (<LoginForm setIsLogin={setIsLogin} />)}
      <div className="for-or flex">
        <div className="border-2 w-1/2 h-1 translate-y-2 bg-black"></div>
        <div className="text-xl">OR</div>
        <div className="border-2 w-1/2 h-1 translate-y-2 bg-black"></div>
      </div>
      <div className='flex'><FcGoogle /><button className=''>Continue with google</button></div>
    </>
  )
}

export default Template;