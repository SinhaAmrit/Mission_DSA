// 10. Write a program to find a unique number in an array where all numbers except one, are present twice.
// {2,4,6,3,4,6,2}
#include <iostream>
using namespace std;

int unique1(int arr[], int size)
{
    int uniqueNum = 0;
    for (int i = 0; i < size; i++)
        uniqueNum ^= arr[i];
    return uniqueNum;
}

int main()
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unique numbers: %d\n", unique1(arr, size));
    return 0;
}