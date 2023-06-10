import React from "react";
import Navbar from "./Navbar";
import Slider from "./Slider";
const Home=()=> {
  return (
    <>
      <section id="navbar">
        <Navbar title="Travel Agency" />
      </section>
    <section className="slider">
      <Slider/>
    </section>
    </>
  );
};
export default Home;
