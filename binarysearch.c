#include <stdio.h>

void binary_search(int [], int, int, int);

int main() {
    int i, n, arr[29], key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the search key: ");
    scanf("%d", &key);
    
    binary_search(arr, 0, n - 1, key);
    
    return 0;
}

void binary_search(int arr[], int low, int high, int key) {
    int mid;
    
    if (low > high) {
        printf("Key not found\n");
        return;
    }
    
    mid = (low + high) / 2;
    
    if (arr[mid] == key) {
        printf("Key is found at index %d\n", mid);
    } else if (arr[mid] > key) {
        binary_search(arr, low, mid - 1, key);
    } else {
        binary_search(arr, mid + 1, high, key);
    }
}
