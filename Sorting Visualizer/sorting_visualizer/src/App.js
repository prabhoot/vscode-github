import {React, Component} from 'react';
import './App.css';
import Bar from './Components/Bar';
class App extends Component {
  state = {
    array: [],
    arraySteps: [],
    colorKey: [],
    colorSteps: [],
    currentStep: 0,
    count: 10,
    delay: 100,
    algorithm: '',
    timeouts: [],
  };
  componentDidMount() {
    this.generateRandomArray();
  }
  generateRandomNumber = (min, max) => {
    return Math.floor(Math.random() * (max - min) + min);
  }
  generateRandomArray = () => {
    const count = this.state.count;
    const temp = [];
    for (let i = 0; i < count; i++) {
      temp.push(this.generateRandomNumber(50, 200))
    }
    // console.log(temp);
    this.setState({
      array: temp,
      arraySteps: [temp]
    })
  };
  render() {
    let bars = this.state.array.map((value, index) => {
      return (
        <>
          <Bar key={value} index={index} length={value} color={0} />
          {/* {value} */}
        </>
      )
    })
    return (
      <div className="app">
        <div className="frame">
          <div className="barsDiv container card">{bars}</div>
        </div>
        <div className="control-pannel"></div>
        <div className="pannel"></div>
      </div>

    );
  }
}

export default App;
