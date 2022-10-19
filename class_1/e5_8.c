#include <stdio.h>

void toContinue();
void printMenu();

int main()
{
    int main_selection = 0;
    char sub_selection = 0, has_exit_condition = 0, show_menu = 1;
    while (!(has_exit_condition))
    {
        if (show_menu)
        {
            printMenu();
        }
        switch (main_selection)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("You have selected %c\n", sub_selection);
            do
            {
                toContinue();
                scanf(" %c", &sub_selection);
                switch (sub_selection)
                {
                case 'c':
                case 'C':
                    system("cls");
                case 'y':
                case 'Y':
                    show_menu = 1;
                    break;
                case 'n':
                case 'N':
                    has_exit_condition = 1;
                    break;
                }
            } while (!(show_menu) && !(has_exit_condition));
            break;
        case 7:
            printf("You have selected %d\n", main_selection);
            has_exit_condition = 1;
            break;
        default:
            show_menu = 0;
            printf("Please enter your selection: ");
            scanf("%d", &main_selection);
        }
    }
    return;
}

void printMenu()
{
    printf("+===================================================================+\n");
    printf("|                    EMPLOYEE MANAGEMENT PROGRAM                    |\n");
    printf("+===================================================================+\n");
    printf("| 1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
    printf("+===================================================================+\n");
    return;
}

void toContinue()
{
    printf("Do you want to continue ?\n");
    printf("- Yes, I do. (press 'y', 'Y')\n");
    printf("- No, I don't. (press 'n', 'N')\n");
    printf("- Please clear the screen ! (press 'c', 'C')\n");
    return;
}
