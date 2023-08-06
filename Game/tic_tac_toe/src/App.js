import Main from './components/Main';
import './App.css';
// import './mycss.css';
import React from 'react';
import Navbar from './components/Navbar';
<script src="./componets/script.js"/>
function App() {
  return (
    <div className="App">
      <header className="App-header">
        <center>
          <Navbar/>
          <Main/>
        </center>
      </header>
    </div>
  );
}

export default App;
