#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img = imread("../TestCvInstallation/test.jpg");	//改一下这里的路径
    imshow("mat", img);
    waitKey(5000);
    std::cout << "Test Pass!" << std::endl;
    return 0;
}
