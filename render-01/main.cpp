#include "tgaimage.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
// 三原色
const TGAColor red   = TGAColor(255, 0,   0,   255);
const TGAColor green = TGAColor(0, 255, 0, 255);
const TGAColor blue = TGAColor(0, 0, 255, 255);

int main(int argc, char** argv) {
	// 摊上一张100*100的画布
	TGAImage image(100, 100, TGAImage::RGB);
	//在正中间标一个绿点
	image.set(50, 50, green);
	image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
	image.write_tga_file("output.tga");
	return 0;
}

