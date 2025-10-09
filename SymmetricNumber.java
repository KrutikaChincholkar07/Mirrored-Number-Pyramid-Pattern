public class MirrorNumberPyramid {
    public static void main(String[] args) {
        int rows = 4;

        for (int i = 1; i <= rows; i++) {
            // Left side
            for (int j = 1; j <= i; j++)
                System.out.print(j + " ");

            // Spaces
            for (int j = 1; j <= 2 * (rows - i); j++)
                System.out.print("  ");

            // Right side
            for (int j = i; j >= 1; j--)
                System.out.print(j + " ");

            System.out.println();
        }
    }
}
