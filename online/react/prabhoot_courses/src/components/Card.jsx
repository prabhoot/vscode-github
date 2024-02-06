import React, {useState} from 'react'
import {toast} from 'react-toastify'
import { FcLike,FcLikePlaceholder} from "react-icons/fc";

function Card(sample) {
  const [like,setLike]=useState(false);
  const {title, description, image} = sample;

  function likeHandler(){
    setLike(!like);
    !like?toast.success("liked"):toast.warning("like removed");
  }
  return (
    <>
    <div className="card">
      <img src={sample.image.url} alt={image.alt}/>
      <div className="like"onClick={likeHandler}>{like?<FcLike/>:<FcLikePlaceholder/>}</div>
      <div className="title">{title}</div>
      <div className="description">{description}</div>
    </div>
    </>
  )
}

export default Card