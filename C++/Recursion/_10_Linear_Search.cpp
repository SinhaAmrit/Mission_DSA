/*
Todo: Implement linear search algorithm using recursion.
*/
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    if(size == 0) return false;
    if(arr[0] == key) return true;
    else{
        bool remainingPart = linearSearch(arr + 1,size - 1,key);
        return remainingPart;
    }
    return 0;
}
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    cout << "Result: " << linearSearch(arr, 5, 2);
    return 0;
}