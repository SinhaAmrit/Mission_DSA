// 01} Check a number if it's odd or even.
public class _01_OddEven {
    public static void main(String[] args) {
        int num = 29;
        if ((num & 1) == 0)
            System.out.println("Even");
        else
            System.out.println("Odd");
    }
}