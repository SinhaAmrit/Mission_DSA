// 07. Find number of bit to be changed to make a number from A to B ( i.e. Converting 5 to 9).
#include <iostream>
using namespace std;
int Convert(int num1, int num2)
{
    int temp = num1 ^ num2;
    int count = 0;
    while (0 != temp)
    {
        count++;
        temp &= (temp - 1);
    }
    return count;
}

int main()
{
    int num1 = 7, num2 = 8;
    cout << "Converting " << num1 << " to " << num2 << " requires flipping " << Convert(num1, num2) << " bits." << endl;
}