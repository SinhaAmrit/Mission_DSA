/*  Sample Output 👇
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, count;
    i = 1;
    cout << "Enter size: ";
    cin >> n;
    while (i <= n)
    {
        j = count = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}