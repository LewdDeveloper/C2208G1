#include <stdio.h>

void toContinue();
void printMenu();

int main()
{
    printMenu();
}

void printMenu()
{
    printf("+===================================================================+\n");
    printf("|                    EMPLOYEE MANAGEMENT PROGRAM                    |\n");
    printf("+===================================================================+\n");
    printf("| 1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
    printf("+===================================================================+\n");
    char selection = 0;
    int running = 1;
    while (running)
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
            scanf("%s", &selection);
        }
    }
    return;
}

void toContinue()
{
    char selection = 0;
    int running = 1;
    while (running)
    {
        switch (selection)
        {
        case 'c':
        case 'C':
            system("cls");
        case 'y':
        case 'Y':
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
            scanf("%s", &selection);
        }
    }
    return;
}
