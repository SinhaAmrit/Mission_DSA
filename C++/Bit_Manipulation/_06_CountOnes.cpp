// 06. Count no. Of 1's in a binary representation.
#include <iostream>
using namespace std;
int Counter(int num)
{
    int count = 0;
    while (0 != num)
    {
        count++;
        num &= (num - 1);
    }
    return count;
}

int main()
{
    int num = 13;
    cout << Counter(num) << endl;
}