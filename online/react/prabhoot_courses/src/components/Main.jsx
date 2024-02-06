import React, {useEffect, useState} from 'react';
import Cards from './Cards';
import {apiUri, filterData} from './Data';
import Filter from './Filter';
import {toast} from 'react-toastify'
import ReactLoading from "react-loading";

function Main() {

  const [courses, setCourses] = useState(null);
  const [loading, setLoading] = useState(true);
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
      <Filter filterData={filterData} />
      <div>{loading ? <ReactLoading type="spinningBubbles" color="#FFF" /> : <Cards Courses={courses} />}
      </div>
    </>
  )
}

export default Main;