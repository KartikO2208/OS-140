#include <stdio.h>

void main() 
{
    int arr[50], i, count, s1, s2;

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

    if (arr[0] < arr[1]) {
        s1 = arr[0];
        s2 = arr[1];
    } else {
        s1 = arr[1];
        s2 = arr[0];
    }

    for (i = 2; i < count; i++) {
        if (arr[i] < s1) {
            s2 = s1;  
            s1 = arr[i];  
        } else if (arr[i] < s2 && arr[i] != s1) {
            s2 = arr[i];  
        }
    }

    printf("The second smallest array element is %d\n", s2);
}
