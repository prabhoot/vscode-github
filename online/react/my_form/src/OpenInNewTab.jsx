// OpenInNewTab.js
import React from 'react';
import ReactDOM from 'react-dom';
import Blogs from './Blogs';

const OpenInNewTab = () => {
  const openNewTab = () => {
    const newTab = window.open('', '_blank');
    ReactDOM.render(<Blogs />, newTab.document.getElementById('root')); // Render your component in the new tab's 'root' element
  };

  return (
    <div>
      <button onClick={openNewTab}>Open in New Tab</button>
    </div>
  );
};

export default OpenInNewTab;
