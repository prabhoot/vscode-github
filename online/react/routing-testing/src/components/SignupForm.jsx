import React, {useState} from 'react';
import {FaRegEye} from "react-icons/fa";
import {IoEyeOffSharp} from "react-icons/io5";
import {useNavigate} from "react-router-dom";
import {toast} from 'react-toastify';
function SignupForm() {
  const [formData, setFormData] = useState({user: "", email: "", createPassword: "", confirmPassword: "", firstName: "", lastName: ""})
  const navigate = useNavigate();
  const [toShow1,setToShow1]=useState(false);
  const [toShow2,setToShow2]=useState(false);
  function formChangeHandler(event) {
    const {name, value} = event.target;
    setFormData(prev => {
      return {
        ...prev, [name]: value
      }
    })
  }
  function formSubmitHandler(event) {
    event.preventDefault();
    const {createPassword, confirmPassword} = event.target;
    if (createPassword.value !== confirmPassword.value) {
      toast.error("Password Mismatched")
    }
    else {
      navigate("/login");
    }
    console.log(formData);
  }
  return (
    <>
      <form onSubmit={formSubmitHandler}>
        <label><input type='radio' name='user' value={"student"} checked={formData.user === "student"} onChange={formChangeHandler} />Student</label>
        <label><input type='radio' name='user' value={"instructor"} checked={formData.user === "instructor"} onChange={formChangeHandler} />Instructor</label>
        <label>First Name<sup>*</sup>
          <input autoComplete='off' required={true} type="text" name="firstName" value={formData.firstName} onChange={formChangeHandler} placeholder='enter your first name' />
        </label>
        <label>Last Name<sup>*</sup>
          <input autoComplete='off' required={true} type="text" name="lastName" value={formData.lastName} onChange={formChangeHandler} placeholder='enter your last name' />
        </label>
        <label>Email Address<sup>*</sup>
          <input autoComplete='off' required={true} type="email" name="email" value={formData.email} onChange={formChangeHandler} placeholder='enter your email' />
        </label>
        <div className=" flex">
        <label>Create Password <sup>*</sup>
          <input autoComplete='off' required={true} type={toShow1?"text":"password"} name="createPassword" value={formData.createPassword} onChange={formChangeHandler} placeholder='enter your password' />
          <div onClick={()=>{setToShow1(!toShow1)}}>{toShow1?<FaRegEye/>:<IoEyeOffSharp/>}</div>
        </label>
        <label>Confirm Password <sup>*</sup>
          <input autoComplete='off' required={true} type={toShow2?"text":"password"}  name="confirmPassword" value={formData.confirmPassword} onChange={formChangeHandler} placeholder='enter your password' />
          <div onClick={()=>{setToShow2(!toShow2)}}>{toShow2?<FaRegEye/>:<IoEyeOffSharp/>}</div>
        </label>
        </div>
        <button>Create Account</button>
      </form>
    </>
  )
}

export default SignupForm;