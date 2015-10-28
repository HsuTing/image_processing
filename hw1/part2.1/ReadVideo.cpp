#include "ReadVideo.h"

ReadVideo::ReadVideo(string name) {
  filename = name;
  Mat frame;
  VideoCapture cap(filename);

  if(!cap.isOpened()) {
    cout << "Could not open or find the video." << endl;
    return;
  }

  namedWindow("part2.1", WINDOW_AUTOSIZE);

  while(1) {
    cap >> frame;

    if(frame.empty()) {
      break;
    }

    imshow("part2.1", frame);

    if(waitKey(30) >= 0) {
      break;
    }
  }
}

string ReadVideo::GetFileName() {
  return filename;
}
