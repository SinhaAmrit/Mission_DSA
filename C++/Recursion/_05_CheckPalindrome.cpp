/*
 Problem statement:
 Given an alphabetical string ‘S’. Determine whether it is palindrome or not.
 A palindrome is a string that is equal to itself upon reversing it.

 For Example:
 ‘S’ = racecar
 The reverse of ‘S’ is: racecar
 Since ‘S’ is equal to its reverse. So ‘S’ is a palindrome.
 Hence output will be 1.

 Constraints :
 1 ≤ T ≤ 1000
 1 ≤ |S| ≤ 10^5
 S consists of only lowercase english alphabets.
 Σ|S| ≤ 2 * 10^6

 Input :
 2
 racecar
 niinja

 Output :
 1
 0

 */

#include <iostream>
using namespace std;

bool isPalindrome(int left, int right, string &s)
{
    if (left >= right)
        return true;
    if (s[left] != s[right])
        return false;
    return isPalindrome(left + 1, right - 1, s);
}
int main()
{
    string s;
    cout << "Enter something to check palindrome ";
    cin >> s;
    cout << "Result: " << isPalindrome(0, s.size() - 1, s) << endl;
    return 0;
}