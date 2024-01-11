import Tour from "./Tour";
import data from "./Data"
import {useState} from "react";
function Main(){
    const [tours,setTours]=useState(data)
    function removeTour(id){
        const newTour=tours.filter(tour=>tour.id!==id)
        setTours(newTour);
    }
    return(
        <>
            <div className="wrapper">
                <h1>Travel with me</h1>
                <Tour {...tours} removeTour={removeTour}/>
            </div>
        </>
    )
}
export default Main;