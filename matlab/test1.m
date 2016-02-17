%%%%%%%%%%%% Render and Save F200 color stream in MATLAB figure
vid = videoinput('realsenseimaq',1);
set(vid,'FramesPerTrigger',100);
start(vid);
wait(vid);
colordata = getdata(vid);
delete(vid);
clear vid;





