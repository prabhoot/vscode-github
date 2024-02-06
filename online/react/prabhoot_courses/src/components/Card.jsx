import React, {useState} from 'react'
import {toast} from 'react-toastify'
import {FcLike, FcLikePlaceholder} from "react-icons/fc";

function Card(sample) {
  const [like, setLike] = useState(false);
  const {title, description, image} = sample;
  const [readmore, setReadmore] = useState(1);
  const [info,setInfo]=useState(description.substr(0,150)+"...")
  function readHandler() {
    setReadmore(!readmore);
    readmore?setInfo(description):setInfo(description.substr(0,150)+"...");
  }
  function likeHandler() {
    setLike(!like);
    !like ? toast.success("liked") : toast.warning("like removed");
  }
  return (
    <>
      <div className="card">
        <img src={sample.image.url} alt={image.alt} />
        <div className="like" onClick={likeHandler}>{like ? <FcLike /> : <FcLikePlaceholder />}</div>
        <div className="title">{title}</div>
        <div className="description">{info}
          <button className="readmore" onClick={readHandler}>{readmore ? "show more" : "show less"}</button></div>
      </div>
    </>
  )
}

export default Card