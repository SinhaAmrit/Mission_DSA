// Given an integer num. Swap the Bth and Cth bit from right in binary representation of num.
public class _13_SwapBits {
    private static int swapBits(int num, int B, int C) {
        int mask = (num & (1 << B - 1)) ^ (num & (1 << C - 1));
        if (mask != 0) {
            num ^= (1 << B - 1);
            num ^= (1 << C - 1);
        }
        return num;
    }

    public static void main(String[] args) {
        int num = 9, B = 1, C = 2;
        System.out.println("Swapping bits at position " + B + " and position " + C + " of " + num);
        System.out.println("Resulting " + swapBits(num, B, C)); // 1001 -> 1010
    }
}
