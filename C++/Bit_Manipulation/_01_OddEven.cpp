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