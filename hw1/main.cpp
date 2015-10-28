#include "part1.1/ReadImage.h"
#include "part1.2/DrawFrame.h"
#include "part1.3/Drawing.h"
#include <iostream>

using namespace std;

int main() {
  ReadImage part_one_one("data/test.jpg");
  DrawFrame part_one_two(part_one_one.GetMat());
  Drawing part_one_three(part_one_two.GetMat());

  return 0;
}
