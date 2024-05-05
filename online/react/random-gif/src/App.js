import './App.css';
import Random from './components/Random';
import Tag from './components/Tag';
function App() {
  return (
    <>
    <div className='wrapper justify-center place-content-center  text-center'>
      <h1 className=''>Random gif Home page </h1>
        <div className="flex flex-col items-center">
          <Random/>
          <Tag/>
        </div>
    </div>
    </>
  );
}

export default App;
