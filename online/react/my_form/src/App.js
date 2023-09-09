import React, {useState} from 'react';
import {Route, Routes,Link} from 'react-router-dom';
import Home from './Home';
import Blogs from './Blogs';
import Useless from './Useless';
import OpenInNewTab from './OpenInNewTab';
function App() {
  return (
    <>
     <div className="DOM">
      <nav>
          <Link to="/">TO HOME</Link>
          <br/>
          <Link to="/Blogs" target='_blank'>TO BLOGS</Link>
          <br/>
          <Link to="/OpenInNewTab">TO NEW TAB PAGE </Link>
      </nav>
    </div>

    <Useless/>


    <Routes>
      <Route path='/' target="_blank" element={<Home/>}/>
      <Route path="/Blogs" target="_blank" element={<Blogs/>}/>
      <Route path="/OpenInNewTab" target="/Blogs" element={<OpenInNewTab/>}/>
    </Routes>
    </>
  );
}
export default App;
