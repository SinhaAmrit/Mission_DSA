/*
Todo: Write a program that calculates the power of a number by other number.
*/
#include <bits/stdc++.h>
using namespace std;

int power(int base, int pow)
{
    if (pow == 0)  return 1;
    if (pow == 1)  return base;
    int ans = power(base, pow / 2);
    if (pow % 2 == 0)  return ans * ans;
    else  return base * ans * ans;
}

int main()
{
    int a, b;
    cout << "Enter 'a' to the power 'b' (seperated by spaces): ";
    cin >> a >> b;
    cout << a << " to the power " << b << " is " << power(a, b) << endl;
    return 0;
}