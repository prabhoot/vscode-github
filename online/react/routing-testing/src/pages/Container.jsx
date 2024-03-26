import React from 'react';
import {Outlet} from 'react-router-dom';
import {Navbar} from '../components/Navbar';
function Container(props) {
  const isLogin=props.isLogin;
  const setIsLogin=props.setIsLogin;
  return (
    <>
    <div>
    <Navbar isLogin={isLogin} setIsLogin={setIsLogin} />
    <Outlet />
    </div>
    </>
  )
}

export default Container