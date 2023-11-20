import {useSelector} from 'react-redux';
import {selectAllPosts} from './PostSlice';
import PostAuthor from './PostAuthor';

const PostList = () => {
  const Post = useSelector(selectAllPosts)
  const renderPosts = Post.map(post => (
    <article key={post.id}>
      <h3>{post.title}</h3>
      <p>{post.content.substring(0, 100)}</p>
      <p className='postCredite'>
        <PostAuthor userID={post.userId}/>
      </p>
    </article>
  ))
  return (
    <section>
      <h2>Posts</h2>
      {renderPosts}
    </section>
  )
}

export default PostList