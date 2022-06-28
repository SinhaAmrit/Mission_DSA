/*
[NOTE: List is an implementation of Doubly Linked Lists.
List provides functionality for adding and removing elements from the beginning and end of a list.]
*/
#include <iostream>
#include <list> // Header file for list

using namespace std;
int main()
{
    list<int> l1;                // method 1 for list initialization of datatype int.
    list<int> l2(5, 2);          // method 2 for list initialization for known size & sample data.
    list<int> l3 = {0, 5, 6, 8}; // method 3 for list initialization for known size & known data.
    list<int> l4(l3);            // copy list l3 to l4
    l4.push_front(2);            // Add 2 to list l4 at first position.
    l4.push_back(3);             // Add 3 to list l4 at last position.
    for (int i : l4)
        cout << i << ", ";                           // print list l4
    cout << "\nSize: " << l4.size() << endl;         // Print list size.
    l4.pop_front();                                  // Remove list element at first position
    l4.pop_back();                                   // Remove list element at last position
    cout << "First element: " << l4.front() << endl; // Print first list Element
    cout << "Last element: " << l4.back() << endl;   // Print last list Element
    l4.erase(l4.begin());                            // Erase elements from 1st position.
    cout << "Is Empty: " << l4.empty() << endl;      // Print if empty.
    return 0;
}