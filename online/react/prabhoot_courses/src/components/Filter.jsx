import React from 'react'

function Filter({filterData}) {
  return (
    <>
      {filterData.map((data)=>{
        return(<button>{data.title}</button>)
      })
      }
    </>
  )
}

export default Filter;