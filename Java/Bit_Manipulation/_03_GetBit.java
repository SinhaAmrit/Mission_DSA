// 03. Find i th bit in a binary representation of any decimal number.
public class _03_GetBit {
    public static void main(String[] args) {
        int num = 8, pos = 2;
        int mask = 1 << pos;
        int result = num & mask;
        System.out.println("Bit at position " + pos + " in " + num + " is " + result);
    }
}
