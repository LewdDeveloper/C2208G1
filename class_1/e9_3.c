#include <stdio.h>

typedef struct
{
    char name[20];
    int eng;   // English grade [0, 100]
    int maths; // maths grade [0, 100]
} Student;

int main()
{
    Student students[5] = {
        {"Nick", 90, 75},
        {"Suisei", 85, 70},
        {"Pochi Lida", 78, 87},
        {"Garbage", 30, 25},
        {"0isNotEmpty", 0, 1},
    };

    int max = students[0].eng + students[0].maths;
    for (int i = 0; i < 5; i++)
    {
        int sum = students[i].eng + students[i].maths;
        if (sum > max)
        {
            max = sum;
        }
    }
    printf("People with most total pts :\n");
    for (int i = 0; i < 5; i++)
    {
        int sum = students[i].eng + students[i].maths;
        if (sum == max)
        {
            printf("{english: %d, math: %d} %s\n", students[i].eng, students[i].maths, students[i].name);
        }
    }
    printf("People with perfect english pts :\n");
    for (int i = 0; i < 5; i++)
    {
        students[i].eng += 30;
        if (students[i].eng > 100)
        {
            students[i].eng = 100;
        }
        if (students[i].eng == 100)
        {
            printf("%s, ", students[i].name);
        }
    }
}