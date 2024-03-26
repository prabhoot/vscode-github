import {useState} from 'react';
import {Route, Routes} from 'react-router-dom';
import About from './pages/About';
import Contact from './pages/Contact';
import Container from './pages/Container';
import Dashboard from './pages/Dashboard';
import Home from './pages/Home';
import Login from './pages/Login';
import NotFound from './pages/NotFound';
import Signup from './pages/Signup';

function App() {
  const [isLogin, setIsLogin] = useState(false)
  return (
    <div className='bg-purple-300 z-30 absolute'>
      <Routes>
        <Route path="/" element={<Container isLogin={isLogin} setIsLogin={setIsLogin}/>} >
          {/* index is used for default routing */}
          <Route index element={<Home isLogin={isLogin} setIsLogin={setIsLogin}/>} />
          <Route path="/about" element={<About />} />
          <Route path="/contact" element={<Contact />} />
          <Route path="/login" element={<Login setIsLogin={setIsLogin} />} />
          <Route path="/dashboard" element={<Dashboard/>} />
          <Route path="/signup" element={<Signup setIsLogin={setIsLogin}  />} />
          <Route path="*" element={<NotFound />} />
        </Route>
      </Routes>
    </div>
  );
}

export default App;