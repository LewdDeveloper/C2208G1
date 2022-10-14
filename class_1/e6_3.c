#include <stdio.h>

int main()
{
    int gender, *gender_ptr;
    float weight, height, bmi, *weight_ptr, *height_ptr, *bmi_ptr;
    gender_ptr = &gender;
    weight_ptr = &weight;
    height_ptr = &height;
    printf("Enter your gender (0 for female, 1 for male) : ");
    scanf("%d", gender_ptr);
    printf("Enter your weight (kg) and height (m) : ");
    scanf("%f %f", weight_ptr, height_ptr);
    bmi = *weight_ptr / ((*height_ptr) * (*height_ptr));
    bmi_ptr = &bmi;
    switch (*gender_ptr)
    {
    case 0:
        if (*bmi_ptr > 24)
        {
            printf("You are a little big");
        }
        else if (*bmi_ptr <= 19)
        {
            printf("You are a little skinny");
        }
        else
        {
            printf("You are in good shape");
        }
        break;
    case 1:
        if (*bmi_ptr > 25)
        {
            printf("You are a little big");
        }
        else if (*bmi_ptr <= 20)
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
