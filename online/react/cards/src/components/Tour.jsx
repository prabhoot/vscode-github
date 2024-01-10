import React from 'react'
import Card from './Card'
import data from './Data'

function Tour() {
  const tours = data
  return (
    <div>
     {tours.map((t)=>{return(
      <Card key={t.id}
      tour={tours} />
     )})}
    </div>
  )
}

export default Tour
