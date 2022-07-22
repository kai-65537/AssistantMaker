#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

cv::Mat drawGridAssistant(cv::Mat image, cv::Scalar color, int dividers, int lineWidth){
	
	cv::Mat result = image.clone();

	int offset = lineWidth/2;

	int trimmedHeight = result.size().height - (offset*2);
	int trimmedWidth = result.size().width - (offset*2);
	
	int perHeight = trimmedHeight/dividers;
	int perWidth = trimmedWidth/dividers;

	for(int i=0; i<dividers+1; i++){
		cv::Point verticalStart = cv::Point(offset+perWidth*i, offset);
		cv::Point verticalEnd = cv::Point(offset+perWidth*i, offset+trimmedHeight);

		cv::Point horizontalStart = cv::Point(offset, offset+perHeight*i);
		cv::Point horizontalEnd = cv::Point(offset+trimmedWidth, offset+perHeight*i);

		cv::line(result, verticalStart, verticalEnd, color, lineWidth, cv::LINE_8);
		cv::line(result, horizontalStart, horizontalEnd, color, lineWidth, cv::LINE_8);
	}

	return result;
}
