import {createSlice} from "@reduxjs/toolkit";
const initialState={
    value:0
};
export const counterSlice=createSlice({
    name:"",
    initialState,
    reducers:{
        increment:(state)=>{
            state+=1;
        },
        decrement:(state)=>{
            state-=1;
        }
    }
});

const {increment,decrement}=counterSlice.actions;
export default counterSlice.reducer;