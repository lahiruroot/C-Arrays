<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>SocialBook</title>
    <link rel="stylesheet" href="style.css">
    <script src="https://kit.fontawesome.com/3008708a75.js" crossorigin="anonymous"></script>
</head>
<body>

    <nav>
        <div class="nav-left">
            <img src="images/logo.png" class="logo">
            <ul>
                <li><img src="images/notification.png"></li>
                <li><img src="images/inbox.png"></li>
                <li><img src="images/video.png"></li>
            </ul>
        </div>
        <div class="nav-right">
           
           <div class="search-box">
               <img src="images/search.png">
               <input type="text" placeholder="Search">
           </div>
           <div class="nav-user-icon online" onclick="settingsMenuToggle()">
              <img src="images/profile-pic.png" >
           </div>
           
        </div>
        <!-------------settings menu-------------->
        <div class="settings-menu">

            <div id="dark-btn">
                <span></span>
            </div>

            <div class="settings-menu-inner">
                <div class="user-profile">
                    <img src="images/profile-pic.png">
                    <div>
                        <p>John Nicholson</p>
                        <a href="#">See your profile</a>
                    </div>
                </div>
                <hr>
                <div class="user-profile">
                    <img src="images/feedback.png">
                    <div>
                        <p>Give Feedback</p>
                        <a href="#">Help us to improve the new design</a>
                    </div>
                </div>
                <hr>
                <div class="settings-links">
                    <img src="images/setting.png" class="settings-icon">
                    <a href="#">Settings & Privacy <img src="images/arrow.png" width="10px"></a>
                </div>
                <div class="settings-links">
                    <img src="images/help.png" class="settings-icon">
                    <a href="#">Help & Support <img src="images/arrow.png" width="10px"></a>
                </div>
                <div class="settings-links">
                    <img src="images/display.png" class="settings-icon">
                    <a href="#">Display & Accessibility <img src="images/arrow.png" width="10px"></a>
                </div>
                <div class="settings-links">
                    <img src="images/logout.png" class="settings-icon">
                    <a href="#">Logout <img src="images/arrow.png" width="10px"></a>
                </div>

            </div>
            
        </div>


    </nav>

    <div class="container">
    <!--------------left-sidebar------------------->
        <div class="left-sidebar">
           <div class="imp-links">
            <a href="#"><img src="images/news.png"> Latest News</a>
            <a href="#"><img src="images/friends.png"> Latest News</a>
            <a href="#"><img src="images/group.png"> Latest News</a>
            <a href="#"><img src="images/marketplace.png"> Latest News</a>
            <a href="#"><img src="images/watch.png"> Latest News</a>
            <a href="#">See More</a>
            </div>
            <div class="shortcut-links">
                <p>Your Shortcuts</p>
                <a href="#"><img src="images/shortcut-1.png">Web Developers</a>
                <a href="#"><img src="images/shortcut-2.png">Web Desing Course</a>
                <a href="#"><img src="images/shortcut-3.png">Full Stack Development</a>
                <a href="#"><img src="images/shortcut-4.png">Website Experts</a>
            </div>
        </div>
        <!--------------main-content------------------->
        <div class="main-content">

            <div class="story-gallery">
                <div class="story story1">
                    <img src="images/upload.png">
                    <p>Post Story</p>
                </div>
                <div class="story story2">
                    <img src="images/member-1.png">
                    <p>Alison</p>
                </div>
                <div class="story story3">
                    <img src="images/member-2.png">
                    <p>Jackson</p>
                </div>
                <div class="story story4">
                    <img src="images/member-3.png">
                    <p>Samona</p>
                </div>
                <div class="story story5">
                    <img src="images/member-4.png">
                    <p>John Doe</p>
                </div>
            </div>
            
            <div class="write-post-container">
                <div class="user-profile">
                    <img src="images/profile-pic.png">
                    <div>
                        <p>John Nicholson</p>
                        <small>Public <i class="fa-solid fa-caret-down"></i></small>
                    </div>
                </div>

                <div class="post-input-container">
                    <textarea rows="3" placeholder="What's on your mind, john?"></textarea>
                    <div class="add-post-links">
                        <a href="#"><img src="images/live-video.png"> Live Video</a>
                        <a href="#"><img src="images/photo.png"> Photo/Video</a>
                        <a href="#"><img src="images/feeling.png"> Feling/Activity</a>
                    </div>
                </div>
            </div>

            <div class="post-container">
                <div class="post-row">
                    <div class="user-profile">
                        <img src="images/profile-pic.png">
                        <div>
                            <p>John Nicholson</p>
                            <span>June 24 2022, 13:40 pm</span>
                        </div>
                    </div>
                    <a href="#"><i class="fa-solid fa-ellipsis-v"></i></a>
                </div>
                
                <p class="post-text">Subscribe <span>@Easy Tutorials</span> YouTube Channel to watch more videos on website development and UI designs. <a href="#">#EasyTutorials</a> <a href="#">#YouTubeChannel</a></p>
                <img src="images/feed-image-1.png" class="post-img">

                <div class="post-row">
                    <div class="activity-icons">
                       <div><img src="images/like-blue.png"> 121</div>
                       <div><img src="images/comments.png"> 45</div>
                       <div><img src="images/share.png"> 20</div>
                    </div>
                    <div class="post-profile-icon">
                        <img src="images/profile-pic.png"> <i class="fa-solid fa-caret-down"></i>
                    </div>
                </div>
            </div>
            <div class="post-container">
                <div class="post-row">
                    <div class="user-profile">
                        <img src="images/profile-pic.png">
                        <div>
                            <p>John Nicholson</p>
                            <span>June 24 2022, 13:40 pm</span>
                        </div>
                    </div>
                    <a href="#"><i class="fa-solid fa-ellipsis-v"></i></a>
                </div>
                
                <p class="post-text">Like and share this video with friends, tag <span>@Easy Tutorials</span> facebook page on your post. Ask your doubts in the comments <a href="#">#EasyTutorials</a> <a href="#">#YouTubeChannel</a></p>
                <img src="images/feed-image-2.png" class="post-img">

                <div class="post-row">
                    <div class="activity-icons">
                       <div><img src="images/like.png"> 121</div>
                       <div><img src="images/comments.png"> 45</div>
                       <div><img src="images/share.png"> 20</div>
                    </div>
                    <div class="post-profile-icon">
                        <img src="images/profile-pic.png"> <i class="fa-solid fa-caret-down"></i>
                    </div>
                </div>
            </div>
            <div class="post-container">
                <div class="post-row">
                    <div class="user-profile">
                        <img src="images/profile-pic.png">
                        <div>
                            <p>John Nicholson</p>
                            <span>June 24 2022, 13:40 pm</span>
                        </div>
                    </div>
                    <a href="#"><i class="fa-solid fa-ellipsis-v"></i></a>
                </div>
                
                <p class="post-text">Subscribe <span>@Easy Tutorials</span> YouTube Channel to watch more videos on website development and UI designs. <a href="#">#EasyTutorials</a> <a href="#">#YouTubeChannel</a></p>
                <img src="images/feed-image-3.png" class="post-img">

                <div class="post-row">
                    <div class="activity-icons">
                       <div><img src="images/like-blue.png"> 121</div>
                       <div><img src="images/comments.png"> 45</div>
                       <div><img src="images/share.png"> 20</div>
                    </div>
                    <div class="post-profile-icon">
                        <img src="images/profile-pic.png"> <i class="fa-solid fa-caret-down"></i>
                    </div>
                </div>
            </div>
            <div class="post-container">
                <div class="post-row">
                    <div class="user-profile">
                        <img src="images/profile-pic.png">
                        <div>
                            <p>John Nicholson</p>
                            <span>June 24 2022, 13:40 pm</span>
                        </div>
                    </div>
                    <a href="#"><i class="fa-solid fa-ellipsis-v"></i></a>
                </div>
                
                <p class="post-text">Subscribe <span>@Easy Tutorials</span> YouTube Channel to watch more videos on website development and UI designs. <a href="#">#EasyTutorials</a> <a href="#">#YouTubeChannel</a></p>
                <img src="images/feed-image-4.png" class="post-img">

                <div class="post-row">
                    <div class="activity-icons">
                       <div><img src="images/like-blue.png"> 121</div>
                       <div><img src="images/comments.png"> 45</div>
                       <div><img src="images/share.png"> 20</div>
                    </div>
                    <div class="post-profile-icon">
                        <img src="images/profile-pic.png"> <i class="fa-solid fa-caret-down"></i>
                    </div>
                </div>
            </div>
            <div class="post-container">
                <div class="post-row">
                    <div class="user-profile">
                        <img src="images/profile-pic.png">
                        <div>
                            <p>John Nicholson</p>
                            <span>June 24 2022, 13:40 pm</span>
                        </div>
                    </div>
                    <a href="#"><i class="fa-solid fa-ellipsis-v"></i></a>
                </div>
                
                <p class="post-text">Subscribe <span>@Easy Tutorials</span> YouTube Channel to watch more videos on website development and UI designs. <a href="#">#EasyTutorials</a> <a href="#">#YouTubeChannel</a></p>
                <img src="images/feed-image-5.png" class="post-img">

                <div class="post-row">
                    <div class="activity-icons">
                       <div><img src="images/like-blue.png"> 121</div>
                       <div><img src="images/comments.png"> 45</div>
                       <div><img src="images/share.png"> 20</div>
                    </div>
                    <div class="post-profile-icon">
                        <img src="images/profile-pic.png"> <i class="fa-solid fa-caret-down"></i>
                    </div>
                </div>
            </div>


            <button type="button" class="load-more-btn">Load More</button>




        </div>
        <!--------------right-sidebar------------------->
        <div class="right-sidebar">

            <div class="sidebar-title">
                <h4>Events</h4>
                <a href="#">See All</a>
            </div>

            <div class="event">
                <div class="left-event">
                    <h3>18</h3>
                    <span>March</span>
                </div>
                <div class="right-event">
                    <h4>Social Media</h4>
                    <p><i class="fa-solid fa-location-dot"></i> Willson Tech Park</p>
                    <a href="#">More Info</a>
                </div>
            </div>
            <div class="event">
                <div class="left-event">
                    <h3>22</h3>
                    <span>June</span>
                </div>
                <div class="right-event">
                    <h4>Mobile Marketing</h4>
                    <p><i class="fa-solid fa-location-dot"></i> Willson Tech Park</p>
                    <a href="#">More Info</a>
                </div>
            </div>
            <div class="sidebar-title">
                <h4>Advertisment</h4>
                <a href="#">Close</a>
            </div>
            <img src="images/advertisement.png" class="sidebar-ads">
            
            <div class="sidebar-title">
                <h4>Conversation</h4>
                <a href="#">Hide Chat</a>
            </div>

            <div class="online-list">
                <div class="online">
                    <img src="images/member-1.png" >
                </div>
                <p>Alison Mina</p>
            </div>
            <div class="online-list">
                <div class="online">
                    <img src="images/member-2.png" >
                </div>
                <p>Jackson Aston</p>
            </div>
            <div class="online-list">
                <div class="online">
                    <img src="images/member-3.png" >
                </div>
                <p>Samona Rose</p>
            </div>
            

        </div>
    </div>

<div class="footer">
    <p>Copyright 2022 - Kelum Herath</p>
</div>
<script src="script.js"></script>
</body>
</html>
