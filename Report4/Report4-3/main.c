#include <stdio.h>

int main(void)
{
	int i, j, n;
	int a = 0;
	int row = 0;



	printf("Á¤¼ö a¿Í row: ");
	int B = scanf("%d%d", &a, &row);
	

	int nB = a / row;
	int nC = a % row;


	if (a > row)
	{
		for (i = 0; i < (nB - 1); i++)
		{
			for (j = 0; j < nB; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (n = 0; n < (nB + nC); n++)
		{
		   printf("*");
		}
	}
	else if (a == row)
	{
		for (i = 0; i < a; i++)
		{
				printf("*\n");
		}
	}
	else
	{
		for (i = 0; i < a; i++)
		{
			printf("*");
		}
	}

	return 0;
}
