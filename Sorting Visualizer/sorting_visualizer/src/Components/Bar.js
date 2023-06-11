import './Bar.css';
import React from 'react'
function Bar({index,length,color}) {
    const barStyle={
        height: length
    };
    return (
        <>
            <div className="bar" style={barStyle}>
                
            </div>
        </>
    )
}

export default Bar