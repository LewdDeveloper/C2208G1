#include <stdio.h>

// https://en.cppreference.com/w/c/io/fprintf
// https://en.cppreference.com/w/c/io/fscanf

typedef struct
{
    char Name[128]; // car name
    int Year;       // manufacturing year
    int Price;      // selling price of a brand-new car
    int MaxSpeed;
} Car;

typedef struct
{
    int MinPrice;
    int MaxPrice;
    int AvgPrice;
} Stats;

void scanName(Car *);
void scanMaxSpeed(Car *);
void scanYear(Car *);
void scanPrice(Car *);
void getCarInputs(Car *, int);
void printCarList(Car[], int);
void printCarAfter2000(Car[], int);
Stats getStatistics(Car[], int);

int main()
{
    // Car car[] = {
    //     {"BMW 1", 2000, 79400, 250},
    //     {"Volvo S60", 2002, 109720, 250},
    //     {"Peugeot 2008", 1999, 167550, 360},
    //     {"Peugeot 308", 2006, 10440, 250},
    //     {"Kia ur mom", 2000, 42000, -1}};
    Stats stats;
    Car car[2];
    getCarInputs(car, 2);
    printCarList(car, 2);
    printCarAfter2000(car, 2);
    stats = getStatistics(car, 2);
    printf("Stats : Cheapest car costs : $%d, Most expensive car costs : $%d, Average cost of cars : $%d\n", stats.MinPrice, stats.MaxPrice, stats.AvgPrice);
}

void scanName(Car *car_ptr)
{
    printf("Name: ");
    scanf("%127[^\n]%*c", &car_ptr->Name); // reads up to 127 characters then discard space
    return;
}

void scanYear(Car *car_ptr)
{
    int year, invalid = 0;
    do
    {
        if (invalid)
        {
            printf("Year must be from 1980 to 2019\n");
        }
        invalid = 1;
        printf("Year: ");
        scanf("%d", &year);
    } while (!(year >= 1980 && year <= 2019));
    car_ptr->Year = year;
    return;
}

void scanPrice(Car *car_ptr)
{
    int price, invalid = 0;
    do
    {
        if (invalid)
        {
            printf("Price must be from $30,000 to $400,000\n");
        }
        invalid = 1;
        printf("Price: ");
        scanf("%d", &price);
    } while (!(price >= 30000 && price <= 400000));
    car_ptr->Price = price;
    return;
}

void scanMaxSpeed(Car *car_ptr)
{
    printf("Max Speed: ");
    scanf("%d%*c", &car_ptr->MaxSpeed); // reads a number then discard space
    return;
}

void getCarInputs(Car *arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        Car *car_ptr = arr + i;
        printf("Car[%d]\n", i);
        scanName(car_ptr);
        scanYear(car_ptr);
        scanPrice(car_ptr);
        scanMaxSpeed(car_ptr);
    }
    return;
}

void printCarList(Car arr[], int count)
{
    int max_str_length = 0;
    for (int i = 0; i < count; i++)
    {
        int len = strlen(arr[i].Name);
        if (len > max_str_length)
        {
            max_str_length = len;
        }
    }
    printf("%-7s|", "No#");                         // prints "No#" (3 characters) then right-padding with ' ' until there's 7 characters.
    printf("%-8s%*s|", "Name", max_str_length, ""); // prints "Name" (4 characters) then right-padding with ' ' until there's 8 characters. prints ANY ' ' characters
    printf("%-8s|", "Year");                        // prints "Year" (4 characters) then right-padding with ' ' until there's 8 characters.
    printf("%-9s|", "Price");                       // prints "Price" (5 characters) then right-padding with ' ' until there's 9 characters.
    printf("Max Speed\n");                          // prints "Max speed" with a newline character.
    for (int i = 0, counter = 0; i < count; i++)
    {
        printf("%-7d|", ++counter, "");                                              // prints ANY number then right-padding with ' ' until there's 7 characters. If the digits are more or equal to 7 there won't be any right-padding characters inserted
        printf("%s%*s|", arr[i].Name, max_str_length + 8 - strlen(arr[i].Name), ""); // prints car name. prints ANY ' ' characters ( formula is : the differences of longest car name with current car name then add by 8 )
        printf("%-8d|", arr[i].Year, "");
        printf("$%-8d|", arr[i].Price, ""); // prints dollar sign character. prints ANY number then right-padding with ' ' until there's 8 characters
        printf("%d\n", arr[i].MaxSpeed);
    }
    // Did you expect printf formats to ever be readable?
    // Tough luck
    // The following string formats was referenced from Sample run
    // No#    |Name        |Year    |Price    |MaxSpeed
    // 1      |Toyota      |2000    |47000    |125
    // 2      |Ford        |1995    |34000    |150
    // ----------------------------------------
}

void printCarAfter2000(Car arr[], int count)
{
    printf("List of car after year 2000:\n");
    int max_str_length = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i].Year <= 2000)
        {
            continue;
        }
        int len = strlen(arr[i].Name);
        if (len > max_str_length)
        {
            max_str_length = len;
        }
    }
    printf("%-7s|", "No#");
    printf("%-8s%*s|", "Name", max_str_length, "");
    printf("%-8s|", "Year");
    printf("%-9s|", "Price");
    printf("Max Speed\n");
    for (int i = 0, counter = 0; i < count; i++)
    {
        if (arr[i].Year > 2000)
        {
            printf("%-7d|", ++counter, "");
            printf("%s%*s|", arr[i].Name, max_str_length + 8 - strlen(arr[i].Name), "");
            printf("%-8d|", arr[i].Year, "");
            printf("$%-8d|", arr[i].Price, "");
            printf("%d\n", arr[i].MaxSpeed);
        }
    }
    return;
}

Stats getStatistics(Car arr[], int count)
{
    Stats stats;
    int min = arr[0].Price, max = arr[0].Price, sum = 0, avg = 0;
    for (int i = 1; i < count; i++)
    {
        int _price = arr[i].Price;
        if (_price > max)
        {
            max = _price;
        }
        else if (_price < min)
        {
            min = _price;
        }
        sum += _price;
        avg = sum / count;
    }
    stats.MinPrice = min, stats.MaxPrice = max, stats.AvgPrice = avg;
    return stats;
}