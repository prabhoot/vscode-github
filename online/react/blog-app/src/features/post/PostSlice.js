import {createSlice, nanoid} from "@reduxjs/toolkit";

const initialState = [
    {id: '1', title: 'learning redux toolkit', content: "I've heard good things.",users:'John'},
    {id: '2', title: 'Slices...', content: "I have also heard very good thing about redux-toolkit.",users:'rator'},
]

const postSlice = createSlice({
    name: "posts",
    initialState,
    reducers:{
        postAdded:{
            reducer(state,action){
                state.push(action.payload)
            },
            prepare(title,content,userId){
                return{payload:{id:nanoid(),title,content,userId}}
            },
        }
    }
})
export const selectAllPosts = (state) => state.posts;
export const {postAdded} = postSlice.actions;
export default postSlice.reducer;
