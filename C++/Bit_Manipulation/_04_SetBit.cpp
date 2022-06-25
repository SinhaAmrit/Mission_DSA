// 04. Set i th bit.
#include <iostream>
using namespace std;
int main()
{
    int num = 2, pos = 3;
    int mask = 1 << pos;
    int result = num | mask;
    cout << result;
    return 0;
}