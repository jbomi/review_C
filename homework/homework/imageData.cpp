#include "imageData.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

imageData::imageData(string fname)
{
	ifstream inFile(fname, ios::in | ios::binary);
	string inputLine = "";
	getline(inFile, inputLine);

	inFile >> cols >> rows;
	inFile >> maxValues;

	pixelValues = new unsigned char[cols*rows];
	pixelProcessed = new unsigned char[cols*rows];

	inFile.read(reinterpret_cast<char*>(pixelValues), cols * rows * sizeof(unsigned char));

	inFile.close();
}

int imageData::imageProc(int Mode)
{

	if (Mode == 0)
	{
		cout << "Image binarization" << endl;
		for (int r = 0; r < rows; r++)
		{
			for (int c = 0; c < cols; c++)
			{
				if (pixelValues[r * cols + c] > 30)
					pixelProcessed[r * cols + c] = 255;
				else
					pixelProcessed[r * cols + c] = 0;
			}
		}
	}
	else if (Mode == 1)
	{
		cout << "Image inversion" << endl;
		for (int r = 0; r < rows; r++)
		{
			for (int c = 0; c < cols; c++)
			{
				pixelProcessed[r * cols + c] = 255 - pixelValues[r * cols + c];
			}
		}
	}
	else if (Mode == 2)
	{
		cout << "my image processing method" << endl;
		for (int r = 0; r < rows; r++)
		{
			for (int c = 0; c < cols; c++)
			{
				pixelProcessed[r * cols + c] = pixelValues[r * cols + c] / 30*30;
			}
		}
	}
	else
	{
		cout << "Invalid mode" << endl;
	}

	return 0;
}

int imageData::imageWrite(string fname)
{
	ofstream outFile;

	outFile.open(fname, ios::binary);

	outFile << "P5" << endl;
	outFile << cols << " " << rows << endl;
	outFile << maxValues << endl;

	outFile.write(reinterpret_cast<const char*>(pixelProcessed), cols * rows * sizeof(unsigned char));
	outFile.close();

	return 0;
}

imageData::~imageData(void)
{
	delete pixelValues;
	delete pixelProcessed;
}