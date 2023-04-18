import './App.css';
import Header from "./my_componets/header";
import {Todos} from "./my_componets/Todos";
import {Footer} from "./my_componets/Footer";
function App() {
  return (
    <>
    <Header title="My Todo List" searchbar={true} />
    <Todos/>
    <Footer/>
    </>
  );
}

export default App;
