#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice = 0;
    int n1 = 0, n2 = 0;  //AC** Initialized variables to avoid undefined behavior

    while (1)  //AC** Infinite loop which will break on valid exit condition
    {
        printf("----------------\n");
        printf("- 1) Add       -\n");
        printf("- 2) Subtract  -\n");
        printf("- 3) Multiply  -\n");
        printf("- 4) Exit      -\n");
        printf("----------------\n");

        if (scanf("%d", &choice) != 1)  //AC** Checking return value of scanf for validity
        {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            while (getchar() != '\n');  //AC** Clear input buffer
            continue;  //AC** Restart loop
        }

        //AC** Validating user choice
        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue;
        }

        if (choice == 4)  //AC** Exit condition
            break;

        printf("Enter two numbers separated by space: ");
        if (scanf("%d %d", &n1, &n2) != 2)  //AC** Checking return value of scanf for validity
        {
            printf("Invalid input. Please enter two numbers.\n");
            while (getchar() != '\n');  //AC** Clear input buffer
            continue;  //AC** Restart loop
        }

        switch (choice)
        {
            case 1:
                printf("%d + %d = %d\n", n1, n2, n1 + n2);
                break;
            case 2:
                printf("%d - %d = %d\n", n1, n2, n1 - n2);
                break;
            case 3:
                printf("%d * %d = %d\n", n1, n2, n1 * n2);
                break;
        }
    }

    return 0;  //AC** Graceful exit from main
}
