#include "mylib.h"

int fibonacci(int n) {
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

void secondUzd() {
	int n;
	cout << "Enter a value N: ";
	cin >> n;
	int result = fibonacci(n);
	cout << "Fibonacci number on the position " << n << " equal: " << result << endl;

}
