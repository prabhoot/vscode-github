import {useState} from 'react';
import './card.css';
function Card({id, name, info, price, image,removeTour}) {

// function Card(tour) {
//   {console.log(name);}
//   const   id=1;
//   const   name="agra";
//   const   info="The name Agra is explained by different derivations, all of which have low verifiability. The most accepted one is that it had its origin from the Hindi word agar meaning salt-pan, a name which was given to it because the soil in the region is brackish and salt used to be made here once by evaporation";
//   const   image="https://plus.unsplash.com/premium_photo-1661885523029-fc960a2bb4f3?q=80&w=1170&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"
//   const   price=8999
  // let information =info;
  // let temp = information.substring(0, 200) + "..."

  const [description,setDescription]=useState(info)
  const [detail, setDetail] = useState(false)
  function descriptionHandler() {
    setDetail(!detail);
    detail ? setDescription(`${info.substring(0, 200)}...`):setDescription(info)
  }
  return (
    <>
      <h1>{id}</h1>
      <div className="card">
        <div className="card-price text-green-700 text-lg" >₹ {price}</div>
        <div className="card-title">{name}</div>
        <img className="card-image" src={image} alt={name + ` image is not available`}></img>
        <div className="card-description">{description}
          <span className="read-more" onClick={descriptionHandler}>{detail?" show less":"read more"}</span>
        </div>
        <button className="hover:bg-red-500 rounded-lg" onClick={()=>{removeTour(id)}}>Not interested</button>
      </div>
    </>
  )
}
export default Card;
// .card {
//     .card-image {
//     .card-content {
//     .card-title {
//     .card-description {
//     .card-price {