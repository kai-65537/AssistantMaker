#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "gridAssistant.cpp"

int main(){
	cv::Mat source = cv::imread("../test/Lenna.png");
	cv::Mat result = makeGridAssistant(source, cv::Scalar(255, 255, 255), 3, 5);
	cv::imshow("result", result);
	cv::waitKey(0);
	cv::destroyWindow("result");
	
	return 0;
}
