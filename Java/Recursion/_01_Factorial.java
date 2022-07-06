
/* 
 * Problem Statement
 * Write a program to find the factorial of a number.
 * Factorial of n is:
 * n! = n * (n-1) * (n-2) * (n-3)....* 1
 * Output the factorial of 'n'. If it does not exist, output 'Error'.
 * Constraints:
 * -10 <= n <= 12
 * Input: 5
 * Output: 120
 */

import java.util.*;

public class _01_Factorial {

    private static int factorial(int num) {
        if (num == 0)
            return 1;
        int partialAns = factorial(num - 1);
        return (num * partialAns);
    }

    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.close();
        if (num < 0)
            System.out.println("Error");
        else
            System.out.println(factorial(num));
    }
}