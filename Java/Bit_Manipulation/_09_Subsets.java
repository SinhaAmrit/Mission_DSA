// 09. Write a program to generate all possible subsets of a set {7,8,9,6}.

import java.util.Arrays;

public class _09_Subsets {
    private static void printSubsets(int arr[]) {
        for (int i = 0; i < (1 << arr.length); i++) {
            System.out.print("{ ");
            for (int j = 0; j < arr.length; j++)
                if (0 != (i & (1 << j)))
                    System.out.print(arr[j] + " ");
            System.out.println("}");
        }
    }

    public static void main(String[] args) {
        int[] arr = { 7, 8, 9, 6 };
        System.out.println("All possible subsets of " + Arrays.toString(arr) + " 👇");
        printSubsets(arr);
    }
}