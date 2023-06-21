import React from "react";
import PropTypes from "prop-types";
export default function Navbar(props) {
  return (
    <div className="container-fluid">
      <div className="row">
        <div className="col-lg-11 mx-auto">
          <div>
            <nav className="navbar navbar-expand-lg navbar-light bg-light ms-5">
              <div className="container-fluid">
                <a className="navbar-brand fs-3 fw-bold" href="_blank">
                  {props.title}
                </a>
                <button className="navbar-toggler" type="button" data-bdb-toggle="collapse" data-bdb-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                  <span className="navbar-toggler-icon"></span>
                </button>
                <div className="collapse navbar-collapse" id="navbarSupportedContent ms-5">
                  <ul className="navbar-nav me-auto mb-2 mb-lg-0">
                    <li className="nav-item">
                      <a className="nav-link active" aria-current="page" href="_blank">
                        Home
                      </a>
                    </li>
                    <li className="nav-item">
                      <a className="nav-link active" aria-current="page" href="_blank">
                        Gallery
                      </a>
                    </li>
                    <li className="nav-item">
                      <a className="nav-link active" aria-current="page" href="_blank">
                        Offers
                      </a>
                    </li>
                    <li className="nav-item">
                      <a className="nav-link active" aria-current="page" href="_blank">
                        Contact Us
                      </a>
                    </li>
                    <li className="nav-item dropdown ">
                      <a className="nav-link dropdown-toggle " href="_blank" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                        Booking
                      </a>
                      <ul className="dropdown-menu" aria-labelledby="navbarDropdown">
                        <li>
                          <a className="dropdown-item" href="_blank">
                            Fights
                          </a>
                        </li>
                        <li>
                          <a className="dropdown-item" href="_blank">
                            Trains
                          </a>
                        </li>
                        <li>
                          <hr className="dropdown-divider" />
                        </li>
                        <li>
                          <a className="dropdown-item" href="_blank">
                            AI Booking (beta)
                          </a>
                        </li>
                      </ul>
                    </li>
                  </ul>
                  <form class="w-auto me-5">
                    <input type="search" class="form-control " placeholder="Search on Page" aria-label="Search" />
                  </form>
                  <div className="btn-group me-5 ml-5">
                    <button type="button" className="btn btn-success">
                      Log in
                    </button>
                    <button type="button" className="btn btn-secondary dropdown-toggle dropdown-toggle-split" data-bs-toggle="dropdown" aria-expanded="false">
                      <span className="visually-hidden">pata nhi </span>
                    </button>
                    <ul className="dropdown-menu">
                      <li>
                        <a className="dropdown-item" href="_blank">
                          Sign Up
                        </a>
                      </li>
                      <li>
                        <a className="dropdown-item" href="_blank">
                          Forgot Password
                        </a>
                      </li>
                      <li>
                        <hr className="dropdown-divider" />
                      </li>
                      <li>
                        <a className="dropdown-item" href="_blank">
                          Need Help?
                        </a>
                      </li>
                    </ul>
                  </div>
                </div>
              </div>
            </nav>
          </div>
        </div>
      </div>
    </div>
  );
}
Navbar.prototype = {title: PropTypes.string.isRequired};
Navbar.defaultProps = {title: "set your title "};
