#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <algorithm>
#include <random>
#include <stdlib.h>
#include <time.h>

cv::Mat drawGridAssistant(cv::Mat image, cv::Scalar color, int dividers, int lineWidth, bool doShuffle){
	
	cv::Mat result = image.clone();	
	int offset = lineWidth/2;

	int trimmedHeight = result.size().height - (offset*2);
	int trimmedWidth = result.size().width - (offset*2);
	
	int perHeight = trimmedHeight/dividers;
	int perWidth = trimmedWidth/dividers;

	// shuffle the pieces if doShuffle
	if(doShuffle){
		int current = 0;
		cv::Mat pieces[dividers*dividers];
		for(int i=0; i<dividers; i++){
			for(int j=0; j<dividers; j++){
				cv::Rect region(j*perWidth, i*perHeight, perWidth, perHeight);
				pieces[current] = image(region);
				current = current + 1;
			}
		}
		
		srand(time(NULL));
		std::random_shuffle(pieces, pieces+(current-1));
		
		current = 0;
		for(int i=0; i<dividers; i++){
			for(int j=0; j<dividers; j++){
				cv::Mat location(result, cv::Rect(j*perWidth, i*perHeight, perWidth, perHeight));
				pieces[current].copyTo(location);
				current = current + 1;
			}
		}

	}

	// draw the grid
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
