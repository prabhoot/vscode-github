// import {useFormik} from 'formik';
// const BasicForm=()=>{
//     const formik= useFormik({
//         initialValues:{
//             email:""
//         }
//     })
//     return (
//         <form autoComplete="off">
//         <h1>This is a form</h1>
//         <label htmlFor="email">Email:</label>
//         <input value={formik.value.email} onChange={formik.handlechange} type="email" id="email" placeholder="Enter your email" />
//         </form>
//     );
// };
// export default BasicForm
import {useFormik} from 'formik'
const BasicForm=()=>{
    const formik=useFormik({
        email:""
    })
    return(
        <>
        <h1>this is a form</h1>
        <form autoComplete='off'>
            <label htmlFor="email">Email: </label>
            <input value={formik.values.email} onChange={formik.handleChange} type="email" placeholder='Enter your email' />
        </form>
        </>
    )
}
export default BasicForm;