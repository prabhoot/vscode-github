import Card from './Card';
function Tour({tours,removeTour}) {
  return (
    <>
      <div>
       {tours.map(tour=> <Card key={tour.id} {...tour} removeTour={removeTour}/>)}
      </div>
    </>
  );
}

export default Tour


// removeTour={removeTour}