#include <stdio.h>

void main() 
{
    int arr[50], i, count, l1, l2;

    printf("Enter number of elements in array: ");
    scanf("%d", &count);

    if (count < 2) {
        printf("Array must have at least two elements\n");
        return;
    }

    printf("Enter elements:\n");
    for (i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        l1 = arr[0];
        l2 = arr[1];
    } else {
        l1 = arr[1];
        l2 = arr[0];
    }

    for (i = 2; i < count; i++) {
        if (arr[i] > l1) {
            l2 = l1;  
            l1 = arr[i];  
        } else if (arr[i] > l2 && arr[i] != l1) {
            l2 = arr[i];  
        }
    }

    printf("The second largest array element is %d\n", l2);
}