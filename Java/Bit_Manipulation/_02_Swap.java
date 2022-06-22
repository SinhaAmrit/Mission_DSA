// 02. Swap two numbers.
public class _02_Swap {
    public static void main(String[] args) {
        int num1 = 50, num2 = 25;
        System.out.println("Num 1 = " + num1 + ": Num 2 = " + num2);
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
        System.out.println("Num 1 = " + num1 + ": Num 2 = " + num2);
    }
}
