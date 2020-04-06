/************************************************
** Author: Andrea Hayes
** Date: Febuary 20, 2020
** Purpose: Get the Average of the Values
** Input: Variables - Number 28,32, 37,24 & 33  
** Processing: Sum and Average Numbers
** Output: Average will be Displayed
*************************************************/

#include <iostream>
using namespace std;
int main() {
    
    int number1 = 28; // Numbers to be averaged
    int number2 = 32;
    int number3 = 37;
    int number4 = 24;
    int number5 = 33;

    int sum;

    sum=number1+number2+number3+number4+number5; // Sum of numbers

    float average; 

    average = sum / 5.00; // Average of numbers

    cout << "Average = " << average << endl;

        return 0;
}