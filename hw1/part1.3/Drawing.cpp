#include "Drawing.h"

Drawing::Drawing(Mat img) {
  img.copyTo(image);

  if(!image.data) {                              // Check for invalid input
    cout <<  "Could not open or find the image." << endl;
    return;
  }

  namedWindow("part1.3", WINDOW_AUTOSIZE);       // Create a window for display.
  imshow("part1.3", image);                      // Show our image inside it.

  waitKey(0);                                    // Wait for a keystroke in the window
}
