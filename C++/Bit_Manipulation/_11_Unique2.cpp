// 11. Write a program to find a unique number in an array where all numbers except two, are present twice.
#include <iostream>
using namespace std;
int findSetBitPos(int xorsum)
{
    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }
    return (pos - 1);
}

bool checkSetBitPos(int n, int setbitpos)
{
    return ((n & (1 << setbitpos)) != 0);
}

void findUnique(int arr[], int size)
{
    int xorsum = 0, setbitpos = 0, firstuniqueno = 0;
    for (int i = 0; i < size; i++)
        xorsum ^= arr[i];
    setbitpos = findSetBitPos(xorsum);
    for (int i = 0; i < size; i++)
        if (checkSetBitPos(arr[i], setbitpos))
            firstuniqueno ^= arr[i];
    printf("1st unique number is : %d\n2nd unique number is : %d\n", firstuniqueno, (xorsum ^ firstuniqueno));
}

int main()
{
    int arr[] = {1, 9, 8, 9, 5, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findUnique(arr, size);
    return 0;
}