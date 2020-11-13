//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat src = cv::imread("C://Users//Lenovo//source//repos//11.6//1.jpg");
//	cv::Mat dst;
//
//	cv::Point2f center(src.cols / 2.0, src.rows / 2.0);
//	cv::Mat rot = cv::getRotationMatrix2D(center, 10.0, 1.0);
//	cv::Rect bbox = cv::RotatedRect(center, src.size(), 10.0).boundingRect();
//
//	rot.at<double>(0, 2) += bbox.width / 2.0 - center.x;
//	rot.at<double>(1, 2) += bbox.height / 2.0 - center.y;
//
//	cv::warpAffine(src, dst, rot, bbox.size(), 1);
//	cv::imshow("scr", src);
//	cv::imshow("des", dst);
//	cv::waitKey(0);
//}