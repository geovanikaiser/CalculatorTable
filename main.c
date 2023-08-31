#include <stdio.h>
#include <windows.h>

int main()
{
	system("color 74");
	int n1, n2, code, result;
	
	printf("\n---------- WELCOME ----------");
	
	printf("\n\nEnter the first number(integer format): ");
	scanf("%i", &n1);
	printf("\nEnter the second number(integer format): ");
	scanf("%i", &n2);
	
	printf("\n\nArithmetic operations:");
	printf("\n1 - Addition");
	printf("\n2 - Subtraction");
	printf("\n3 - Multiplication");
	printf("\n4 - Division");
	
	printf("\n\nEnter the number of the desired arithmetic operation: ");
	scanf("%i", &code);
	
	if(code > 4)
	{
		printf("\nPlease enter a valid value.");
	}
	
	switch(code)
	{
		case 1:
			result = n1 + n2;
			printf("\nThe result of the operation is: %i", result);
			break;
		case 2:
			result = n1 - n2;
			printf("\nThe result of the operation is: %i", result);
			break;
		case 3:
			result = n1 * n2;
			printf("\nThe result of the operation is: %i", result);
			break;
		case 4:
			if(n1==0 || n2 == 0)
			{
				printf("\nCannot divide by 0");
			}
			else
			{
			result = n1 / n2;
			printf("The result of the operation is %i", result);
		    }
			break;
	}	
}