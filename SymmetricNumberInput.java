import java.util.Scanner;

public class NumberDoublePyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            // Left side
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }

            // Spaces
            int spaces = 2 * (n - i);
            for (int s = 1; s <= spaces; s++) {
                System.out.print("  ");
            }

            // Right side
            for (int j = i; j >= 1; j--) {
                System.out.print(j + " ");
            }

            System.out.println();
        }

        sc.close();
    }
}
