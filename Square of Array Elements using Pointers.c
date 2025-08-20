#include <stdio.h>

int main() {
    // 1. Declare and initialize a 1D integer array.
    int numbers[] = {2, 4, 6, 8, 10};
    
    // Calculate the size of the array.
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // 2. Declare an integer pointer and initialize it to point to the beginning of the array.
    int *ptr = numbers;
    
    // Print the original array elements for comparison.
    printf("Original array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    // 3. Iterate through the array using the pointer.
    printf("Calculating the square of each element...\n\n");
    for (int i = 0; i < size; i++) {
        // 4. Dereference the pointer to access the value at the current address.
        // Multiply the value by itself to get the square.
        // Store the new squared value back into the same memory location.
        *ptr = (*ptr) * (*ptr);
        
        // 5. Move the pointer to the next element in the array.
        ptr++;
    }
    
    // 6. Print the modified array to show the squared values.
    printf("Array elements after squaring:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
