#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

void fillMatrix(double arr[][MAX_SIZE], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

double sumDiagonal(double arr[][MAX_SIZE], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i == j)
            {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        for(int j = size - 1; j >= 0; j--) 
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
            if(i == j)
            {
                sum = sum - arr[i][j];
            }
            i++;
        }
    }

    return sum;
}
int findSequence(double matrix[][MAX_SIZE], double array[], int size, int n)
{
    int counter = 0;
    int maxCounter = 0;
    int collum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < size && j < n; j++)
        {
            if(matrix[j][i] == array[j])
            {
                counter++;
            }
        }
        if(counter > maxCounter){
            maxCounter = counter;
            collum = i;
        }
        counter = 0;
    }
    return collum;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(double array[] ,int size)
{
    for(int i=0;i<size;i++)
    {
         for(int j=0;j<size;j++)
         {
            if(array[j]>array[j+1])
                swap(array[j+1],array[j]);
         }
    }
}

int main() {

    double matrix[5][MAX_SIZE] = {{4, 4, 4, 7, 4},
                                    {3, 3, 3, 7, 3},
                                    {0, 2, 2, 9, 2},
                                    {0, 7, 1, 6, 8},
                                    {1, 1, 1, 1, 1}};

    double array[4] = {4, 3, 2, 1};

    // double m[4][MAX_SIZE] = {{1, 1, 1, 1},
    //                          {1, 1, 1, 1},
    //                          {1, 1, 1, 1},
    //                          {1, 1, 1, 1}};

    // cout << sumDiagonal(matrix, 5);
    cout << findSequence(matrix, array, 5, 4) << endl;

    int a = 5;
    int b = 10;
    swap(a, b);
    cout << a << " " << b << endl;

    sortArray(array, 4);
    for (int i = 0; i < 4; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}