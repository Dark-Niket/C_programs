
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the order of the square matrix (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid matrix size!\n");
        return 1;
    }

    int a[n][n], b[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Rotation of matrix by 90 degrees anticlockwise
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][(n - 1) - i];
        }
    }

    printf("\nTHE MATRIX AFTER ROTATION (90 degrees anticlockwise):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
