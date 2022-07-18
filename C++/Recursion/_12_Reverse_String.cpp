/*
Todo: Reverse string using recursion.
*/
#include <bits/stdc++.h>
using namespace std;

void reverse_string(string &str, int start, int end)
{
    if (start > end) return;
    swap(str[start], str[end]);
    start++; end--;
    reverse_string(str, start, end);
}

int main()
{
    string str = "hello world";
    reverse_string(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}