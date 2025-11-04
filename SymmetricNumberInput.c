#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Left side
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Spaces
        int spaces = 2 * (n - i);
        for (int s = 1; s <= spaces; s++) {
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
