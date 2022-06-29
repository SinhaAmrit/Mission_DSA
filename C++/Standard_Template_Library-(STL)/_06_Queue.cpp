/*
[NOTE: Queue is the implementation of an array following FIFO (First In First Out) algorithm]
*/
#include <iostream>
#include <queue> // Header file for queue implementation

using namespace std;
int main()
{
    queue<string> q;
    q.push("hello! ");
    q.push("how ");
    q.push("are ");
    q.push("you ");
    cout << "Size of queue is " << q.size() << endl; // Print size of queue
    cout << "Top of queue: " << q.front() << endl;   // Print the top element of queue
    cout << "Back of queue: " << q.back() << endl;   // Print the back most element of queue
    q.pop();                                         // Pop the top element of queue
    cout << "Top of queue: " << q.front() << endl;   // Print the top element of queue
    cout << "Is empty? " << q.empty() << endl;       // Print if queue is empty
    return 0;
}