import React from 'react';

function Filter(props) {
  const {filterData, categories, setCategories} = props;
  function categoryHandler(title) {
    setCategories(title);
  }
  return (
    <>
      <div className="filter-wrapper">
        {filterData.map((data) => {
          return (<div className="filter" onClick={() => {categoryHandler(data.title)}}><button className={categories===data.title ?'btn-unselect':"btn"}>{data.title}</button></div>)
        })
        }</div>
    </>
  )
}

export default Filter;