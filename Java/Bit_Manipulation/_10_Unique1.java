// 10. Write a program to find a unique number in an array where all numbers except one, are present twice.
// {2,4,6,3,4,6,2}
public class _10_Unique1 {
    private static int unique1(int arr[]) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++)
            sum ^= arr[i];
        return sum;
    }

    public static void main(String[] args) {
        int[] arr = { 2, 4, 6, 3, 4, 6, 2 };
        System.out.println(unique1(arr));
    }
}
