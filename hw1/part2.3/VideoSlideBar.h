#include "opencv2/opencv.hpp"
#include <cstring>
#include <iostream>

using namespace cv;
using namespace std;

class VideoSlideBar {
  public:
    VideoSlideBar(string name);
    string GetFileName();

  private:
    Mat frame;
    string filename;
    VideoCapture cap;
    int slider_position;

    static void onTrackbarSlide(int current_frame, void* obj);
};
