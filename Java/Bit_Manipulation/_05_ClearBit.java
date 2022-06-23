// 05. Clear i th bit.
public class _05_ClearBit {
    public static void main(String[] args) {
        int num = 5, pos = 0;
        int mask = ~(1 << pos);
        int result = num & mask;
        System.out.println(result);
    }
}
