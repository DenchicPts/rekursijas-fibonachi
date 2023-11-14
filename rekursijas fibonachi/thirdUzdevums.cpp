#include "mylib.h"

int digitSum(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + digitSum(n / 10);
}

void thirdUzd() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    if (N < 0) {
        cout << "Пожалуйста, введите положительное число.\n";
    }
    else {
        int sum = digitSum(N);
        cout << "Сумма цифр числа " << N << " равна: " << sum << endl;
    }
}
