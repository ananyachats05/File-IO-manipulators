#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void printFormatted(ofstream& outfile, int highNum);

int main()
{
	int highNum;
	cout << "Enter the high number ";
	cin >> highNum;

	ofstream outfile;
	cout << "Writing to the file!" << endl;

	outfile.open("output.txt");
	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	
	printFormatted(outfile, highNum);

	outfile.close();

	cout << "Done!" << endl;
	return 0;
}

void printFormatted(ofstream& outfile, int highNum)
{
	for (int i = 0; i < highNum; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 5.76543) <<
			setw(12) << setprecision(3) << (i * 3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 5.76543) <<
			setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
}
