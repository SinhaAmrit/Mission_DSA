/*
 * Problem Statement
 * Write a program to find the factorial of a number.
 * Factorial of n is:
 * n! = n * (n-1) * (n-2) * (n-3)....* 1
 * Output the factorial of 'n'. If it does not exist, output 'Error'.
 * Constraints:
 * -10 <= n <= 12
 * Input: 5
 * Output: 120
 */

#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;
    int partialAns = factorial(num - 1);
    return num * partialAns;
}

int main()
{
    int num;
    cout << num;
    if (num < 0)
        cout<<"Error"<<endl;
    else
        printf("%d\n", factorial(num));
    return 0;
}