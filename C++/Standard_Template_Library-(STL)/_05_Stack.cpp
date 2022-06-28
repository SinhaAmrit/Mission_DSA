/*
[NOTE: Stack is the implementation of an array following LIFO (Last In First Out) algorithm]
*/
#include <iostream>
#include <stack> // Header file for stack

using namespace std;
int main()
{
    stack<string> s;
    s.push("hello! ");
    s.push("how ");
    s.push("are ");
    s.push("you ");
    s.emplace("🖐️ ");                                // Push the element at position 0
    cout << "Size of stack is " << s.size() << endl; // Print size of stack
    cout << "Top of stack: " << s.top() << endl;     // Print the top element of stack
    s.pop();                                         // Pop the top element of stack
    cout << "Top of stack: " << s.top() << endl;     // Print the top element of stack
    cout << "Is empty? " << s.empty() << endl;       // Print if stack is empty
    return 0;
}