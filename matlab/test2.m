%%%%%%%%%%%% Render and Save F200 color and depth streams simultaneously
vid = videoinput('realsenseimaq', 1);
vid2 = videoinput('realsenseimaq',2);

vid.FramesPerTrigger = 100;
vid2.FramesPerTrigger = 100;
vid.TriggerRepeat = 1;
vid2.TriggerRepeat = 1;

triggerconfig([vid vid2],'manual');
start([vid vid2]);
trigger([vid vid2]);
    
[imgColor, ts_color, metaData_Color] = getdata(vid);
[imgDepth, ts_depth, metaData_Depth] = getdata(vid2);
 
stop([vid vid2]);