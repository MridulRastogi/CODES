#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main( int argc, char** argv )
{
    std::cout << "aa" << std::endl;
    std::string img = "G:/Pictures/Edit-1.jpg";
    Mat srcImage = imread(img);
    if (!srcImage.data)
        return 1;
    imshow("srcImage", srcImage);
    waitKey(0);
    return 0;
}
