#include "imageData.h"
#include <iostream>

using namespace std;

int main()
{
	imageData img("C:\\Users\\user\\Desktop\\cat.pgm");

	int mode;
	cout << "Select Mode" << endl;
	cout << "Mode 0: image binarization, Mode 1: image inversion, Mode 2: my image processing method" << endl;
	cin >> mode;

	img.imageProc(mode);
	img.imageWrite("result3.pgm");
	cout << "21811957 Á¤º¸¹Ì" << endl;
	cin.ignore(2);
	return 1;
}