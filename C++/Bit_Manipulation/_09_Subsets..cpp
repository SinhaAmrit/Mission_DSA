// 09. Write a program to generate all possible subsets of a set {7,8,9,6}.
#include <iostream>
using namespace std; // for compatibility  -  with earlier Versions
void printSubsets(int arr[], int size)
{
    for (int i = 0; i < (1 << size); i++)
    {
        printf("{ ");
        for (int j = 0; j < size; j++)
            if (0 != (i & (1 << j)))
                printf("%d ", arr[j]);
        printf("}\n");
    }
}
int main()
{
    int arr[] = {7, 8, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printSubsets(arr, size);
}