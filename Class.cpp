
#include"Class.h"
int band::getXCord()
{
	return xcord;
}
string band::getColor()
{
	return color;
}


void band1::passRangesToFunc(string loc)
{
	//test for black
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 0, "black", loc);
	}
	//test for brown
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 128, "brown", loc);
	}
	//test for red
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 255, "red", loc);
	}
	//test for orange
	if (xcord == 0)
	{
		processImage(0, 0, 0, 128, 0, 255, "orange", loc);
	}
	//test for yellow
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 255, "yellow", loc);
	}
	//test for green
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 0, "green", loc);
	}
	//test for blue
	if (xcord == 0)
	{
		processImage(0, 255, 0, 0, 0, 0, "blue", loc);
	}
	//test for violet
	if (xcord == 0)
	{
		processImage(0, 128, 0, 0, 0, 128, "violet", loc);
	}
	//test for grey
	if (xcord == 0)
	{
		processImage(0, 198, 0, 198, 0, 198, "grey", loc);
	}
	//test for white
	if (xcord == 0)
	{
		processImage(0, 255, 0, 255, 0, 255, "white", loc);
	}
}
void band1::processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc)
{
	Mat3b image = imread(loc);
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 250; j < 295; j++)
		{
			if (image.at<Vec3b>(i, j)[0] == bluehigh && image.at<Vec3b>(i, j)[1] == greenhigh && image.at<Vec3b>(i, j)[2] == redhigh)
			{
				image.at<Vec3b>(i, j)[0] = 0;
				image.at<Vec3b>(i, j)[1] = 0;
				image.at<Vec3b>(i, j)[2] = 0;
				if (image.at<Vec3b>(--i, --j)[0] != bluehigh && image.at<Vec3b>(i, j)[1] != greenhigh && image.at<Vec3b>(i, j)[2] != redhigh)
				{
					xcord = j;
					ycord = i;
					color = colour;
				}
			}
		}
	}
}



void band2::passRangesToFunc(string loc)
{
	//test for black
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 0, "black", loc);
	}
	//test for brown
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 128, "brown", loc);
	}
	//test for red
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 255, "red", loc);
	}
	//test for orange
	if (xcord == 0)
	{
		processImage(0, 0, 0, 128, 0, 255, "orange", loc);
	}
	//test for yellow
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 255, "yellow", loc);
	}
	//test for green
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 0, "green", loc);
	}
	//test for blue
	if (xcord == 0)
	{
		processImage(0, 255, 0, 0, 0, 0, "blue", loc);
	}
	//test for violet
	if (xcord == 0)
	{
		processImage(0, 128, 0, 0, 0, 128, "violet", loc);
	}
	//test for grey
	if (xcord == 0)
	{
		processImage(0, 198, 0, 198, 0, 198, "grey", loc);
	}
	//test for white
	if (xcord == 0)
	{
		processImage(0, 255, 0, 255, 0, 255, "white", loc);
	}
}
void band2::processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc)
{
	Mat3b image = imread(loc);
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 296; j < 330; j++)
		{
			if (image.at<Vec3b>(i, j)[0] == bluehigh && image.at<Vec3b>(i, j)[1] == greenhigh && image.at<Vec3b>(i, j)[2] == redhigh)
			{
				image.at<Vec3b>(i, j)[0] = 99;
				image.at<Vec3b>(i, j)[1] = 99;
				image.at<Vec3b>(i, j)[2] = 99;
				if (image.at<Vec3b>(--i, --j)[0] != bluehigh && image.at<Vec3b>(i, j)[1] != greenhigh && image.at<Vec3b>(i, j)[2] != redhigh)
				{
					xcord = j;
					ycord = i;
					color = colour;
				}
			}
		}
	}
	//namedWindow("Output", CV_WINDOW_FREERATIO);
	//imshow("Output", image);
}




void band3::passRangesToFunc(string loc)
{
	//test for black
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 0, "black", loc);
	}
	//test for brown
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 128, "brown", loc);
	}
	//test for red
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 255, "red", loc);
	}
	//test for orange
	if (xcord == 0)
	{
		processImage(0, 0, 0, 128, 0, 255, "orange", loc);
	}
	//test for yellow
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 255, "yellow", loc);
	}
	//test for green
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 0, "green", loc);
	}
	//test for blue
	if (xcord == 0)
	{
		processImage(0, 255, 0, 0, 0, 0, "blue", loc);
	}
	//test for violet
	if (xcord == 0)
	{
		processImage(0, 128, 0, 0, 0, 128, "violet", loc);
	}
	//test for grey
	if (xcord == 0)
	{
		processImage(0, 198, 0, 198, 0, 198, "grey", loc);
	}
	//test for white
	if (xcord == 0)
	{
		processImage(0, 255, 0, 255, 0, 255, "white", loc);
	}
}
void  band3::processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc)
{
	Mat3b image = imread(loc);
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 331; j < 365; j++)
		{
			if (image.at<Vec3b>(i, j)[0] == bluehigh && image.at<Vec3b>(i, j)[1] == greenhigh && image.at<Vec3b>(i, j)[2] == redhigh)
			{
				image.at<Vec3b>(i, j)[0] = 0;
				image.at<Vec3b>(i, j)[1] = 0;
				image.at<Vec3b>(i, j)[2] = 0;
				if (image.at<Vec3b>(--i, --j)[0] != bluehigh && image.at<Vec3b>(i, j)[1] != greenhigh && image.at<Vec3b>(i, j)[2] != redhigh)
				{

					xcord = j;
					ycord = i;
					color = colour;
				}
			}
		}
	}
}


void band4::passRangesToFunc(string loc)
{
	//test for black
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 0, "black", loc);
	}
	//test for brown
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 128, "brown", loc);
	}
	//test for red
	if (xcord == 0)
	{
		processImage(0, 0, 0, 0, 0, 255, "red", loc);
	}
	//test for orange
	if (xcord == 0)
	{
		processImage(0, 0, 0, 128, 0, 255, "orange", loc);
	}
	//test for yellow
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 255, "yellow", loc);
	}
	//test for green
	if (xcord == 0)
	{
		processImage(0, 0, 0, 255, 0, 0, "green", loc);
	}
	//test for blue
	if (xcord == 0)
	{
		processImage(0, 255, 0, 0, 0, 0, "blue", loc);
	}
	//test for violet
	if (xcord == 0)
	{
		processImage(0, 128, 0, 0, 0, 128, "violet", loc);
	}
	//test for grey
	if (xcord == 0)
	{
		processImage(0, 198, 0, 198, 0, 198, "grey", loc);
	}
	//test for white
	if (xcord == 0)
	{
		processImage(0, 255, 0, 255, 0, 255, "white", loc);
	}
}
void band4::processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc)
{
	Mat3b image = imread(loc);
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 366; j < 405; j++)
		{
			if (image.at<Vec3b>(i, j)[0] == bluehigh && image.at<Vec3b>(i, j)[1] == greenhigh && image.at<Vec3b>(i, j)[2] == redhigh)
			{
				image.at<Vec3b>(i, j)[0] = 0;
				image.at<Vec3b>(i, j)[1] = 0;
				image.at<Vec3b>(i, j)[2] = 0;
				if (image.at<Vec3b>(--i, --j)[0] != bluehigh && image.at<Vec3b>(i, j)[1] != greenhigh && image.at<Vec3b>(i, j)[2] != redhigh)
				{
					xcord = j;
					ycord = i;
					color = colour;
				}
			}
		}
	}
	//namedWindow("Output", CV_WINDOW_FREERATIO);
	//imshow("Output", image);
}


void band5::passRangesToFunc(string loc)
{
	//test for golden
	if (xcord == 0)
	{
		processImage(0, 0, 0, 200, 0, 200, "golden", loc);
	}
	//test for silver
	if (xcord == 0)
	{
		processImage(0, 230, 0, 230, 0, 230, "silver", loc);
	}
}
void band5::processImage(int bluelow, int bluehigh, int greenlow, int greenhigh, int redlow, int redhigh, string colour, string loc)
{
	Mat3b image = imread(loc);
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 406; j < 440; j++)
		{
			if (image.at<Vec3b>(i, j)[0] == bluehigh && image.at<Vec3b>(i, j)[1] == greenhigh && image.at<Vec3b>(i, j)[2] == redhigh)
			{
				image.at<Vec3b>(i, j)[0] = 0;
				image.at<Vec3b>(i, j)[1] = 0;
				image.at<Vec3b>(i, j)[2] = 0;
				if (image.at<Vec3b>(--i, --j)[0] != bluehigh && image.at<Vec3b>(i, j)[1] != greenhigh && image.at<Vec3b>(i, j)[2] != redhigh)
				{
					xcord = j;
					ycord = i;
					color = colour;
				}
			}
		}
	}
}


band1::band1()
{
	xcord = 0;
	ycord = 0;
	color = "No Colour";
}


band2::band2()
{
	xcord = 0;
	ycord = 0;
	color = "No Colour";
}


band3::band3()
{
	xcord = 0;
	ycord = 0;
	color = "No Colour";
}


band4::band4()
{
	xcord = 0;
	ycord = 0;
	color = "No Colour";
}


band5::band5()
{
	xcord = 0;
	ycord = 0;
	color = "No Colour";
}






resistorBands::resistorBands() // Initializing 'band' array by dynamically allocating objects of derived classes
{
	band[0] = new band1;
	band[1] = new band2;
	band[2] = new band3;
	band[3] = new band4;
	band[4] = new band5;
}

void resistorBands::bandDetection(string path) //Calling function for passing ranges
{
	for (int i = 0; i < 5; i++)
	{
		band[i]->passRangesToFunc(path);
	}
}

void resistorBands::displayData() //Function for displaying data
{
	cout << endl << endl << "1st Band color is " << band[0]->getColor() << " and its location is " << band[0]->getXCord() << endl;
	cout << "2nd Band color is " << band[1]->getColor() << " and its location is " << band[1]->getXCord() << endl;
	cout << "3rd Band color is " << band[2]->getColor() << " and its location is " << band[2]->getXCord() << endl;
	cout << "4th Band color is " << band[3]->getColor() << " and its location is " << band[3]->getXCord() << endl;
	cout << "5th (tolerance) band color is " << band[4]->getColor() << " and its location is " << band[4]->getXCord() << endl;
}
void resistorBands::resistanceNumber() //Allotting band number according to color for all elements of 'band' array
{
	alphaNum = bandNumber(band[0]->getColor());
	betaNum = bandNumber(band[1]->getColor());
	thetaNum = bandNumber(band[2]->getColor());
	qotaNum = bandNumber(band[3]->getColor());
	fotaNum = toleranceBandNumber(band[4]->getColor());
}

int resistorBands::toleranceBandNumber(string s) //Band Numbers for tolerance band
{
	if (s == "golden")
		return 5;
	else if (s == "silver")
		return 10;
}

int resistorBands::bandNumber(string s) //Band Numbers for first 4 bands
{
	if (s == "black")
		return 0;
	else if (s == "brown")
		return 1;
	else if (s == "red")
		return 2;
	else if (s == "orange")
		return 3;
	else if (s == "yellow")
		return 4;
	else if (s == "green")
		return 5;
	else if (s == "blue")
		return 6;
	else if (s == "violet")
		return 7;
	else if (s == "grey")
		return 8;
	else if (s == "white")
		return 9;
}

void resistorBands::displayBandNumber() // Displays the band numbers
{
	cout << endl << endl << "1st band number (1st digit): " << alphaNum << endl;
	cout << "2nd band number (2nd digit): " << betaNum << endl;
	cout << "3rd band number (3rd digit): " << thetaNum << endl;
	cout << "4th band number (multiplier): " << qotaNum << endl;
	cout << "5th (tolerance) band number: " << fotaNum << endl;
}

void resistorBands::resistanceCalculation() //Final resistance calculation
{
	displayData();
	cout << endl << endl << "\t\t***RESISTANCE CALCULATION***" << endl;
	displayBandNumber();
	cout << endl << "Final Resistance Calculation: " << alphaNum << betaNum << thetaNum;
	for (int i = 0; i < qotaNum; i++)
	{
		cout << "0";
	}
	char a = 241;
	char ohm = 234;
	cout << "  " << a << " " << fotaNum << " % " << ohm << endl << endl << endl << endl;
}


int resistorBands::resistanceReturn()
{
	int a = alphaNum * 100;
	int b = betaNum * 10;

	resistance = a + b + thetaNum;

	for (int i = 0; i < qotaNum; i++)
	{
		resistance = resistance * 10;
	}

	return resistance;
}

int resistorBands::toleranceReturn()
{
	return fotaNum;
}

