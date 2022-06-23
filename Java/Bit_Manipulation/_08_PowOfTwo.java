// 08. Check if a given number is in power of 2 or not.
public class _08_PowOfTwo {
    private static int isPowerOfTwo(int num) {
        return (num & ~(num & (num - 1)));
    }

    public static void main(String[] args) {
        int num = 255;
        if (isPowerOfTwo(num) != 0)
            System.out.println(num + " is in power of 2 ");
        else
            System.out.println(num + " is not in power of 2 ");
    }
}
