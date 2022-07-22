#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "gridAssistant.cpp"
#include "portraitAssistant.cpp"

int main(){
	cv::Mat source = cv::imread("../test/Lenna.png");
	cv::Mat result = drawPortraitAssistant(source, cv::Point(source.size().width/2, source.size().height/2), cv::Scalar(255, 255, 255), 3, 8, 150);
	cv::imshow("result", result);
	cv::waitKey(0);
	cv::destroyWindow("result");
	
	return 0;
}
