import {createSlice} from "@reduxjs/toolkit";

const initialState = [
    {id: '0', name: 'dude'},
    {id: '1', name: 'prabhoot'},
    {id: '2', name: 'haha'},
]

const userSlice = createSlice({
    name: 'users',
    initialState,
    reducers: {}
})
export const selectAllUsers=(state)=>state.users;
// export const {} = userSlice.actions;
export default userSlice.reducer;