//#include <opencv2/opencv.hpp>
//#include<vector>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat src = cv::imread("c://users//lenovo//source//repos//11.13hough//18.jpg", 0);
//	cv::Mat dst;
//	int ratio = 3;
//	double lowThreshold = 65;
//	Canny(src, dst, lowThreshold, lowThreshold * ratio, 3, false);
//	imshow("dst", dst);
//
//
//	std::vector <cv::Vec2f>lines;
//	HoughLines(dst, lines, 1, CV_PI / 180, 92, 0, 0, 0, CV_PI);
//
//	std::vector<cv::Vec2f>::iterator it = lines.begin();
//	for (; it != lines.end(); ++it) {
//		float rho = (*it)[0], theta = (*it)[1];
//		cv::Point pt1, pt2;
//		double a = cos(theta);
//		double b = sin(theta);
//		double x0 = a * rho;
//		double y0 = rho;
//		pt1.x = cv::saturate_cast<int>(x0 + 1000 * (-b));
//		pt1.y = cv::saturate_cast<int>(y0 + 1000 * (a));
//		pt2.x = cv::saturate_cast<int>(x0 - 1000 * (-b));
//		pt2.y = cv::saturate_cast<int>(y0 - 1000 * (a));
//		cv::line(src, pt1, pt2, cv::Scalar(255, 255, 255), 1, CV_AA);
//	}
//
//
//	cv::imshow("dst", src);
//
//	waitKey(0);
//	return 0;
//}
//	
