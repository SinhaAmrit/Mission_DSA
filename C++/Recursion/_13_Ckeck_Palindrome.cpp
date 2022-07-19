/*
Todo: Check whether the given string is palindrome or not (using recursion).
*/
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int start , int end){
if(start > end) return true;
if(str[start] != str[end]) return false;
else return checkPalindrome(str, start + 1, end - 1);
}

int main()
{
    string str = "hello world";
    cout<< str << " is palindrome or not: " << checkPalindrome(str, 0 , str.length()-1) << endl;
    return 0;
}