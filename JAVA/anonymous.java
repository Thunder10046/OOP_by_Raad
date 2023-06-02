import java.util.Arrays;

public class anonymous {
    public static int[] IntialArray() {
        return new int[] { 24, 56, 86, 97, 11, 13, 54, 23, 74, 23 };
    }

    public static int[] SortArray(int[] arr) {
        Arrays.sort(arr);
        return arr;
    }

    public static void PrintArray(int[] arr) {

        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] array = IntialArray();
        PrintArray(array);
        array = SortArray(array);
        PrintArray(array);
    }
}
