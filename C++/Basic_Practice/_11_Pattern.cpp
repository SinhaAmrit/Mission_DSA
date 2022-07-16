/*  Sample Output 👇
    A B C
    A B C
    A B C
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c = 'A' + j - 1;
            cout << c << " ";
        }
        cout << endl;
    }
}