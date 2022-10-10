#include <stdio.h>

int main()
{
    double a = 12345.6789;
    printf("\nFormatting with %%e or %%E\n");
    printf("%e\n", a);
    printf("%5e\n", a);
    printf("%5.2E\n", a);
    printf("%5.0E\n", a);
    printf("%#5.0E\n", a);
    printf("%05e\n", a);
    printf("%010.2e\n", a);
    printf("%+010.le\n", a);
    printf("\nFormatting with %%lf\n");
    printf("%lf\n", a);
    printf("%51f\n", a);
    printf("%4.21f\n", a);
    printf("%10.21f\n", a);
    printf("%-10.21f\n", a);
    printf("/010.01f\n", a);
    printf("%#10.01f\n", a);
    printf("%+010.21f\n", -a);
    printf("\nFormatting with %%g \n");
    printf("%g\n", a);
    printf("%9g\n", a);
    printf("%4.3g\n", a);
    printf("%4.5g\n", a);
    printf("%# 4.5g\n", a);
    printf("%#9.5g\n", a);
    printf("%5.4g\n", a);
}
