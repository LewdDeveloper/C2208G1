#include <stdio.h>

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
void printCarAfter2000(Car[], int);
Stats getStatistics(Car[], int);

int main()
{
    Car car[] = {
        {"BMW 1", 2004, 79400, 250},
        {"Volvo S60", 2001, 109720, 250},
        {"Peugeot 2008", 1999, 167550, 360},
        {"Peugeot 308", 2006, 10440, 250},
        {"Kia ur mom", 2000, 42000, -1}};
    Stats stats;
    // Car car[2];
    // getCarInputs(car, 2);
    printCarAfter2000(car, 2);
    stats = getStatistics(car, 2);
    printf("[Stats] Minimum: %d, Maximum: %d, Avg: %d\n", stats.MinPrice, stats.MaxPrice, stats.AvgPrice);
}

void scanName(Car *car_ptr)
{
    printf("Name: ");
    scanf("%s", car_ptr->Name);
    return;
}

void scanYear(Car *car_ptr)
{
    int year;
    do
    {
        printf("Year: ");
        scanf("%d", &year);
    } while (!(year >= 1980 && year <= 2019));
    car_ptr->Year = year;
    return;
}

void scanPrice(Car *car_ptr)
{
    int price;
    do
    {
        printf("Price: ");
        scanf("%d", &price);
    } while (!(price >= 30000 && price <= 400000));
    car_ptr->Price = price;
    return;
}

void scanMaxSpeed(Car *car_ptr)
{
    printf("Max Speed: ");
    scanf("%d", &car_ptr->MaxSpeed);
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

void printCarAfter2000(Car arr[], int count)
{
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
            printf("%-9d|", arr[i].Price, "");
            printf("%d\n", arr[i].MaxSpeed);
        }
    }
    // -> the magic 8 number is calculated from the spaces in 'Name' column
    // https://en.cppreference.com/w/c/io/fprintf
    // Did you expect printf formats to ever be readable?
    // Tough luck
    // Sample run
    // No#    |Name        |Year    |Price    |MaxSpeed
    // 1      |Toyota      |2000    |47000    |125
    // 2      |Ford        |1995    |34000    |150
    // ----------------------------------------
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