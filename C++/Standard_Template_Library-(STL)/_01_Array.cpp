/*
[NOTE: Implementation of the Arrays in STL is same as the static array. so, it is not preferred in CP.]
*/
#include <iostream>
#include <array> // Header File for arrays

using namespace std;
int main()
{
    int basic_arr[4] = {0, 1, 2, 3};                          // Basic array
    array<int, 6> arr = {0, 1, 2, 3, 4};                      // STL Array of size 6, datatype is int type
    cout << "Size: " << arr.size() << endl;                   // Print sizeof(array)
    cout << "First element: " << arr.front() << endl;         // Print first array Element
    cout << "Last element: " << arr.back() << endl;           // Print last array Element
    cout << "Element at index 3: " << arr.at(3) << endl;      // Print element at index 3
    cout << "Element at index 4: " << arr[4] << endl;         // Print element at index 4
    cout << "Array is empty or not? " << arr.empty() << endl; // Print array is empty or not
    arr.fill(1);                                              // Fill array with 1
    return 0;
}