#pragma once
#include"opencv_header.h"
#include<vector>
#include<string>

const static std::string src_path{ "C:/Users/zkcc2/Desktop/΢��ͼƬ_20220222173731.jpg" };
const static std::string dst_path{ "C:/Users/zkcc2/Desktop/xxx.jpg" };
const static int alg{ CV_IMWRITE_JPEG_QUALITY }; // ѡ��ѹ���㷨
// CV_IMWRITE_JPEG_QUALITY CV_IMWRITE_PNG_COMPRESSION
const static int scale{ 15 }; // ͼƬ��������

int compress();