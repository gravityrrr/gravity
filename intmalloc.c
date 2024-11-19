#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    for (i = 0; i < n; i++) 
    {
        arr[i] = i + 1;  
    }

    printf("Array elements after malloc initialization:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    // Dynamically allocate memory using calloc
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the array elements after calloc initialization
    printf("Array elements after calloc initialization:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}