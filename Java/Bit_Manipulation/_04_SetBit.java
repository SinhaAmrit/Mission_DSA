public class _04_SetBit {
    public static void main(String[] args) {
        int num = 2, pos = 3;
        int mask = 1 << pos;
        int result = num | mask;
        System.out.println(result);
    }
}
