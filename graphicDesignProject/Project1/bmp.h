#ifndef _BMP_H_
#define _BMP_H_
#include <string>
using namespace std;

class bmp {
private:
	struct BITMAPFILEHEADER{
		char bfType[2]		= {'B','M' };
		char bfSize[4]      = {0,0,0,0};
		
		char bfReserved1[2] = { };
		char bfReserved2[2] = { };
		
		char bfOffBits[4]   = {54,0,0,0};
	}_bmfh;

	struct BITMAPINFOHEADER {
		char biSize[4]          = {40,0,0,0};

		// Data is stored in little-endian format
		char biWidth[4]         = {0x64, 0, 0, 0};
		char biHeight[4]        = {0x64, 0, 0, 0};
		
		char biPlanes[2]        = { };


		char biBitCount[2]      = {24,0};
		
		char biCompression[4]   = { };
		char biSizeImage[4]	    = { };
		
		char biXPelsPerMeter[4] = { };
		char biYPelsPerMeter[4] = { };
		
		char biClrUsed[4]	    = { };
		char biClrImportant[4]  = { };
	}_bmih;
	
	// TODO: Set on heap or convert to pointer
	struct COLOR{
		char r = 50;
		char g = 200;
		char b = 125;
	}_clr_tlb[512][512], *p;

	int _width;
	int _height;

	string _intToHex(const int&);

public:
	
	bmp();
	~bmp();

	// Creates BMP file
	void writeToFile();

	// Intializes BMP pixel width
	void width(const int &);

	// Initializes BMP pixel height
	void height(const int &);

	// Initializes both pixel width and pixel height of BMP file
	void setSize(const int &, const int &);

};

#endif