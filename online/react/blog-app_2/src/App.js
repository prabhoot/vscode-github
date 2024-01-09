// import './App.css';
// import React, {useState} from 'react';
// function App() {
//   // let count=2;
//   // const [count,setcount]=useState(4)  if you pass the initial value like this it will be rendered every time hence not good
//   // const [count,setcount]=useState(()=>{4}) this is the function version of what is written above this will run once (first time only better:-)
//   const [count,setcount]=useState(()=>{4})
//   function decrementCount(){
//     setcount(prevCount=>prevCount-1)
//     // setcount(count-1)
//     // setcount(count-1) will give decremented value once
//   }
//   function incrementCount(){
//     setcount(prevCount=>prevCount+1)
//   }
//   return (
//     <>
//     <h1>this is prabhoot</h1><br />
//     <button onClick={decrementCount}>-</button>
//     <span>{count}</span>
//     <button onClick={incrementCount}>+</button>
//     </>
//   );
// }

// export default App;

import React, {useEffect, useState} from 'react'
export default function App() {
  const [resourceType, setResourceType] = useState('posts')
  const [items, setItems] = useState([])
  console.log('render')
  useEffect(() => {
    fetch(`https://jsonplaceholder.typicode.com/${resourceType}`)
      .then(response => response.json())
      .then(json => setItems(json))
    console.log("setchange")
  }, [resourceType])   // when the resource type change the useffect will change 
  // useEffect(()=>{
  //   console.log("setchange")
  // },[]) this empty bracket will ensure that the content will only once (i.e.-onmount)
  return (
    <>
      <h1>this is prabhoot</h1>
      <button onClick={() => setResourceType('posts')}>posts</button>
      <button onClick={() => setResourceType('users')}>Users</button>
      <button onClick={() => setResourceType('comments')}>Comments</button>
      <h1>{resourceType}</h1>
      {items.map(item => {
        return <pre>{JSON.stringify(item)}</pre>
      })
      }
    </>
  )
}