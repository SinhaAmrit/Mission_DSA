/*
[NOTE:  Map is implemented using Red-Black and Balanced tree.
It stores data in the key-value pair (sorted), where the key is unique and
cannot point to two or more elements but a element can be pointed by different keys.]
*/
#include <iostream>
#include <map>                                                              // Header file for map

using namespace std;
int main()
{
    map<int, string> m;                                                     // Map of integers (declared)
    m[1] = "Amrit";                                                         // Inserting elements in map.
    m[2] = "Sinha";
    m[13] = "Buxar";
    m.insert({5, "Raju"});                                                  // Another way to insert element in map.
    for (auto i : m)
        cout << i.first << " " << i.second << endl;                         // Print map elements.
    m.erase(13);                                                            // Remove element from the map at given key.
    cout << "Check if 13 is present or not -> " << m.count(13) << endl;     // Check for key 13.
    auto it = m.find(5);                                                    // Find element at specified key with the help of iterator.
    for (auto i = it; i != m.end(); i++)
        cout << (*i).first << " " << (*i).second << endl;                   // Print Elements.
    return 0;
}