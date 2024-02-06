import React from 'react';
import Card from './Card';
// import Card from './Card'
export const sample = {
  "id": "ST301",
  "title": "Software Testing Fundamentals",
  "description": "This course covers the basics of software testing, including test planning, test case design, test execution, and defect management. Students will learn how to use popular testing frameworks and tools to ensure the quality and reliability of software applications.",
  "image": {
    "url": "https://codehelp-apis.vercel.app/get-top-courses/Development/Software%20Testing%20Fundamentals.png",
    "alt": "Software Testing Fundamentals"
  }
};
function Cards(props) {
  let Courses = props.Courses.data;
  let categories = props.categories;
  let coursesToShow = [];
  function getAllCourses() {
    for (let i of Object.values(Courses)) {
      for (let j of i) {
        coursesToShow.push(j);
      }
    }
  }
  function getSpecificCourses(categories) {
    coursesToShow=Courses[categories];
  }
  if (categories === "All") {
    getAllCourses();
  } else {getSpecificCourses(categories);}
  return (
    <>
      <div className="wrapper">{coursesToShow.map(data => {return (<Card {...data} />)})}
      </div>
    </>
  )
}

export default Cards;