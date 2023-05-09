import React from "react";
import "./App.css";
<script src="https://unpkg.com/react-router-dom/umd/react-router-dom.min.js"></script>
// import Navbar from "./components/Navbar";
import { BrowserRouter as Router, Switch, Route, Link } from "react-router-dom";
import Home from "./components/Home";
const App = () => {
  return (
    <>
        <Route path="/" Component={Home}/>
    </>
  );
};
export default App;
