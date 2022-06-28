#include <iostream>
#include <vector> // Header file for vector

using namespace std;
int main()
{
    vector<int> v1;                                     // method 1 for vector initialization of datatype int.
    vector<int> v2(6, 1);                               // method 2 for vector initialization for known size & sample data.
    vector<int> v3 = {0, 1};                            // method 3 for vector initialization for known data.
    vector<int> v4(v3);                                 // Copy vector v3 to vector v4.
    cout << "Capacity: " << v4.capacity() << endl;      // Print vector capacity.
    v4.push_back(3);                                    // Add 3 to vector v4.
    cout << "Size: " << v4.size() << endl;              // Print vector size.
    cout << "Capacity: " << v4.capacity() << endl;      // Print vector capacity after dynamic allocation.
    v4.shrink_to_fit();                                 // Remove unallocated indexes from vector v4.
    cout << "Capacity: " << v4.capacity() << endl;      // Print vector capacity after shrinking.
    cout << "First element: " << v4.front() << endl;    // Print first vector Element
    cout << "Last element: " << v4.back() << endl;      // Print last vector Element
    cout << "Element at index 1: " << v4[1] << endl;    // Print element at index 1
    cout << "Element at index 2: " << v4.at(2) << endl; // Print element at index 2
    return 0;
}