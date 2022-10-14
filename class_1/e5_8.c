#include <stdio.h>

int toContinue();
void printMenu();

int main()
{
    printMenu();
}

void printMenu()
{
    char selection = 0, has_exit_condition = 0, show_menu = 1;
    while (!(has_exit_condition))
    {
        if (show_menu)
        {
            printf("+===================================================================+\n");
            printf("|                    EMPLOYEE MANAGEMENT PROGRAM                    |\n");
            printf("+===================================================================+\n");
            printf("| 1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
            printf("+===================================================================+\n");
        }
        switch (selection)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
            printf("You have selected %c\n", selection);
            show_menu = 1;
            selection = 0;
            has_exit_condition = toContinue();
            break;
        case '7':
            printf("You have selected %c\n", selection);
            has_exit_condition = 1;
            break;
        default:
            show_menu = 0;
            printf("Please enter your selection: ");
            scanf("%s", &selection);
        }
    }
    return;
}

int toContinue()
{
    char selection = 0, has_exit_condition = 0;
    while (!(has_exit_condition))
    {
        switch (selection)
        {
        case 'c':
        case 'C':
            system("cls");
        case 'y':
        case 'Y':
            has_exit_condition = 1;
            break;
        case 'n':
        case 'N':
            return 1;
        default:
            printf("Do you want to continue ?\n");
            printf("- Yes, I do. (press 'y', 'Y')\n");
            printf("- No, I don't. (press 'n', 'N')\n");
            printf("- Please clear the screen ! (press 'c', 'C')\n");
            scanf("%s", &selection);
        }
    }
    return 0;
}
