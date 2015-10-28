#include "Drawing.h"

Drawing::Drawing(Mat img, Point s, Point e) {
  img.copyTo(image);
  start = Point((s.x < e.x ? s.x : e.x), (s.y < e.y ? s.y : e.y));
  end = Point((s.x >= e.x ? s.x : e.x), (s.y >= e.y ? s.y : e.y));
  Mat choosing;

  if(!image.data) {                              // Check for invalid input
    cout <<  "Could not open or find the image." << endl;
    return;
  }

  Rect rect(start.x, start.y, (end.x - start.x), (end.y - start.y));
  image(rect).copyTo(choosing);

  namedWindow("part1.3", WINDOW_AUTOSIZE);       // Create a window for display.
  imshow("part1.3", choosing);                      // Show our image inside it.

  waitKey(0);                                    // Wait for a keystroke in the window
}
