#include "ReadImage.h"

ReadImage::ReadImage(string filename) {
  image = imread(filename, CV_LOAD_IMAGE_COLOR);   // Read the file

  if(!image.data) {                                // Check for invalid input
    cout <<  "Could not open or find the image." << endl;
    return;
  }

  namedWindow("part1.1", WINDOW_AUTOSIZE);         // Create a window for display.
  imshow("part1.1", image);                        // Show our image inside it.

  waitKey(0);                                      // Wait for a keystroke in the window
}

Mat ReadImage::GetMat() {
  return image;
}
