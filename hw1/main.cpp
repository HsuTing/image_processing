#include "part1.1/ReadImage.h"
#include "part1.2/DrawFrame.h"
#include "part1.3/Drawing.h"
#include "part2.1/ReadVideo.h"
#include "part2.2/ShowVideoTime.h"
#include "part2.3/VideoSlideBar.h"
#include <iostream>

using namespace std;

int main() {
  ReadImage part_one_one("data/test.jpg");
  DrawFrame part_one_two(part_one_one.GetMat());
  Drawing part_one_three(part_one_two.GetMat(), part_one_two.GetStart(), part_one_two.GetEnd());

  ReadVideo part_two_one("data/test.mp4");
  ShowVideoTime part_two_two("data/test.mp4");
  VideoSlideBar part_two_three("data/test.mp4");

  return 0;
}
