#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        // Left side
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Spaces
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf("  ");
        }

        // Right side
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
