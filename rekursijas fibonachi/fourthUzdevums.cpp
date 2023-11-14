#include "mylib.h"

int findSquareRoot(int number, int current = 1) {

	if (current * current == number) {
		return current;
	}

	if (current * current > number) {
		return -1;
	}

	return findSquareRoot(number, current + 1);
}

void fourthUzd() {
	int num;
	cout << "N : ";
	cin >> num;

	int result = findSquareRoot(num);

	if (result != -1) {
		cout << "" << result << endl;
	}
	else {
		cout << "not" << std::endl;
	}

}
