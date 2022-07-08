/*
Problem Statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:
We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0
based indexing so the subarray {5, 6} will be reversed and our
output array will be {1, 2, 3, 4, 6, 5}.

Constraints:
1 <= T <= 10
0 <= M <= N <= 5*10^4
-10^9 <= ARR[i] <= 10^9

Input:
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6
Output:

1 2 3 4 6 5
10 9 8 6 7
*/
#include <iostream>
#include <vector>

using namespace std;
void reverseArray(int left, int right, vector<int> &arr)
{
    if (left >= right)
        return;
    reverseArray(left + 1, right - 1, arr);
    swap(arr[left], arr[right]);
}

int main()
{
    vector<int> arr;
    int temp = 0, size = 0;
    cout << "Enter size of the array: ";
    cin >> size;
    for (auto i = 0; i < size; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    arr.shrink_to_fit();
    reverseArray(0, arr.size() - 1, arr);
    for (auto i = 0; i < arr.size(); i++)
        cout << arr.at(i) << ",";
    cout << endl;
    return 0;
}