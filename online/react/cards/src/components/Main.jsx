import Tour from "./Tour";
import data from "./Data"
import {useState} from "react";
import './card.css';
function Main() {
    const [tours, setTours] = useState(data)
    function removeTour(id) {
        const newTour = tours.filter(tour => tour.id !== id)
        setTours(newTour);
    }
    function refreshhandler() {
        setTours(data);
    }
    if (tours.length === 0)
        return (
            <>
                <h1>Nothing to Show</h1>
                <button className="bg-indigo-500" onClick={refreshhandler}>Refresh</button >
            </>
        )
    return (
        <>
            <div className="wrapper">
                <h1>Travel with me</h1>
                <Tour tours={tours} removeTour={removeTour} />
            </div>
        </>
    )
}
export default Main;