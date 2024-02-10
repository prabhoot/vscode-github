import {useState} from 'react';
function App() {
  const [formData, setFormData] = useState({firstName: "", description: "", checkMe: false, mode: ""})
  function formChangeHandler(e) {
    const {name, type, checked, value} = e.target;
    setFormData(prevData => {
      return ({
        ...prevData, [name]: (type === "checkbox" ? checked : value)
      })
    })
  }
  function submitHandler(e) {
    e.preventDefault()
    console.log("The stored Value is:")
    console.log(formData);
  }
  return (
    <>
      <h1>this is for form</h1>
      <form onSubmit={submitHandler} className='flex flex-col'>
        <fieldset>
          <legend> This is a form</legend>
          <input name="firstName" type="text" placeholder="enter the text" onChange={formChangeHandler} value={formData.firstName} />
          <textarea name="description" cols="30" rows="10" onChange={formChangeHandler} value={formData.description} />
          <input type='checkbox' checked={formData.checkMe} id="checkMe" name="checkMe" onChange={formChangeHandler} />
          <label htmlFor="checkMe">i am a checkbox </label>
          <input type="radio" name="mode" value="online" id="online" checked={formData.mode === "online"} onChange={formChangeHandler} />
          <label htmlFor="online">Online Mode</label>
          <input type="radio" name="mode" value="offline" id="offline" checked={formData.mode === "offline"} onChange={formChangeHandler} />
          <label htmlFor="offline">Offline Mode</label>
          <button>SUBMIT</button>
        </fieldset>
      </form>
    </>
  );
}

export default App;
