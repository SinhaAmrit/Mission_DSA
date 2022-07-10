/*
Problem Statement:
Print counting from 1 to "num".
*/
#include <bits/stdc++.h>
using namespace std;
void printCount(int num)
{
    if (num == 0) return;
    printCount(num - 1);
    cout << num << " ";
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printCount(num);
    cout << endl;
    return 0;
}