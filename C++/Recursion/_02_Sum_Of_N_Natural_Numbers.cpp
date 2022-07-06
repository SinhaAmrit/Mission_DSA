/*
 * Problem Statement
 * Write a program to find the sum of N natural number.
 * sum of n natural numbers is:
 * n + (n-1) + (n-2) + (n-3) + (n-4) + (n-5) +...+ (n - n)
 * Input: 100
 * Output: 5050
 */
#include <iostream>

using namespace std;
int sum(int num)
{
    if (num == 1)
        return 1;                  // base case
    int partialAns = sum(num - 1); // recursive call
    return (num + partialAns);     // end case
}
int main()
{
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "Sum of " << num << " natural numbers is " << sum(num) << endl;
    return 0;
}