/*
#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    Mat img = imread("G:/Pictures/Edit-1.jpg",IMREAD_COLOR);
    if(img.empty())
    {
        cout<<"Error!!"<<endl;
        cin.get();
        return -1;
    }
    else
        cout<<"Image Found"<<endl;
    return 0;
}
*/
#include<iostream>
#include<opencv2/opencv.cpp>
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
