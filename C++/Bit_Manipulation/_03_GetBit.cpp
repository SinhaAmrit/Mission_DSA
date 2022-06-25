// 03. Find i th bit in a binary representation of any decimal number.
#include <iostream>
using namespace std;
int main()
{
    int num = 8, pos = 2;
    int mask = 1 << pos;
    int result = num & mask;
    cout<<"Bit at position "<<pos<<" in "<<num<<" is "<<result<<endl;
    return 0;
}