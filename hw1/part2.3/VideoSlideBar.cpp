#include "VideoSlideBar.h"

VideoSlideBar::VideoSlideBar(string name) {
  filename = name;
  Mat frame;
  slider_position = 0;
  cap.open(filename);

  if(!cap.isOpened()) {
    cout << "Could not open or find the video." << endl;
    return;
  }

  namedWindow("part2.3", WINDOW_AUTOSIZE);
  int max_frame = (int)cap.get(CV_CAP_PROP_FRAME_COUNT);

  if(max_frame != 0) {
    createTrackbar("Slider", "part2.3", &slider_position, max_frame, onTrackbarSlide, this);
  }

  while(1) {
    cap >> frame;

    if(frame.empty()) {
      break;
    }

    int total = cap.get(CV_CAP_PROP_POS_MSEC);
    string now = "";
    stringstream temp_hour(now);
    stringstream temp_min(now);
    stringstream temp_sec(now);

    int hour = total / 3600000;
    total = total - hour * 3600000;
    temp_hour << hour;
    now = hour < 10 ? now + "0" + temp_hour.str() + " : " : now + temp_hour.str() + " : ";

    int minute = total / 60000;
    total = total - minute * 60000;
    temp_min << minute;
    now = minute < 10 ? now + "0" + temp_min.str() + " : " : now + temp_min.str() + " : ";

    double second = (double)total / 1000;
    temp_sec << second;
    now = second < 10 ? now + "0" + temp_sec.str() : now + temp_sec.str();

    Size s = frame.size();
    putText(frame, now, Point(s.width / 2 + 20, s.height - 20), CV_FONT_HERSHEY_SIMPLEX, 1, Scalar(255), 2, 8, false);
    imshow("part2.3", frame);

    setTrackbarPos("Slider", "part2.3", ++slider_position);

    if(waitKey(30) >= 0) {
      break;
    }
  }
}

string VideoSlideBar::GetFileName() {
  return filename;
}

void VideoSlideBar::onTrackbarSlide(int current_frame, void* obj) {
  VideoSlideBar* self = (VideoSlideBar*)obj;
  self->cap.set(CV_CAP_PROP_POS_FRAMES, current_frame);
}
