import React from 'react'
import {RiDoubleQuotesL, RiDoubleQuotesR} from "react-icons/ri";
function Card(props) {
    console.log(props);
    const data=props;

    return (
        <>
            <div>
                <img className=" w-48 h-48 rounded-full float-left hover:shadow-lg -translate-y-36 z-20 absolute select-none" src={data.image} alt={data.alt} />
                <div className="w-48 h-48 rounded-full bg-purple-600 translate-x-2 -translate-y-36 z-10 absolute"></div>
                <span className="font-bold text-lg flex justify-center select-none">{data.name}</span>
                <div className="text-slate-400 flex justify-center select-none">{data.job}</div>
                <div className="flex justify-center"><RiDoubleQuotesL /></div>
                <div className="flex justify-center items-center text-lg font-serif w-30 h-40">{data.text}</div>
                <div className="flex justify-center"><RiDoubleQuotesR />
                </div>
            </div>
        </>
    )
}

export default Card