/*
TODO: Implement binary search using recursion.
*/
#include <bits/stdc++.h>
using namespace std;

bool binary_search(int *arr, int start, int end, int key){
    //base case (element not found)
    if(start>end) return false;
    //base case (element found)
    int mid = start + (end-start)/2;
    if(arr[mid] == key) return true;
    //recursive call
    if(arr[mid] < key) return binary_search(arr, mid + 1, end, key);
    else return binary_search(arr, mid - 1, end, key);
}
int main()
{
    int size, key;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements(space separated): " << endl;
    for(int i=0; i<size; i++) cin >> arr[i];
    cout << "Enter key to be searched: ";
    cin >> key;
    cout<< "Result:" <<binary_search(arr, 0, size - 1, key) << endl;
    return 0;
}