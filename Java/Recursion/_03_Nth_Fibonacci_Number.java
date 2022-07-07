/*
** Problem Statement
*     Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
*     F(n) = F(n-1) + F(n-2),
*     Where, F(1) = F(2) = 1
* Provided N you have to find out the Nth Fibonacci Number.
*
** Constraints:
* 1 <= N <= 10000
* Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.
*
** Time Limit: 1 second
** Input: 6
** Output: 8
** Explanation:
* Now the number is ‘6’ so we have to find the “6th” Fibonacci number So by using the property of the
* Fibonacci series i.e [ 1, 1, 2, 3, 5, 8] So the “6th” element is “8” hence we get the output.
*/
import java.util.Scanner;
public class _03_Nth_Fibonacci_Number{
private static int fibonacci(int num)
{
    if (num == 2 || num == 1)
        return 1;
    int partialAns1 = fibonacci(num - 1);
    int partialAns2 = fibonacci(num - 2);
    return partialAns1 + partialAns2;
}
public static void main(String[] args) {
    System.out.print("Enter nth position of the fibonacci series: ");
    Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.close();
    System.out.println("Element at position "+ num + " of the Fibonacci series is "+ fibonacci(num));
}
}