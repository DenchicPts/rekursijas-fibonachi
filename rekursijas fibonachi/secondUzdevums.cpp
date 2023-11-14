#include "mylib.h"

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void secondUzd() {
    int n;
    cout << "������� �������� N: ";
    cin >> n;

    if (n < 0) {
        cout << "����������, ������� ��������������� ����� �����.\n";
    }
    else {
        int result = fibonacci(n);
        cout << "����� ��������� �� ������� " << n << " �����: " << result << endl;
    }
}
