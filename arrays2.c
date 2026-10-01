#include<stdio.h>
 #define MAX_SIZE 100

int main(void) {
        int arr[MAX_SIZE];
        int n, target;
        int found = 0; // Flag to track if the element was found
    
        // 1. Take size and array input
        printf("Enter number of elements (up to %d): ", MAX_SIZE);
        scanf("%d", &n);
    
        if (n <= 0 || n > MAX_SIZE) {
            printf("Invalid size!\n");
            return 1;
        }
    
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    
        // 2. Ask for the value to delete
        printf("Enter the element to delete: ");
        scanf("%d", &target);
    
        // 3. Search for the value and shift
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                found = 1;
    
                // Shift elements left to overwrite arr[i]
                for (int j = i; j < n - 1; j++) {
                    arr[j] = arr[j + 1];
                }
    
                n--;   // Reduce array size
                break; // Stop after deleting the first occurrence
            }
        }
    
        // 4. Output the result
        if (found) {
            printf("Array after deleting %d:\n", target);
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else {
            printf("Element %d was not found in the array.\n", target);
        }

        return 0;
    }