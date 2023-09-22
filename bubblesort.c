#include <stdio.h>

int main() {
    int i, j, temp, n, arr[10];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is:\n");

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}

