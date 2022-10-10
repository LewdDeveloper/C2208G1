#include <stdio.h>

int main()
{
    int n0, n1, n2, max;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &n0, &n1, &n2);
    if (n0 == n2 || n0 == n1 || n1 == n2)
    {
        printf("The teacher asked me to check for distinct number!");
        return 0;
    }
    max = n0;
    if (max < n1)
    {
        max = n1;
    }
    if(max < n2)
    {
        max = n2;
    }
    printf("%d is the greatest.", max);
}