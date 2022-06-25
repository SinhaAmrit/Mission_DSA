// 05. Clear i th bit.
#include <iostream>
using namespace std;
int main()
{
    int num = 5, pos = 0;
    int mask = ~(1 << pos);
    int result = num & mask;
    cout << result << endl;
    return 0;
}