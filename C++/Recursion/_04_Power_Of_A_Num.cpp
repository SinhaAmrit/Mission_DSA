/*
Problem Statement:
Ninja is sitting in an examination hall. He is encountered with a problem statement,
"Find ‘Num’ to the power ‘N’ (i.e. ‘Num’ ^ ‘N’). Where ‘Num’ and ‘N’ are two integers."
Ninja was not prepared for this question at all, as this question was unexpected in the exam.
He is asking for your help to solve this problem. Help Ninja to find the answer to the problem.
Note: For this question, you can assume that 0 raised to the power of 0 is 1.

Input:
2
5 2
9 3

Output:
1
25
729

Constraints:
0 <= N <= 10
0 <= num <= 10
*/
#include <iostream>
using namespace std;

long long Pow(int num, int N)
{
    if (N == 0)
        return 1;
    // long long partialAns = Pow(num, N-1);
    // return num * partialAns;
    long long temp = Pow(num, N / 2);
    if ((N & 1) != 0)
        return temp * temp * num;
    return temp * temp;
}

int main()
{
    int num, N;
    cout << "Enter number and power (seperated by spaces): ";
    cin >> num >> N;
    cout << Pow(num, N) << endl;
    return 0;
}