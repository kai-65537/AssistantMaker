#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "gridAssistant.cpp"
#include "prisonAssistant.cpp"
#include "portraitAssistant.cpp"

int main(){
	cv::Mat source = cv::imread("../test/Lenna.png");
	cv::Mat result = drawPrisonAssistant(source, cv::Scalar(255, 255, 255), 3, 4, false);
	cv::imshow("result", result);
	cv::waitKey(0);
	cv::destroyWindow("result");
	
	return 0;
}
