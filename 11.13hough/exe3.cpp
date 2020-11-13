#include <opencv2/opencv.hpp>

#include <iostream>
using namespace cv;
#if 1
int main()
{
	cv::Mat src = cv::imread("c://users//lenovo//source//repos//11.13hough//18.jpg", 0);

	cv::Mat dst;
	Canny(src, dst, 53, 160, 3, false);
	imshow("dst", dst);


	std::vector<cv::Vec4i> lines;
	
	HoughLinesP(dst, lines, 1, CV_PI / 180,20,20,20);
	
	for (std::vector<cv::Vec4i>::iterator it = lines.begin(); it != lines.end(); ++it) {
		int x1 =it[0][0];
		int y1 =it[0][1];
		int x2 =it[0][2];
		int y2 =it[0][3];
		Point pt1 = Point(x1, y1);
		Point pt2 = Point(x2, y2);

		cv::line(src, pt1, pt2, cv::Scalar(255, 255, 255), 1, CV_AA);
	}
	
   cv::imshow("dst", src);

	waitKey(0);
	return 0;
}
#endif