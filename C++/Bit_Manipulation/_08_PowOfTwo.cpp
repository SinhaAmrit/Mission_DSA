// 08. Check if a given number is in power of 2 or not.
#include <iostream>
using namespace std;
int isPowerOfTwo(int num)
{
    return (num & ~(num & (num - 1)));
}

int main()
{
    int num = 255;
    if (isPowerOfTwo(num) != 0)
        cout << num << " is in power of 2 " << endl;
    else
        cout << num << " is not in power of 2 " << endl;
}