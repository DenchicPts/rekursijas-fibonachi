#include "mylib.h"

int digitSum(int n) {
	if (n == 0)
		return 0;
	else
		return n % 10 + digitSum(n / 10);
}

void thirdUzd() {
	int N;
	cout << "Enter a number N: ";
	cin >> N;


	int sum = digitSum(N);
	cout << "Sum of digits " << N << " equal: " << sum << endl;

}
