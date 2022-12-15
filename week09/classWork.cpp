#include <iostream>
using namespace std;

void swap(int *first, int *second) {
    int *temp = first;
    first = second;
    second = temp;
    // int temp = *first;
    // *first = *second;
    // *second = *temp;
}

int exchange(int &first, int second) {
    int temp = first;
    first = second;
    return temp;
}

void multitplyArray(int *arr, int size, int number) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) *= number; //arr[i] *= number;
    }
}

int* find(int *arr, int size, int number) {
    for (size_t i = 0; i < size; ++i)
    {
        if (*(arr + i) == number) {
            return arr + i;
        }
    }
    return nullptr;
}

void findMinMax(int *arr, int size, int &min, int &max) {
    max = arr[0];
    min = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

void findCoords(int **matrix, int numberOfRows, int numberOfCols, int &row, int &col, int number) {
    for (size_t i = 0; i < numberOfRows; i++)
    {
        for (size_t j = 0; j < numberOfCols; j++)
        {
            if (matrix[i][j] == number) {
                row = i;
                col = j;
                return;
            }
        }
    }
}

int main() {
    // int a = 5;
    // int *p = &a;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    // int **pp = &p;
    // cout << pp << endl;
    // cout << *pp << endl;
    // cout << **pp << endl;
    // cout << *&a << endl;

    // int a = 4;
    // int b = 5;
    // swap(a, b);
    // cout << a << " " << b << endl;
    // int c = exchange(a, b);
    // cout << a << " " << c << endl;
    // // a -> Dimitar, d -> Traycho
    // int &d = a;
    // cout << &d << " " << &a << endl;
    // cout << d << endl;
    // d += 6;
    // cout << d << endl;
    // cout << a << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *pa = arr;
    cout << *pa << endl;
    pa++;
    cout << *pa << endl;
    pa--;
    cout << *pa << endl;
    int *pb = pa + 3;
    cout << &arr << endl;
    pb--;
    cout << *pb << endl;
    // cout << *arr << endl;
    // // int *arrp = --arr;
    // cout << *(arr + 1) << endl; // *(arr + i) === arr[i]
    // cout << arr << endl;
    // cout << arr + 1 << endl;
    // cout << arr + 2 << endl;
    // cout << *(arr - 2) << endl;

    multitplyArray(arr, 5, 3);
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int *n = nullptr;
    // cout << *n << endl;

    cout << find(arr, 5, 124) << endl;

    int a, b;
    findMinMax(arr, 5, a, b);
    cout << a << " " << b << endl;

    int matrix[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};

    int i = -1, j = -1;
    // findCoords(matrix, 3, 3, i, j, 5);

    cout << i << " " << j << endl;

    int **mat = new int*[3];
    for (int i = 0; i < 3; ++i) {
        mat[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            mat[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    findCoords(mat, 3, 3, i, j, 5);

    cout << 1[arr] << endl;
    cout << *(1 + arr) << endl;
    cout << arr << endl;
    cout << arr + 1 << endl;
    cout << arr + 1 * sizeof(int*) << endl;



    

    return 0;
}