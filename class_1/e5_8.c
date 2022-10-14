#include <stdio.h>

void toContinue();

void printMenu()
{
    printf("+===================================================================+\n");
    printf("|                    EMPLOYEE MANAGEMENT PROGRAM                    |\n");
    printf("+===================================================================+\n");
    printf("| 1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
    printf("+===================================================================+\n");
    char selection = 0;
    int running = 1, unexpected_input = 0;
    while (running)
    {
        do
        {
            switch (selection)
            {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
                printf("You have selected %c\n", selection);
                toContinue();
            case '7':
                running = 0;
                break;
            default:
                printf("Please enter your selection: ");
                unexpected_input = 1;
                scanf("%s", &selection);
            }
        } while (unexpected_input && running);
    }
    return;
}

void toContinue()
{
    char selection = 0;
    int running = 1, unexpected_input = 0;
    while (running)
    {
        do
        {
            switch (selection)
            {
            case 'c':
            case 'C':
                system("cls");
            case 'y':
            case 'Y':
                unexpected_input = 0;
                printMenu();
            case 'n':
            case 'N':
                running = 0;
                break;
            default:
                printf("Do you want to continue ?\n");
                printf("- Yes, I do. (press 'y', 'Y')\n");
                printf("- No, I don't. (press 'n', 'N')\n");
                printf("- Please clear the screen ! (press 'c', 'C')\n");
                unexpected_input = 1;
                scanf("%s", &selection);
            }
        } while (unexpected_input && running);
    }
    return;
}

int main()
{
    printMenu();
}