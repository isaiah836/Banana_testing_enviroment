// Banana_testing_enviroment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "People.h"

using namespace std;

#define N_WORDS 10
const int MAX_WORDS = 1024;

void main()
{
	ifstream infile;
	infile.open("inputfile.txt");
	ofstream outfile("outputfile.txt");
	int i;

	//read 1 line at a time
	string oneLine;
	while (getline(infile, oneLine))
	{
		outfile << oneLine << endl;
		cout << oneLine << endl;
	}
	infile.close();
	outfile.close();
	system("pause");

	string inStr[MAX_WORDS];
	ifstream infile2

}
