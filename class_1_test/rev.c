#include <stdio.h>
#include <string.h>

// Rules for readers
// Your code must compile and run using TDM-GCC 4.9.2 Compiler:
// -> gcc.exe [input] -o [output] -I"%CppIncludeDir0%" -I"%CppIncludeDir1%" -I"%CppIncludeDir2%" -L"%LibDir0%" -L"%LibDir1%" -static-libgcc
// You must only use the following library function:
// -> scanf(), gets(), printf(), puts(), strlen(), strcmp(), strcpy(), strcat()

// Compare your answer with example output :
/* Ex 1:
    0121001, Nguyen Van An
    Enter n: 25
    Sum(q) = 42
    List k: 11, 22
    Enter m: a
    Incorrect input!
    Enter m: 2a
    Trailing character!
    Enter m: 39
    Out of range!
    Enter m: 24
    List common divisor = 1, 2, 3, 4, 6, 12 -> SKIP THIS QUESTION
    T = -0.653211
*/
/* Ex 2:
    Test fun1
    fun1(-1):
    fun1(10):
    fun1(1): one

    Test fun2
    fun2(9): nine
    fun2(10): ten
    fun2(15): fifteen
    fun2(25): twenty five
*/

void fun1(int);
void fun2(int);

int main()
{
    char get_m[128];
    int n, m;
    int even_sum_of_halfcount = 0, found_m = 0, i;

    printf("0121001, Nguyen Van An\n");

    printf("Enter n: ");
    scanf("%d%*c", &n);

    for (i = 1; i <= (n / 2); i++)
    {
        if (i % 2 == 0)
        {
            even_sum_of_halfcount += i;
        }
    }
    printf("Sum(q) = %d\n", even_sum_of_halfcount);

    printf("List k:");
    for (i = 1; i <= n; i++)
    {
        int first_digit = i % 10, second_digit = i / 10;
        if (second_digit == first_digit)
        {
            printf(" %d", i);
        }
    }
    puts("");

    printf("Enter m: ");
    while (!found_m)
    {
        char cur;
        int pow10 = 1, temp = 0, invalid = 0;
        gets(&get_m);
        // get_m[0] = asciidigit, get_m[1] == asciidigit, get_m[2] = "\0"
        for (i = strlen(get_m) - 1; i >= 0; i--)
        {
            cur = get_m[i];
            if (!(cur >= '0' && cur <= '9'))
            {
                invalid = 1;
                if (i == 0)
                    printf("Incorrect input!");
                else
                    printf("Trailing character!");
                break;
            }
            temp += (cur - '0') * pow10;
            pow10 *= 10;
        }

        if (invalid)
        {
            continue;
        }

        if (temp > 0 && temp < n)
        {
            m = temp;
            found_m = 1;
        }
        else
        {
            printf("Out of range!");
        }
    }

    // Yes, the test exam document test unit failed hard.
    printf("List divisor of 24 = ");
    for (i = 1; i <= m; i++)
    {
        if (m % i == 0)
        {
            printf("%d ", i);
        }
    }
    puts("");

    printf("List common divisor of n and m = ");
    for (i = 1; i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("%d ", i);
        }
    }
    puts("");

    // double t;
    // int n_copy = n;
    // for (i = 0; i <= n_copy; i++, n--, m--)
    // {
    //     if (i % 2 == 0 || i == 0)
    //     {
    //         t +=  (n - m - i) * .1;
    //     }
    //     else
    //     {
    //         t -= (n - m - i) * .1;
    //     }
    // }
    // printf("T = %Lf ", t);

    printf("Test fun1\n");
    printf("\nfun1(-1): ");
    fun1(-1);
    printf("\nfun1(10): ");
    fun1(10);
    printf("\nfun1(1): ");
    fun1(1);
    printf("\n\nTest fun2\n");
    printf("\nfun2(9): ");
    fun2(9);
    printf("\nfun2(10): ");
    fun2(10);
    printf("\nfun2(15): ");
    fun2(15);
    printf("\nfun2(25): ");
    fun2(25);
    getchar();
}

void fun1(int n)
{
    if (0 <= n && n <= 9)
    {
        switch (n)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        }
    }
    return;
}

void fun2(int n)
{
    if (n >= 100)
    {
        return;
    }
    int first_digit = n % 10, second_digit = n / 10, is_teen_digit = 0;

    if (second_digit > 0)
    {
        switch (second_digit)
        {
        case 1:
            is_teen_digit = 1;
            switch (first_digit)
            {
            case 0:
                printf("Ten");
                break;
            case 1:
                printf("Eleven");
                break;
            case 2:
                printf("Twelve");
                break;
            case 3:
                printf("Thirteen");
                break;
            case 4:
                printf("Fourteen");
                break;
            case 5:
                printf("Fifteen");
                break;
            case 6:
                printf("Sixteen");
                break;
            case 7:
                printf("Seventeen");
                break;
            case 8:
                printf("Eighteen");
                break;
            case 9:
                printf("Nineteen");
                break;
            }
            break;
        case 2:
            printf("Twenty ");
            break;
        case 3:
            printf("Thirty ");
            break;
        case 4:
            printf("Fourty ");
            break;
        case 5:
            printf("Fifty ");
            break;
        case 6:
            printf("Sixty ");
            break;
        case 7:
            printf("Seventy ");
            break;
        case 8:
            printf("Eighty ");
            break;
        case 9:
            printf("Ninety ");
            break;
        }
    }

    if (is_teen_digit)
    {
        return;
    }

    switch (first_digit)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    }
    return;
}
