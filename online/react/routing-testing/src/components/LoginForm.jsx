import React, {useState} from 'react';
import {FaRegEye} from 'react-icons/fa';
import {IoEyeOffSharp} from 'react-icons/io5';
import {useNavigate} from 'react-router-dom';
import {toast} from 'react-toastify';
function LoginForm({setIsLogin}) {
  const navigate = useNavigate();
  const [formData, setFormData] = useState({email: "", password: ""});
  const [toShow, setToShow] = useState(false);
  function formChangeHandler(event) {
    const {name, value} = event.target;
    setFormData(prev => {
      return ({
        ...prev, [name]: value
      })
    })
  }
  function onSubmitHandler(event) {
    event.preventDefault();
    setIsLogin(true);
    navigate("/dashboard")
    console.log(formData);
    toast.success("Logged In");
  }
  return (
    <>
      <form onSubmit={onSubmitHandler}>
        <label>Email<sup>*</sup>
          <input autoComplete='off' required={true} type="email" name="email" value={formData.email} onChange={formChangeHandler} placeholder='enter your email' />
        </label>
        <label>Password <sup>*</sup>
          <input autoComplete='off' required={true} type={toShow ? "text" : "password"} name="password" value={formData.createPassword} onChange={formChangeHandler} placeholder='enter your password' />
          <div onClick={() => {setToShow(!toShow)}}>{toShow ? <FaRegEye /> : <IoEyeOffSharp />}</div>
        </label>
        <div className="forget">Forget Password</div>
        <button>Log In</button>
      </form>
    </>
  )
}

export default LoginForm