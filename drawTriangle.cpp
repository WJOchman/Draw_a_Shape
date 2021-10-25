#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int length;
	cout << "Enter length: ";
	cin >> length;

	char symbol: 
	cout << "Enter a symbol: ";
	cin >> symbol;

	// Drawing a triangle 
	for (int i = 1; i < length; i++){
		for (int j = 1; j <= i; j++) {
			cout << symbol;
		}
		cout << setw(2) << endl;
	}
	cout << endl << endl;

	// Drawing a reverse triangle 
	for (int i = length; i >= 1; i--){
		for (int j = 1; j <= i; j++) {
			cout << symbol;
		}
		cout << setw(2) << endl;
	}
	

system("paused>0");
}
