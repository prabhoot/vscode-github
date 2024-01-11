import Card from './Card';
function Tour({tours},removeTour) {
  return (
    <>
    <div>
      {/* {tours.map((tour)=>{return(<Card {...tour} removeTour={removeTour} />)})} */}
      <Card{...tours}/>
    </div>
    </>
  );
}

export default Tour
