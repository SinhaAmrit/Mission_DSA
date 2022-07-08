/*
Problem Statement
You are given a sorted array of 'N' integers. You have to generate the power set for this array where each subset of
this power set is individually sorted.
A set is a well-defined collection of distinct elements. Power set P(ARR) of a set 'ARR' is defined as a set of
all possible subsets of 'ARR'.
You have to return the array of subsets. The elements in the subset should be sorted in ascending order.
The order of subsets in the array does not matter. Hence there can be more than 1 possible solution for
a given array.

For Example :
If we are given an array ARR=[1,2,3] then the power set P(ARR) of the set ARR is:
[ [], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3] ]

Note :
For every subset 'X' present in power set P(ARR) of set ARR, X must be sorted i.e. in the example above:
P1(ARR) =  [ [], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3] ]
P2(ARR) =  [ [], [1], [1,2,3], [2], [1,2], [3], [1,3], [2,3] ]
P3(ARR) =  [ [], [1], [2], [1,2], [3], [1,3], [2,3], [2,3,1] ]
P1(ARR) and P2(ARR) will be considered correct power sets but P3(ARR) will not be considered correct because there the last subset [2, 3, 1] is not sorted.

Constraints :
1 <= N <= 15
1 <= ARR[i] <= 50
Time limit : 1 second

Sample Input :
3
1 2 3
Sample Output :
1
2
3
1 2
1 3
2 3

1 2 3
*/
#include <bits/stdc++.h>
using namespace std;

void pwset(vector<int> &v, int i, vector<int> &subSet, vector<vector<int>> &ans)
{
    // base case
    if (i == v.size())
    {
        ans.push_back(subSet);
        return;
    }

    // Task 1: include the ith element
    subSet.push_back(v[i]);
    pwset(v, i + 1, subSet, ans);

    // Task 2: Exclude the ith element
    subSet.pop_back();
    pwset(v, i + 1, subSet, ans);
}

int main()
{
    vector<int> v = {0, 1, 5};
    vector<vector<int>> ans;
    vector<int> subSet;
    pwset(v, 0, subSet, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << ", ";
        cout << endl;
    }
    return 0;
}