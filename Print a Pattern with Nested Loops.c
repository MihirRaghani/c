#include <stdio.h>

int main() {
    // Declare the number of rows for the pattern.
    // You can change this value to adjust the size of the triangle.
    int rows = 5;
    
    // Outer loop: This loop iterates through each row of the pattern.
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop: This loop handles the columns and prints the asterisks for each row.
        // It runs 'i' times, so the number of stars increases with each new row.
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        // After the inner loop finishes, print a newline character to move to the next row.
        printf("\n");
    }
    
    return 0;
}
