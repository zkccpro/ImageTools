#include"flip_video.h"
int flip_video() {
	cv::VideoCapture video_input("C:\\Users\\zkcc2\\Desktop\\2865253eccd897fd9692d3c14f1f680a.mp4");
	cv::Size size = cv::Size((int)video_input.get(CV_CAP_PROP_FRAME_WIDTH),
		(int)video_input.get(CV_CAP_PROP_FRAME_HEIGHT));
	cv::VideoWriter writer;
	int code = writer.fourcc('M', 'J', 'P', 'G');
	writer.open("C:\\Users\\zkcc2\\Desktop\\output.mp4", code, 30.0, size, true);
	while (1) {
		cv::Mat frame;
		video_input.read(frame);
		if (frame.empty()) {
			break;
		}
		cv::flip(frame, frame, 1);
		writer.write(frame);
	}
	return 0;
}