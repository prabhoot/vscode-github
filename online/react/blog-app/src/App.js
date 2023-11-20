import './App.css';
import AddPostForm from './features/post/AddPostForm';
import PostList from './features/post/PostList';
function App() {
  return (
    <div className="App">
      <PostList/>
      <AddPostForm/>
    </div>
  );
}
export default App;
