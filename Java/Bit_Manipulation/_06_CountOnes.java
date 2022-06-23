// 06. Count no. Of 1's in a binary representation.
public class _06_CountOnes {
    private static int Counter(int num) {
        int count = 0;
        while (0 != num) {
            count++;
            num &= (num - 1);
        }
        return count;
    }

    public static void main(String[] args) {
        int num = 13;
        System.out.println(Counter(num));
    }
}
