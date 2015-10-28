#include "opencv2/opencv.hpp"
#include <cstring>
#include <iostream>

using namespace cv;
using namespace std;

class Drawing {
  public:
    Drawing(Mat img, Point s, Point e);

  private:
    Mat image;
    Point start;
    Point end;
};
