#include <stdio.h>

void main() {
    int m, n, i, j;

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    int matrix[m][n];
    int row_sum[m];
    int col_sum[n];

    printf("Enter elements of the %dx%d matrix:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        row_sum[i] = 0;
    }
    for (j = 0; j < n; j++) {
        col_sum[j] = 0;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for (i = 0; i < m; i++) {
        printf("Row %d sum: %d\n", i + 1, row_sum[i]);
    }

    printf("\nSum of each column:\n");
    for (j = 0; j < n; j++) {
        printf("Column %d sum: %d\n", j + 1, col_sum[j]);
    }
}