#include "opencv2/opencv.hpp"
#include <cstring>
#include <iostream>

using namespace cv;
using namespace std;

class ShowVideoTime {
  public:
    ShowVideoTime(string name);
    string GetFileName();

  private:
    Mat frame;
    string filename;
};
