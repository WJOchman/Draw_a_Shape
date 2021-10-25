#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int height, width;
	cout << "Enter height: ";
	cin >> height;

	cout << "Enter width: ";
	cin >> width;

	char symbol;
	cout << "Enter a symbol :";
	cin >> symbol; 

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << symbol;
		}
		cout << setw(3) << endl;
	}

system("paused>0");
}
