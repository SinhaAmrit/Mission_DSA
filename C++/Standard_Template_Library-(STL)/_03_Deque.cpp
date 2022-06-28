/*
[NOTE: Deque is an array implementation of queue implemented by number of static arrays.
Deque provides functionality for adding and removing elements from the beginning and end of an array.]
*/
#include <iostream>
#include <deque> // Header file for deque

using namespace std;
int main()
{
    deque<int> q1;                // method 1 for deque initialization of datatype int.
    deque<int> q2(5, 2);          // method 2 for deque initialization for known size & sample data.
    deque<int> q3 = {0, 5, 6, 8}; // method 3 for deque initialization for known size & known data.
    deque<int> q4(q3);            // copy deque q3 to q4
    q4.push_front(2);             // Add 2 to deque q4 at first position.
    q4.push_back(3);              // Add 3 to deque q4 at last position.
    for (int i : q4)
        cout << i << ", ";                              // print deque q4
    cout << "\nSize: " << q4.size() << endl;            // Print deque size.
    q4.pop_back();                                      // Remove deque element at last position
    q4.pop_front();                                     // Remove deque element at first position
    cout << "First element: " << q4.front() << endl;    // Print first deque Element
    cout << "Last element: " << q4.back() << endl;      // Print last deque Element
    cout << "Element at index 1: " << q4[1] << endl;    // Print element at index 1
    cout << "Element at index 2: " << q4.at(2) << endl; // Print element at index 2
    q4.erase(q4.begin(), q4.end());                     // Erase elements from 1st position to last position.
    cout << "Is Empty: " << q4.empty() << endl;         // Print if empty.
    return 0;
}