import java.util.Scanner;

public class basic {
    public static void main(String[] args) {
        System.out.println("Name    : Shah Ahmed Raad");
        System.out.println("Address : Talaimari, Rajshahi.");

        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        if (x > y) {
            System.out.println("Bigger one is  : " + x);
        } else
            System.out.println("Bigger one is : " + y);

        int array[];
        array = new int[10];
        System.out.println("Enter 10 integers : ");
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            int z = sc.nextInt();
            ans = ans + z;
        }
        int max = array[0];
        for (int i = 0; i < 10; i++) {
            if (max < array[i]) {
                max = array[i];
            }
        }
        int min = array[0];
        for (int i = 0; i < 10; i++) {
            if (min > array[i]) {
                min = array[i];
            }
        }
        System.out.println("Largest is  : " + max);
        System.out.println("Smallest is : " + min);
        System.out.println("Average is  : " + (double) ans / 10);

    }

}