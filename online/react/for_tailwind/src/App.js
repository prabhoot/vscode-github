export default function App() {
  return (<>
    < div className="text-3xl font-bold text-yellow-500 border-red-500 border-2 m-2 p-2 flex justify-center bg-yellow-100 ">
      Hello world!
    </div>
    <div className="text-myColor border-myColor">this is my color</div>
    <div className="container bg-yellow-200">hello</div>
    <h1>hello ji</h1>
    {/* the red color in h1 is applied from the index.css file */}
    <div>
      <input type="checkbox"id="checkbox" />
      <label htmlFor="checkbox">Mark it</label>
    </div>
  </>
  )
}