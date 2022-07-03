/*
[NOTE: Priority Queue is the type of queue with 1st element,
always be greatest amomg all (Max Heap implementation) and always
the gratest element from the queue will be poped first. vice-versa
in the case of Min Heap implementation]
*/
#include <iostream>
#include <queue>                                             // Header file for priority_queue implementation

using namespace std;
int main()
{

    priority_queue<int> queue_max;                            // Priority queue with Max Heap implementation.
    priority_queue<int, vector<int>, greater<int>> queue_min; // Priority queue with Min Heap implementation.

    /* ___Max Heap Code___ */
    queue_max.push(1);
    queue_max.push(5);
    queue_max.push(2);
    queue_max.push(7);
    int size = queue_max.size();                             // returns size of queue_max.
    for (int i = 0; i < size; i++)
    {
        cout << queue_max.top() << " " << endl;              // Print top most element of queue_max.
        queue_max.pop();                                     // Remove top element from queue_max.
    }
    cout << "Is Empty? " << queue_max.empty() << endl;       // Print queue_max is empty or not.

    /* ___Min Heap Code___ */
    queue_min.push(1);
    queue_min.push(5);
    queue_min.push(2);
    queue_min.push(7);
    size = queue_min.size();                                 // returns size of queue_min.
    for (int i = 0; i < size; i++)
    {
        cout << queue_min.top() << " " << endl;              // Print top most element of queue_min.
        queue_min.pop();                                     // Remove top element from queue_min.
    }
    cout << "Is Empty? " << queue_min.empty() << endl;       // Print queue_min is empty or not.

    return 0;
}