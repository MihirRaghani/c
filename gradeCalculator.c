#include <stdio.h>
#include <stdlib.h> // For system("cls") or system("clear")

// Function to calculate the grade using a ternary operator (Step 1)
char calculateGrade(int score) {
    // A score of 90-100 is 'A', 80-89 is 'B', etc.
    // The ternary operator is a concise way to write a simple if-else statement.
    return (score >= 90) ? 'A' :
           (score >= 80) ? 'B' :
           (score >= 70) ? 'C' :
           (score >= 60) ? 'D' : 'F';
}

// Function to print additional comments using a switch-case statement (Step 2)
void printComment(char grade) {
    // The switch statement checks the value of 'grade' and executes the corresponding case.
    switch (grade) {
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Well done");
            break;
        case 'C':
            printf("Good job");
            break;
        case 'D':
            printf("You Passed, but you could do better.");
            break;
        case 'F':
            printf("Sorry, you failed");
            break;
        default:
            printf("Invalid grade.");
    }
}

// Function to check eligibility for the next level using an if-else statement (Step 3)
void checkEligibility(char grade) {
    // The if-else statement checks a condition and executes a block of code based on the result.
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf(" Congratulations! You are eligible for the next level.");
    } else {
        printf(" Please try again next time.");
    }
}

int main() {
    int score;
    char grade;

    // Clear the console for a clean output.
    // Use "cls" for Windows or "clear" for Unix/Linux/macOS.
    system("cls"); 

    // Get input from the user
    printf("Enter your score: ");
    scanf("%d", &score);

    // Validate the input score to be within the 0-100 range
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }

    // Call the function to calculate the grade
    grade = calculateGrade(score);

    // Print the grade and the additional comment and eligibility check
    printf("Your grade is %c. ", grade);
    printComment(grade);
    checkEligibility(grade);
    printf("\n");

    return 0;
}
