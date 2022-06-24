// 12. Find the only non - repeating element in an array where every other element repeats thrice.

import java.util.Arrays;

public class _12_Unique3 {
    private static int findUnique(int arr[], int duplicates) {
        byte INT_SIZE = (Integer.SIZE); // 32-bit integer
        int count[] = new int[INT_SIZE];

        for (int i = 0; i < INT_SIZE; i++)
            for (int j = 0; j < arr.length; j++)
                if ((arr[j] & (1 << i)) != 0)
                    count[i]++;

        int result = 0;
        for (int i = 0; i < INT_SIZE; i++)
            result += (count[i] % duplicates) * (1 << i);
        result /= (arr.length % duplicates);
        return result;
    }

    public static void main(String[] args) {
        int arr[] = { 2, 2, 1, 5, 1, 1, 2 };
        int duplicates = 3; // Number of duplicate values in the array.
        System.out.println(
                "The only non-duplicate value from " + Arrays.toString(arr) + " is " + findUnique(arr, duplicates));
    }
}
