/*
Todo: Implement "Bubble sort" using recursion.
*/
#include <bits/stdc++.h>
using namespace std;

void bubble_search(int *arr, int size){
    if(size==0 || size==1) return;
    for(int i=0; i<size - 1; i++)
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    bubble_search(arr, size-1);
}

int main()
{
    int arr[5] = {8, 9, 7, 6, 2};
    bubble_search(arr, 5);
    for (int i=0; i<5; i++)
        cout<< arr[i]<<" ";
    cout<< endl;
    return 0;
}