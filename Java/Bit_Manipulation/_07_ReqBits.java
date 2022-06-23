// 07. Find number of bit to be changed to make a number from A to B ( i.e. Converting 5 to 9).
public class _07_ReqBits {
    private static int Convert(int num1, int num2) {
        int temp = num1 ^ num2;
        int count = 0;
        while (0 != temp) {
            count++;
            temp &= (temp - 1);
        }
        return count;
    }

    public static void main(String[] args) {
        int num1 = 5, num2 = 9;
        System.out.println("Converting " + num1 + " to " + num2 + " requires " + Convert(num1, num2) + " bits");
    }
}
