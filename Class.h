#include<iostream>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include <opencv2\opencv.hpp>
using namespace cv;
using std :: cout;
using std :: endl;
class band
{
protected:
	int xcord;
	int ycord;
	string color;

public:
	virtual void passRangesToFunc(string loc) = 0;
	virtual void processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc) = 0;
	int getXCord();
	string getColor();
};



class band1 : public band
{
public:
	band1();
	void passRangesToFunc(string loc);
	void processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc);

};

class band2 : public band
{
public:
	band2();
	void passRangesToFunc(string loc);
	void processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc);

};
class band3 : public band
{
public:
	band3();
	void passRangesToFunc(string loc);
	void processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc);

};
class band4 : public band
{
public:
	band4();
	void passRangesToFunc(string loc);
	void processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc);

};
class band5 : public band
{
public:
	band5();
	void passRangesToFunc(string loc);
	void processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc);

};

class resistorBands //Class for new resistor
{
	band* band[5];
	int Coord[5];
	int alphaNum;
	int betaNum;
	int thetaNum;
	int qotaNum;
	int fotaNum;
	int resistance;
	int tolerance;
public:
	resistorBands(); // Initializing 'band' array by dynamically allocating objects of derived classes
	void bandDetection(string path); //Calling function for passing ranges
	void displayData(); //Function for displaying data
	void resistanceNumber(); //Allotting band number according to color for all elements of 'band' array
	int toleranceBandNumber(string s); //Band Numbers for tolerance band
	int bandNumber(string s); //Band Numbers for first 4 bands
	void displayBandNumber(); // Displays the band numbers
	void resistanceCalculation(); //Final resistance calculation
	int resistanceReturn();
	int toleranceReturn();
};
