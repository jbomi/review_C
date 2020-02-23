#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class imageData
{
private:
	int rows;
	int cols;
	int maxValues;
	unsigned char* pixelValues;
	unsigned char* pixelProcessed;
public:
	imageData(string fname);
	int imageProc(int Mode);
	int imageWrite(string fname);
	~imageData(void);
};

