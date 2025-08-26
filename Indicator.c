#include <stdio.h>

// Function to find cubes of elements in 2D array
void findCubes(int arr[10][10], int size)
{
    int i, j;
    printf("Cubes of all elements:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            int val = arr[i][j];
            printf("%d ", val * val * val); // cube
        }
        printf("\n");
    }
}

int main()
{
    // ------------------- Question 1 -------------------
    char str[100];
    char *p;
    int length = 0;

    printf("Question 1: Length Finder\n");
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if exists
    for (p = str; *p != '\0'; p++)
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
    }

    p = str;
    while (*p != '\0')
    {
        length++;
        p++;
    }
    printf("The length of a string is: %d\n\n", length);

    // ------------------- Question 2 -------------------
    int size, i, j;
    int arr[10][10];

    printf("Question 2: Cubes Generator\n");
    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(arr, size);

        return 0;
}
