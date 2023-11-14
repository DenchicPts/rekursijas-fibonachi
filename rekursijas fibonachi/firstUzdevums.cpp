#pragma once
#include "mylib.h"

int fibonaci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}

void printFibo(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << fibonaci(i) << " ";
    }
}

void firstUzd() {

    int N;

    cout << "Enter N to output the first N Fibonacci numbers: ";
    cin >> N;



    cout << "The first " << N << " Fibonacci numbers: ";
    printFibo(N);
    cout << "\n";
}