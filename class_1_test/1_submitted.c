#include <stdio.h>
#include <string.h>

int main() 
{
	
	int find_m = 1;
	int i, p, n, m, sum = 0;
	char input_m[128];
			
	printf("0121001, Nguyen Van An\n");
	
	printf("Enter n: ");
	scanf("%d%*c", &n);
	for (i = 1; i <= (n / 2); i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("Sum(q) = %d\n", sum);
	
	printf("List k:");
	for (i = 1; i <= n; i++) 
	{		
		int digit = i % 10, tenth = i / 10;
		if (tenth == digit)
		{
			printf(" %d", i);
		}
	}
	
	// TODO : WHAT THE F
	while (find_m) 
	{
		int ok = 1;
		int temp = 0;
		printf("\nEnter m: ");
		gets(input_m);
		for (i = strlen(input_m)-1, p = 1; i >= 0; i--, p*=10) 
		{
			if (!(input_m[i] >= '0' && input_m[i] <= '9'))
			{
				ok = 0;
				if (i == 0) 
				{
					printf("Incorrect input!\n");
					break;
				}
				else 
				{
					printf("Trailing character!\n");
					break;	
				}			
			}
			temp += (input_m[i] - '0') * p;
		}
		if (ok) {
			if (temp > 0 && temp < n) 
			{
				find_m = 0;
				m = temp;
			}  
			else 
			{
				temp = 0;
				printf("Out of range!\n");
			}
		}
	}
	
	printf("List common divisor = ");
	for (i = 1; i < m; i++)
	{
		if (m % i == 0)
		{
			printf("%d, ", i);
		}
	}
	
	// plus then sub then plus then sub 
	// Im dumb at math fuck me.
	int T = 0, l, g;
	for (i = n, g = m, l = 0; i > 0; i--, l++)
	{	
		if (g > 0) 
		{
			g--;
		}
		T+= (i - g - l) * 0.1;
	}
	printf("T = %d", T);
	
	return 10;
}
