import React from 'react'
import '/home/prabhoot/vscode-github/Game/tic_tac_toe/src/'
function Main() {
  return (
    <>
      <div class="gameContainer">
        <div class="container">
          <div class="line"></div>
          <div class="box bt-0 bl-0"><span class="boxtext"></span></div>
          <div class="box bt-0"><span class="boxtext"></span></div>
          <div class="box bt-0 br-0"><span class="boxtext"></span></div>
          <div class="box bl-0"><span class="boxtext"></span></div>
          <div class="box"><span class="boxtext"></span></div>
          <div class="box br-0"><span class="boxtext"></span></div>
          <div class="box bl-0 bb-0"><span class="boxtext"></span></div>
          <div class="box bb-0"><span class="boxtext"></span></div>
          <div class="box bb-0 br-0"><span class="boxtext"></span></div>
        </div>
        <div class="gameInfo">
          <h1>Welcome to Tic Tac MyTicTacToe</h1>
          <div>
            <span class="info">Turn for X</span>
            <button id="reset">Reset</button>
          </div>
          <div class="imgbox">
            <img src="excited.gif" alt="" />
          </div>
        </div>
      </div>
    </>
  )
};

export default Main;