import React from 'react';
function NotFound() {
  return (
    <>
      <div>404
      </div>
      <div className='flex bg-slate-100 relative justify-center items-center border-8 w-screen h-screen z-10'>
        Error Occurred! Page could not be found
        {/* <button onClick={gotoMainHandler}> go to main Page</button> */}
      </div>
    </>
  )
}

export default NotFound