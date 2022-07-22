#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

cv::Mat drawPortraitAssistant(cv::Mat source, cv::Point center, cv::Scalar color, int lineWidth, int divisions, int radius){
	cv::Mat result = source.clone();
	
	int x = center.x;
	int y = center.y;
	
	int width = result.size().width;
	int height = result.size().height;

	cv::circle(result, center, radius, color, lineWidth, cv::LINE_8);
	if(divisions>=4){
		cv::line(result, cv::Point(x, y+radius), cv::Point(x, y-radius), color, lineWidth, cv::LINE_8);
		cv::line(result, cv::Point(x+radius, y), cv::Point(x-radius, y), color, lineWidth, cv::LINE_8);
	}
	if(divisions>=8){
		double offset = double(radius) * 0.726; // 0.726 is approximitely the cosine of 45 degrees in radians
		cv::line(result, cv::Point(x-offset, y-offset), cv::Point(x+offset, y+offset), color, lineWidth, cv::LINE_8);
		cv::line(result, cv::Point(x+offset, y-offset), cv::Point(x-offset, y+offset), color, lineWidth, cv::LINE_8);
	}

	return result;
}
