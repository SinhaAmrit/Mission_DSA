/*
[NOTE:
1} Set is a implementation of the Binary Search Tree.
2} Set is the collection of unique elements in the collection.
3} one can either add or remove elements from the collection but can't update.
4} Set returns elements in the sorted order.
5 Set is slower than unsorted Set.
]
*/

#include <iostream>
#include <set> // Header file for set implementation.

using namespace std;
int main()
{
    set<int> s;                                                     // Set initialization.
    s.insert(6);                                                    // Insert element at index [1].
    s.insert(07);                                                   // Insert element [2].
    s.insert(5);                                                    // Insert element [0].
    s.insert(70);                                                   // Insert element [4].
    s.insert(36);                                                   // Insert element [3].
    s.insert(36);                                                   // Insert element (Will not insert).
    
    set<int>::iterator it = s.begin();                              // Iterator for elements from the set.
    it++;                                                           // setting iterator position to the 2nd element in the set.
    s.erase(it);                                                    // Erase elements from 1st position

    cout << "================" << endl;
    for (auto i : s) cout << i << endl;                             // Print set elements.
    cout << "================" << endl;
    
    cout << "Check if 6 is present or not? " << s.count(6) << endl; // Check for an element.
    set<int>::iterator itr = s.find(70);                            // Return iterator position where element 70 is present.
    cout << "Value present at iterator (itr): " << *itr << endl;    // Access the value at the iterator position.

    return 0;
}