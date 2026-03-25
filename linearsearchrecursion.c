#include <stdio.h>

int linearSearchRec(int arr[], int n, int key, int i) {
    if (i == n) {
        return -1;
    }
    
    if (arr[i] == key) {
        return i;
    }
    
    return linearSearchRec(arr, n, key, i + 1);
}

void main() {
    int arr[100], n, key, result, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    result = linearSearchRec(arr, n, key, 0);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
}
