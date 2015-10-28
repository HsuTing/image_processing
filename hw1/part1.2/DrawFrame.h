#include "opencv2/opencv.hpp"
#include <cstring>
#include <iostream>

using namespace cv; 
using namespace std;

class DrawFrame {
  public:
    DrawFrame(Mat img);
    Mat GetMat();

  private:
    Mat image;
    Mat drawing;
    Point start;
    Point end;

    static void onMouse(int event, int x, int y, int flags, void* param);
};
