import {useState} from "react";
import {useDispatch, useSelector} from "react-redux";
import {postAdded} from "./PostSlice";
import {selectAllUsers} from "../users/UsersSlice";

const AddPostForm = () => {
    const [title, setTitle] = useState('');
    const [content, setContent] = useState('');
    const [userId, setUserId] = useState('');
    const onTitleChange = e => setTitle(e.target.value);
    const onContentChange = e => setContent(e.target.value);
    const onAuthorChange = e => setUserId(e.target.value);

    const users = useSelector(selectAllUsers)
    const onSaveChange = () => {
        if (title && content&&userId) {
            dispatch(postAdded(title, content, userId))
        }
        setTitle('')
        setContent('')
    }
    const canSave = Boolean(title) && Boolean(content) && Boolean(userId)
    const usersOption = users.map(user => {
        return (
            <option key={user.id} value={user.id}>
                {user.name}
            </option>
        );
    })
    const dispatch = useDispatch()
    return (
        <>
            <div>AddPostForm</div>
            <form>
                <label htmlFor="postTitle">post title:</label>
                <input type="text" id="postTitle" name="postTitle" value={title} onChange={onTitleChange} />
                <select id="userId" value={userId} onChange={onAuthorChange}>
                    <option value="none"></option>
                    {usersOption}
                </select>
                <label htmlFor="contentTitle">content title:</label>
                <input type="text" id="contentTitle" name="contentTitle" value={content} onChange={onContentChange} />
                <button type="button" onClick={onSaveChange} disabled={!canSave}>save </button>
            </form>
        </>
    )
}

export default AddPostForm 