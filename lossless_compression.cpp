#include"lossless_compression.h"
int compress() {
	std::vector<int> compression_params;
	compression_params.emplace_back(alg);
	compression_params.emplace_back(scale);
	cv::Mat src = cv::imread(src_path, 1);
	cv::imwrite(dst_path, src, compression_params);
	return 0;
}
