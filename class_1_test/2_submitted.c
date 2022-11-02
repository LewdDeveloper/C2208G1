#include <stdio.h>

void fun1(int);
void fun2(int);

int main() 
{
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
		switch(n) 
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
	int digit = n % 10, tenth = n / 10;
	int tenthSpecial = 0;
	
	if (tenth > 0)
	{
		switch(tenth)
		{
			case 1:
				if (digit == 0) 
				{
					printf("Ten");
				}
				tenthSpecial = 1;
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
	
	if (tenthSpecial)
	{
		switch(digit) 
		{
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
		return;
	}

	switch(digit) 
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
