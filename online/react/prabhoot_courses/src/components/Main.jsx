import React, {useEffect, useState} from 'react';
import ReactLoading from "react-loading";
import {toast} from 'react-toastify';
import Cards from './Cards';
import {apiUri, filterData} from './Data';
import Filter from './Filter';

function Main() {

  const [courses, setCourses] = useState(null);
  const [loading, setLoading] = useState(true);
  const [categories, setCategories] = useState("All");

  async function fetchData() {
    try {
      setLoading(true);
      const res = await fetch(apiUri);
      const output = await res.json();
      setCourses(output);
    }
    catch (err) {
      console.log(err);
      toast.error("network error");
    }
    setLoading(false);
  }
  useEffect(() => {
    fetchData();
  }, []);
  return (
    <>
      <div className="main">
        <nav><h1>Top Courses</h1></nav>
      </div>
      <Filter key={filterData.id} filterData={filterData} categories={categories} setCategories={setCategories} />
      <div>{loading ? <ReactLoading type="spinningBubbles" color="#FFF" /> : <Cards key={courses.id} Courses={courses} categories={categories} />}
      </div>
    </>
  )
}

export default Main;