#include <stdio.h>

void main() {
    int n, i, j, count = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == -1) {
            continue;
        }

        int dup_count = 0;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                dup_count++;
                arr[j] = -1; 
            }
        }

        if (dup_count > 0) {
            count++;
        }
    }

    printf("The total number of duplicate elements is: %d\n", count);
}