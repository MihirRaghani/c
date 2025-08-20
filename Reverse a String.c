#include <stdio.h>

/**
 * @brief Reverses a given string in-place without using library functions.
 * * This function takes a character array (string) as input and reverses it
 * by swapping characters from the beginning and end until the pointers meet
 * in the middle. It first finds the length of the string manually.
 * * @param str The string to be reversed. It must be a mutable character array.
 */
void reverseString(char str[]) {
    // Pointers for the start and end of the string
    char *start = str;
    char *end = str;

    // First, find the end of the string by iterating until the null terminator ('\0').
    // This effectively finds the length of the string manually.
    while (*end != '\0') {
        end++;
    }
    // Decrement the end pointer to point to the last character of the string.
    end--;

    // Now, swap characters from the beginning and the end.
    // The loop continues as long as the start pointer is before the end pointer.
    while (start < end) {
        // Use a temporary variable to perform the swap
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers inward
        start++;
        end--;
    }
}

int main() {
    // Declare a string to be reversed. Make sure it's a character array so it's mutable.
    char myString[] = "Hello, Canvas!";

    // Print the original string
    printf("Original string: %s\n", myString);

    // Call the function to reverse the string
    reverseString(myString);

    // Print the reversed string
    printf("Reversed string: %s\n", myString);

    return 0;
}
