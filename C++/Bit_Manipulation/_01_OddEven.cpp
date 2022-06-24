// 01} Check a number if it's odd or even.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if ((num & 1) == 0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
}