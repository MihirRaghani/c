#include <stdio.h>

int main() {
    // 1. Declare and initialize a 1D integer array.
    // You can change these values to test with different numbers.
    int numbers[] = {34, 12, 56, 78, 9, 45, 23, 89, 67, 100};
    
    // Calculate the number of elements in the array.
    // sizeof(numbers) gives the total size of the array in bytes.
    // sizeof(numbers[0]) gives the size of a single element (integer) in bytes.
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // 2. Assume the first element is the largest.
    int largest = numbers[0];
    
    // 3. Iterate through the rest of the array (starting from the second element).
    for (int i = 1; i < size; i++) {
        // 4. Compare the current element with the current largest element.
        if (numbers[i] > largest) {
            // 5. If the current element is larger, update the 'largest' variable.
            largest = numbers[i];
        }
    }
    
    // 6. Print the result.
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}
