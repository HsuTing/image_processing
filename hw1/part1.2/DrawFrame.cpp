#include "DrawFrame.h"

DrawFrame::DrawFrame(Mat img) {
  img.copyTo(image);

  if(!image.data) {                              // Check for invalid input
    cout <<  "Could not open or find the image." << endl;
    return;
  }

  namedWindow("part1.2", WINDOW_AUTOSIZE);       // Create a window for display.
  imshow("part1.2", image);                      // Show our image inside it.
  setMouseCallback("part1.2", onMouse, this);       // bind mouse event

  waitKey(0);                                    // Wait for a keystroke in the window
}

Mat DrawFrame::GetMat() {
  return drawing;
}

void DrawFrame::onMouse(int event, int x, int y, int flag, void* param) {
  DrawFrame* self = (DrawFrame*) param;
  Mat draw_image;

  if(event == CV_EVENT_LBUTTONDOWN) {
    self->start = Point(x, y);
  }

  if(flag == CV_EVENT_FLAG_LBUTTON) {
    self->image.copyTo(self->drawing);
    self->end = Point(x, y);
    rectangle(self->drawing, self->start, self->end, CV_RGB(0, 255, 0));
    imshow("part1.2", self->drawing);
  }
}
