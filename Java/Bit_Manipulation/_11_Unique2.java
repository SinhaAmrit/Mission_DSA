// 11. Write a program to find a unique number in an array where all numbers except two, are present twice.
// {2,4,6,7,4,5,6,2}
public class _11_Unique2 {
    private static int findSetBitPos(int xorsum) {
        int setbit = 0, pos = 0;
        while (setbit != 1) {
            setbit = xorsum & 1;
            pos++;
            xorsum >>= 1;
        }
        return (pos - 1);
    }

    private static boolean checkSetBitPos(int n, int setbitpos) {
        return ((n & (1 << setbitpos)) != 0);
    }

    private static void findUnique(int arr[]) {
        int xorsum = 0, setbitpos = 0, firstuniqueno = 0;
        for (int i = 0; i < arr.length; i++)
            xorsum ^= arr[i];
        setbitpos = findSetBitPos(xorsum);
        for (int i = 0; i < arr.length; i++)
            if (checkSetBitPos(arr[i], setbitpos))
                firstuniqueno ^= arr[i];
        System.out.println(
                "1st unique number is : " + firstuniqueno + "\n2nd unique number is : " + (xorsum ^ firstuniqueno));
    }

    public static void main(String[] args) {
        int[] arr = { 1, 9, 8, 9, 5, 5, 3, 1 };
        findUnique(arr);
    }
}
