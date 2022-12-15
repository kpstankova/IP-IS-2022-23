#include <iostream>
using namespace std;

//Task 1
void evenNumbersFromArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

//Task 2
void evenPositionsFromArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

//Task 3
void biggerNeighbours(int arr[], int n) {
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

//Task 4
int length(char arr[]) {
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        ++counter;
    }

    cout << "Length = " << counter << endl;
    return counter;
}

//Task 5
bool isPalindrome(char arr[]) {
    int size = length(arr);
    for (int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        if (arr[i] != arr[j]) {
            cout << "NO" << endl;
            return false;
        }
    }
    cout << "YES" << endl;
    return true;
}

//Task 6
void multiplyIntArray(int arr[], int n, double k) {
    for (int i = 0; i < n; ++i) {
        arr[i] *= k;
    }
}

void multiplyDoubleArray(double arr[], int n, double k) {
    for (int i = 0; i < n; ++i) {
        arr[i] *= k;
    }
}

//Task 7
void reverseArray(int arr[], int n) {
    for(int i = 0, j = n - 1; i < n / 2; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {

    return 0;
}