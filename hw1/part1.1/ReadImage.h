#include "opencv2/opencv.hpp"
#include <cstring>
#include <iostream>

using namespace cv;
using namespace std;

class ReadImage {
  public:
    ReadImage(string name);
    Mat GetMat();

  private:
    Mat image;
};
