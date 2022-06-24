// 02. Swap two numbers.
#include <iostream>
using namespace std;
int main()
{
    int num1 = 50, num2 = 25;
    cout << "Num 1 = " << num1 << ": Num 2 = " << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "Num 1 = " << num1 << ": Num 2 = " << num2 << endl;
}