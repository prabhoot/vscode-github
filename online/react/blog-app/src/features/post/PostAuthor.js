import {useSelector} from "react-redux";
import {selectAllUsers} from "../users/UsersSlice";

const PostAuthor = ({userId}) => {
    const users=useSelector(selectAllUsers);
    const author= users.find(user=>user.id===userId);
  return (
    <span>by {userId?users.name:"not known"}</span>
  )
}

export default PostAuthor;