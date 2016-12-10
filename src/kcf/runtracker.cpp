#include <iostream>
#include <string>
#include <algorithm>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "kcftracker.hpp"
#include <dirent.h>


//#define  FLIP
#define  SAVE
using std::string;

//int main(int argc, char* argv[]){
//
//	if (argc < 2) {
//        printf("Please specify a vidoe directory\n");
//        return -1;
//    }
//
//	bool HOG = true;
//	bool FIXEDWINDOW = false;
//	bool MULTISCALE = true;
//	bool SILENT = true;  //display tracking result
//	bool LAB = true;
//
//
//	string fileName = argv[1];
//    string windowName = "tracking out";
//	// Create KCFTracker object
//	KCFTracker tracker(HOG, FIXEDWINDOW, MULTISCALE, LAB);
//
//	// Frame readed
//	cv::Mat frame;
//    cv::Mat displayImage;
//	// Tracker results
//	cv::Rect result;
//    cv::Rect firstBox;
//
//    cv::VideoCapture video(fileName);
//
//    video >> frame;
//#ifdef FLIP
//    cv::flip(frame,frame,0);
//#endif
//
//    getFirstBox(frame,firstBox,windowName);
//
//    firstBox.x = 262;
//    firstBox.y = 66;
//    firstBox.width = 87;
//    firstBox.height = 196;
//#ifdef SAVE
//    cv::VideoWriter saveVideo;
//    //string outName = "/media/ise/myfiles/xingtu/"+std::to_string(1)+".avi";
//
//    saveVideo.open("/media/cyz/myfiles/xingtu/100.avi",CV_FOURCC('M','J','P','G'),50,
//                   cv::Size(frame.cols,frame.rows));
//#endif
//
//
//    tracker.init( firstBox, frame );
//
//
//    while (video.read(frame)){
//
//#ifdef FLIP
//        cv::flip(frame,frame,0);
//#endif
//        result = tracker.update(frame);
//
//        frame.copyTo(displayImage);
//        cv::rectangle(displayImage,result,CV_RGB(255,0,0),3);
//        cv::imshow(windowName,displayImage);
//        cv::waitKey(1);
//#ifdef SAVE
//        saveVideo << displayImage;
//#endif
//    }
//
//    return 0;
//}
