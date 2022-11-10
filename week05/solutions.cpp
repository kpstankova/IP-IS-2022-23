#include <iostream>
using namespace std;

int main() {
    //TASK 1
    cout << "Task 1\n";
    int number;
    do {
        cout << "Enter two-digit number: ";
        cin >> number;
    } while(number < 10 && number > 99);
    cout << endl;

    //TASK 2
    cout << "Task 2\n";
    //а)
    cout << "а)\n";
    int n, m;
    cout << "Enter n, m: ";
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    //б)
    cout << "б)\n";
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //TASK 3
    cout << "Task 3\n";
    int num;
    cout << "Enter num to calculate num!: ";
    cin >> num;
    int pow = 1;
    for (int i = 1; i <= num; ++i) {
        pow *= i;
    }
    cout << "num! = " << pow << endl;

    //Броячите на задача 4 и 5 сме го добавили, за да се вижда по-добре резултатът в конзолата.
    //TASK 4
    cout << "Task 4\n";
    int counter = 0;
    for (int i = 100; i < 1000; ++i) {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit) {
            cout << i << " ";
            ++counter;
            if (counter % 10 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl;

    //TASK 5
    cout << "Task 5\n";
    counter = 0;
    for (int i = 100; i < 1000; ++i) {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        int pow = firstDigit;
        pow = secondDigit != 0 ? pow * secondDigit : pow;
        pow = thirdDigit != 0 ? pow * thirdDigit : pow;
        if (i % pow == 0) {
            cout << i << " ";
            ++counter;
            if (counter % 10 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl;
    

    return 0;
}