
/*
 * Problem Statement
 * Write a program to find the sum of N natural number.
 * sum of n natural numbers is:
 * n + (n-1) + (n-2) + (n-3) + (n-4) + (n-5) +...+ (n - n)
 * Input: 100
 * Output: 5050
 */
import java.util.Scanner;

public class _02_Sum_Of_N_Natural_Numbers {
    static int sum(int num) {
        if (num == 1)
            return 1; // base case
        int partialAns = sum(num - 1); // recursive call
        return (num + partialAns); // end case
    }

    public static void main(String[] args) {
        System.out.print("Enter a natural number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.close();
        System.out.println("Sum of " + num + " natural numbers is " + sum(num));
    }
}