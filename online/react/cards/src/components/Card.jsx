import React from 'react'

function Card ({ id, name, info, prize, image }) {
  const description = info.substring(0, 200)
  return (
        <>
            <div className="card">
                <div className="card-price">{prize}</div>
                <div className="card-title">{name}</div>
                <div className="card-image" src={image} alt={name + ' image is not available'}></div>
                <div className="card-description">{description}</div>
                <button className="btn btn-primary">Not interested</button>
            </div>

        </>
  )
}

export default Card

// .card {
//     .card-image {
//     .card-content {
//     .card-title {
//     .card-description {
//     .card-price {