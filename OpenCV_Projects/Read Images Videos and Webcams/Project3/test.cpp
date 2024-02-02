#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////////  Images  //////////////////////

int main() {
    string path = "Resources/test.png";
    Mat img = imread(path);

    if (img.empty()) {
        cerr << "Error loading image." << endl;
        return -1;
    }

    imshow("Image", img);
    waitKey(0);

    return 0;
}
