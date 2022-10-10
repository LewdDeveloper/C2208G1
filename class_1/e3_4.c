#include <stdio.h>

int main()
{
    int gender;
    float weight, height, bmi;
    printf("Enter your gender (0 for female, 1 for male) : ");
    scanf("%d", &gender);
    printf("Enter your weight (kg) and height (m) : ");
    scanf("%f %f", &weight, &height);
    bmi = weight / (height * height);
    switch (gender)
    {
    case 0:
        if (bmi > 24)
        {
            printf("You are a little big");
        }
        else if (bmi <= 19)
        {
            printf("You are a little skinny");
        }
        else
        {
            printf("You are in good shape");
        }
        break;
    case 1:
        if (bmi > 25)
        {
            printf("You are a little big");
        }
        else if (bmi <= 20)
        {
            printf("You are a little skinny");
        }
        else
        {
            printf("You are in good shape");
        }
        break;
    }
}
