#include <iostream>
#include <algorithm> // Header file for Algorithm
#include <vector>    // Header file for vector

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout << "Finding '7' using Binary Search: " << binary_search(v.begin(), v.end(), 7) << endl;
    cout << "Upper bound for '7': " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;
    cout << "Lower bound for '7': " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl; // 7 is at pos 2.
    cout << "Array before rotation: " << endl;
    for (int i : v) cout << i << " "; cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Array after rotation by 1: " << endl; // Left shift by 1.
    for (int i : v) cout << i << " "; cout << endl;
    sort(v.begin(), v.end()); // Based upon Inro sort, Quick Sort + Heap sort + Insertion sort = Intro Sort.
    cout << "Array after sorting: " << endl;
    for (int i : v) cout << i << " "; cout << endl << endl;

    int a = 3, b = 7;
    cout << "Minimum value: " << min(a, b) << " among " << a << " & " << b << endl;
    cout << "Maximum value: " << max(a, b) << " among " << a << " & " << b << endl;
    cout << "Before swappting, a = " << a << " & b = " << b << endl;
    swap(a, b);
    cout << "After swappting, a = " << a << " & b = " << b << endl;
    cout << endl;

    string s = "Amrit Sinha";
    cout << "String before reverse: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "String after reverse: " << s << endl;

    return 0;
}