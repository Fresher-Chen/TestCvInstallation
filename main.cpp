#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img = imread("~/Documents/testcvinstallation/test.jpeg");	//改一下这里的路径
    imshow("mat", img);
    waitKey(5000);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
