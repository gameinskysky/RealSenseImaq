%%%%%%%%%%%% Retrieve the color brightness of current input
vid = videoinput('realsenseimaq', 1);
src = getselectedsource(vid);
get(src)

%%%%%%%%%%%% Adjust the value of color brightness
src.color_brightness=70;