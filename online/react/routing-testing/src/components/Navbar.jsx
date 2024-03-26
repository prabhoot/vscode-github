import React, {useState} from 'react';
import {GoSidebarCollapse, GoSidebarExpand} from "react-icons/go";
import {Link, NavLink} from 'react-router-dom';
import {toast} from 'react-toastify';

export const Navbar = (props) => {
    const isLogin = props.isLogin;
    const setIsLogin = props.setIsLogin;
    const [toShowSidebar, setToShowSidebar] = useState(false);
    return (
        <>
            <nav className='z-20 flex justify-around items-center ml-8 h-24'>
                <div className='p-2 ml-2 rounded-full translate-y-6 mb-auto' onClick={() => {setToShowSidebar(!toShowSidebar)}}>{toShowSidebar ? <GoSidebarExpand size={40} /> : <GoSidebarCollapse size={40} />}</div>
                <div className="text-3xl font-bold select-none font-serif">Prabhoot</div>
                <div>
                    <Link to={isLogin ? "/dashboard" : "/"} className=''>
                        <div className="">
                            <img className="float-right h-40 rounded-full translate-y-1.5 mix-blend-multiply" src="https://img.freepik.com/free-vector/bird-colorful-logo-gradient-vector_343694-1365.jpg?size=626&ext=jpg" alt="logo" />
                        </div>
                    </Link>
                </div>
            </nav>
            {
                toShowSidebar
                &&
                <div class="sidebar ml-4 pl-20 z-20 absolute bg-slate-200 w-40 rounded-lg flex flex-col gap-4 p-2 justify-around">
                    <div className="sidebar1" ><NavLink onClick={() => {setToShowSidebar(!toShowSidebar)}} className="sidebar2" to="/" >Home</NavLink></div>
                    <div className="sidebar1" ><NavLink onClick={() => {setToShowSidebar(!toShowSidebar)}} className="sidebar2" to='/about'>About</NavLink> </div>
                    <div className="sidebar1" ><NavLink onClick={() => {setToShowSidebar(!toShowSidebar)}} className="sidebar2" to='/contact' >Contact</NavLink> </div>
                    {!isLogin
                        ? <><div className="sidebar1" ><NavLink onClick={() => {setToShowSidebar(!toShowSidebar)}} className="sidebar2" to='/login' >Login</NavLink> </div>
                            <div className="sidebar1" ><NavLink onClick={() => {setToShowSidebar(!toShowSidebar)}} className="sidebar2" to="/signup">Signup</NavLink></div></>
                        : <><div className="sidebar1" ><Link className="sidebar2" onClick={() => {setIsLogin(false); setToShowSidebar(!toShowSidebar); toast.success("Logged-Out Successfully", {position: "top-center", autoClose: 3000, hideProgressBar: false, closeOnClick: true, pauseOnHover: true, draggable: true, progress: undefined, theme: "light"});}}>Logout</Link> </div>
                            <div className="sidebar1" ><NavLink onClick={() => {setToShowSidebar(!toShowSidebar)}} className="sidebar2" to='/dashboard' >Dashboard</NavLink> </div></>}</div>}
            {/* <NavLink to={"*"}>NOT FOUND</NavLink> <br /> */}
        </>
    )

}
