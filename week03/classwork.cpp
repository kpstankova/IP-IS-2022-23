#include <iostream>
using namespace std;

int main() {
//    //TASK1
//    /* int firstNumber, secondNumber;
//     cout << "First number: ";
//     cin >> firstNumber;
//     cout << "Second number: ";
//     cin >> secondNumber;
//     // if (firstNumber > secondNumber) {
//     //     cout << "The bigger number is: " << firstNumber;
//     // }
//     // else {
//     //     cout << "The bigger number is: " << secondNumber;
//     // }
//     cout << (firstNumber > secondNumber)? firstNumber : secondNumber; */

//     //TASK2
//     // int month;
//     // cout << "Enter a valid month: ";
//     // cin >> month;
//     // /* if (month < 1 && month > 12) {
//     //     cout << "Invalid month.";
//     // }
//     // else {
//     //     cout << "Valid month. ";
//     // } */
//     // cout << (month >=1 && month <=12)? true : false; // 1 = Valid month, 0 = Invalid

//     //Task 3
//     // int a, b, x;
//     // cout << "Enter a"<<endl;
//     // cin >> a;
//     // cout << "Enter b"<<endl;
//     // cin >> b;
//     // cout << "Enter x"<<endl;
//     // cin >> x;
//     // if(x< a && x>b)
//     // {
//     //     cout << "Out"<<endl;
//     // }
//     // else
//     // {
//     //     cout<<"In"<<endl;
//     // }
//     //Ternary
//     // cout<< (x > a && x < b)? "In":"Out";

//     //Task 4
//     // char symbol;
//     // cin >> symbol;
//     // if(('A'<=symbol && symbol <= 'Z' )|| ('a' <= symbol && symbol <= 'z')){
//     // cout<<"It's a letter" <<endl;
//     // } else {
//     //     cout<< "It's not a letter";
//     // }

// //     cout<<(('A'<= symbol && symbol <= 'Z') || ('a' <= symbol && symbol <= 'z')) ? "It's a letter" : "It's not a letter";
// double num1, num2;
// cout << "Input 2 numbers: ";
// cin >> num1 >> num2;
// cout <<(num1 > 0 && num2 > 0)?"Both numbers are positive":(num1 > 0 || num2 > 0)?"One number is positive":"Both numbers are negative";
// if (num1 > 0 && num2 > 0)
// {
//     cout << "Both numbers are positive" << endl;
// }
// else if (num1 > 0 || num2 > 0)
// {
//     cout << "One number is positive" << endl;
// }
// else
// {
//     cout << "Both numbers are negative" << endl;
// }
//Task 6
// int number;
// cout <<"Input number: ";
// cin >> number;
// switch (number)
// {
// case 1: cout << "January"; break;
// case 2: cout << "February"; break;
// case 3: cout << "March"; break;
// case 4: cout << "April"; break;
// case 5: cout << "May"; break;
// 

//task 7
int n,m,k;
cin >> n >> m >> k; 
if(k%n == 0 || k%m == 0){
    cout << "Chocolate can be broken" << endl;
}
else{
    cout << "Chocolate can NOT be broken" << endl;
}