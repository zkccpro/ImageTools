#pragma once
#include"opencv_header.h"
#include<vector>
#include<string>

const static std::string src_path{ "C:/Users/zkcc2/Desktop/微信图片_20220222173731.jpg" };
const static std::string dst_path{ "C:/Users/zkcc2/Desktop/xxx.jpg" };
const static int alg{ CV_IMWRITE_JPEG_QUALITY }; // 选择压缩算法
// CV_IMWRITE_JPEG_QUALITY CV_IMWRITE_PNG_COMPRESSION
const static int scale{ 15 }; // 图片质量比例

int compress();