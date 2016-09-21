#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	unsigned short value = 0;
	int sum = 0;

	cout << "Enter a number between 0 and 65535" << endl;
	cin >> value;
	cout << value << " stored as an unsigned short: ";
	if (value < 65536 && value > -1) {
		for (int i = (sizeof(value) * 8) - 1; i >= 0; i--) {
			if (value & (1 << i)  )
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
		
	
	}
	else
		cout << "incorrect, try again" << endl;
	cout << endl;

	cout << "all the perfect numbers between 1 and: " << value << endl;
	for (int i = 1; i <= value ; i++) {
		for (int j = 1; j < i; j++)	{
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			cout << i << endl;
		}
			sum = 0;
	}

	system("pause");
	return 0;
}