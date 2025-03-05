#include <stdio.h>

void main() {
    int n, i, j, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == -1) {
            continue;
        }

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
                break;
            }
        }
    }
    printf("Total number of duplicate elements: %d\n", count);
}