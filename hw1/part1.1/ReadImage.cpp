#include "ReadImage.h"

ReadImage::ReadImage(string name) {
  filename = name;
}

void ReadImage::Show() {
  image = imread(filename, CV_LOAD_IMAGE_COLOR);   // Read the file

  if(!image.data) {                              // Check for invalid input
    cout <<  "Could not open or find the image." << endl;
    return;
  }

  namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
  imshow("Display window", image);                   // Show our image inside it.

  waitKey(0);                                          // Wait for a keystroke in the window
}
