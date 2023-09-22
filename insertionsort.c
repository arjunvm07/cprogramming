#include <stdio.h>

void insertion_sort(int arr[], int n);

int main() {
    int arr[100], i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertion_sort(arr, n);

    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void insertion_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than temp
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}
