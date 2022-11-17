#include <iostream>
#include <cmath>
using namespace std;

//TASK 0
double maxNumber(double a, double b) {
    return a > b ? a : b;
}

//TASK 1
bool isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimeNumbers() {
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

//TASK 2
bool isPalindrome1(int n) {
    int nCopy = n;
    int size = 0;
    while (nCopy != 0) {
        nCopy /= 10;
        ++size;
    }
    for (int i = 0; i < size; ++i) {
        int first = (n / (int)pow(10, size - i - 1)) % 10;
        int second = (n % (int)pow(10, i + 1) / (int)pow(10, i));
        if (first != second) {
            return false;
        }
    }

    return true;
}

bool isPalindrome2(int n) {
    int nCopy = n;
    int nReverse = 0;
    while (nCopy > 0) {
        nReverse = nReverse * 10 + nCopy % 10;
        nCopy /= 10;
    }

    return n == nReverse;
}

void printPrimePalindromes(int n) {
    for (int i = 1, counter = 0; counter < n; ++i) {
        bool isTrue = isPalindrome1(i) && isPrime(i);
        if (isTrue) {
            cout << i << " ";
            ++counter;
        }
    }
    cout << endl;
}

//TASK 3
bool isPower2(int n) {
    while (n > 1) {
        n /= 2;
    }

    return n == 1;
}

//TASK 4
bool isPowerN(int a, int b = 2) {
    while (a > 1) {
        a /= b;
    }

    return a == 1;
}

int main() {
    cout << "Task 0:\nmax(5, 6) = "<< maxNumber(5, 6) << endl;
    cout << "Task 1:\n";
    printPrimeNumbers();
    cout << "Task 2:\n";
    printPrimePalindromes(25);
    cout << "Task 3:\n";
    cout << isPower2(32);
    cout << "Task 4:\n";
    isPowerN(32, 2);


    return 0;
}