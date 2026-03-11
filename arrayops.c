#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int i, pos, element, choice;
    
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\n1. Insert element\n");
    printf("2. Delete element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("\nEnter element to insert: ");
        scanf("%d", &element);
        printf("Enter position (0 to %d): ", size);
        scanf("%d", &pos);
        
        for (i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        size++;
        
        printf("After insertion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else if (choice == 2) {
        printf("\nEnter position to delete (0 to %d): ", size - 1);
        scanf("%d", &pos);
        
        for (i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        
        printf("After deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
