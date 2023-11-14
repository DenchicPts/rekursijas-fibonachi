#include "mylib.h"

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void secondUzd() {
    int n;
    cout << "Введите значение N: ";
    cin >> n;

    if (n < 0) {
        cout << "Пожалуйста, введите неотрицательное целое число.\n";
    }
    else {
        int result = fibonacci(n);
        cout << "Число Фибоначчи на позиции " << n << " равно: " << result << endl;
    }
}
