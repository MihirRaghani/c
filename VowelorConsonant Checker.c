#include <stdio.h>
#include <ctype.h> // Required for the tolower() function

int main() {
    // Declare a character variable to store user input
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");

    // Read a single character from the user.
    // The space before %c handles any leading whitespace (like a newline from a previous input).
    scanf(" %c", &ch);

    // Convert the character to lowercase. This simplifies the switch statement
    // by allowing us to check for both 'A' and 'a' with a single case.
    ch = tolower(ch);

    // Check if the character is an alphabet. If not, we print a message.
    if (ch >= 'a' && ch <= 'z') {
        // Use a switch statement to evaluate the character.
        switch (ch) {
            // Case for each vowel.
            // The fall-through cases (without break) mean that if the character
            // matches any of these cases, the code for 'a' will be executed.
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("The character '%c' is a vowel.\n", ch);
                break;
            // The default case handles all other alphabetic characters.
            // Since we already checked that the character is an alphabet,
            // anything not a vowel must be a consonant.
            default:
                printf("The character '%c' is a consonant.\n", ch);
                break;
        }
    } else {
        // Handle cases where the input is not a letter.
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}
