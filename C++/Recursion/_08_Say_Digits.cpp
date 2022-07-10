/*
!Problem Statement:
* Write a program to print the numbers (input) in words.
*/
#include <bits/stdc++.h>
using namespace std;

vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printNum(int num)
{
    if (num == 0) return;
    int digit = num % 10;
    num /= 10;
    printNum(num);
    cout << digits[digit] << " ";
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered ";
    printNum(num);
    cout << endl;
    return 0;
}