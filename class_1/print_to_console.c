#include <stdio.h>
#include <string.h>

void floyd_triangle(int rows)
{
    // A
    // B C
    // D E F
    // G H I J
    // K L M N O
    char start = 'A';
    for (int i = 1; i <= rows; i++)
    {
        for (char j = 1; j <= i; j++)
        {
            printf("%c ", start++);
        }
        printf("\n");
    }
}

void bowtie(int rows)
{
    // *                    *
    // * *                * *
    // * * *            * * *
    // * * * *        * * * *
    // * * * * *    * * * * *
    // * * * * *    * * * * *
    // * * * *        * * * *
    // * * *            * * *
    // * *                * *
    // *                    *

    for (int i = 1; i <= rows; i++)
    {
        int space = (rows - i + 1) * 4 - 2;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", '*');
        }
        printf("%*s", space, "");
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", '*');
        }
        printf("\n");
    }

    // inverse
    for (int i = rows; i >= 1; i--)
    {
        int space = (rows - i + 1) * 4 - 2;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", '*');
        }
        printf("%*s", space, "");
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", '*');
        }
        printf("\n");
    }
}

void pyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
    }
}

void diamond_pyramid(int rows)
{

}

void star_mold(int rows)
{

}

void unk(int rows) {
    
}

void box()
{
    // * * * * *
    // *       *
    // *       *
    // *       *
    // * * * * *
    printf("* * * * *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("* * * * *\n");
}

void doggie()
{
    //           '__'
    //           (oo)
    //   +========\/
    //  / || %%% ||
    // *  ||-----||
    //    ""     ""
    // alternative solution : puts()
    printf("          '__' \n");
    printf("          (oo) \n");
    printf("  +========\\/ \n");
    printf(" / || %%%%%% ||   \n");
    printf("*  ||-----||   \n");
    printf("   \"\"     \"\"   \n");
    // printf("%s\n%s\n%s\n%s\n%s\n%s\n",
    //        "          '__' ",
    //        "          (oo) ",
    //        "  +========\\/ ",
    //        " / || %%% ||   ",
    //        "*  ||-----||   ",
    //        "   \"\"     \"\"   ");
}

int main(void)
{
    int c = 5;
    floyd_triangle(c);
    bowtie(c);
    pyramid(c);
    diamond_pyramid(c);
    star_mold(c);
    box();
    doggie();
}
