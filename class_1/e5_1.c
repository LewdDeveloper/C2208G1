#include <stdio.h>

void drawCircle();
void drawTriangle();
void drawRectangle();
void drawInvertedV();

int main()
{
    drawTriangle();
    drawRectangle();
    drawInvertedV();

    drawCircle();
    drawRectangle();
    drawInvertedV();

    drawCircle();
    drawTriangle();
    drawInvertedV();
}

void drawTriangle(void)
{
    printf("   *\n");
    printf("  *  *\n");
    printf(" *    *\n");
    printf("********\n");
}

void drawRectangle(void)
{
    printf(" ******\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf(" ******\n");
}

void drawCircle(void)
{
    printf("   **\n");
    printf(" *    *\n");
    printf(" *    *\n");
    printf("   **\n");
}

void drawInvertedV(void)
{
    printf("   *\n");
    printf("  * *\n");
    printf(" *   *\n");
    printf("*     *\n");
}