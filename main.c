#include <stdio.h>
#include "calculator.h"

int main(void)
{
	struct complex_number com_num1, com_num2, result;
	int operation;
	
	while(1)
	{
	start:	printf("1)Add\n2)Sub\n3)Div\n4)Mul\n5)Quit\nEnter the operation and numbers\n>");
		if (scanf("%d", &operation) == 0)
		{
			printf("Error\n");
			goto start;
		}
		scanf("%f%f%f%f", &com_num1.real_number, &com_num1.imaginary_number, &com_num2.real_number, &com_num2.imaginary_number);
		switch (operation)
		{
			case 1:
			{
				complex_add(&com_num1, &com_num2, &result);
				break;
			}
			case 2:
			{
				complex_sub(&com_num1, &com_num2, &result);
				break;
			}
			case 3:
			{
				complex_div(&com_num1, &com_num2, &result);
				break;
			}
			case 4:
			{
				complex_mul(&com_num1, &com_num2, &result);
				break;
			}
			default:
			{
				printf("Error\n");
				goto start;
			}
		}
		printf("result = %.2f %.2f\n", result.real_number, result.imaginary_number);
		sleep(1000000000);
	}
	return 0;
}




