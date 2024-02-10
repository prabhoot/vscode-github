import './App.css';
import AllTestimonials from './components/AllTestimonials';
function App() {
  return (
    <>
      <div className="container flex items-center justify-center flex-col p-20 w-4/5 h-96 mt-64">
        <h1 className=" text-4xl font-bold select-none">Our Testimonials</h1>
        <div name="underline" className=" border-2 w-36  border-gray-500 rounded-md justify-center ml-2"/>
        <AllTestimonials/>
      </div>
    </>
  );
}
export default App;
