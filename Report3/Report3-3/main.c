#include <stdio.h>

int main(void)
{

	int nA = 0;
	int nB = 0;

	printf("enter the number:\n");
	scanf("%d%d", &nA, &nB);

	int nC = nA % 2;
	int nD = nB % 2;

	if (nA >= 0 && nB >= 0)
	{
		if (nA > 0 && nB > 0)
		{
			if (nC == 0)
			{
				if (nD == 0)
				{
					printf("nA,nB is even number\n");
				}
				else
				{
					printf("nA is even number, nB is odd number\n");
				}
			}
			else
			{
				if (nD == 0)
				{
					printf("nA is odd number, nB is even number\n");
				}
				else
				{
					printf("The nA and nB is odd number\n");
				}
			}
		}
		else if (nA == 0 && nB > 0)
		{
			if (nD == 0)
			{
				printf("The nA is 0, The nB is even number\n");
			}
			else
			{
				printf("The nA is 0, The nB is odd number\n");
			}
		}
		else if (nA > 0 && nB == 0)
		{
			if (nC == 0)
			{
				printf("The nA is even number, The nB is 0\n");
			}
			else
			{
				printf("The nA is odd number, The nB is 0\n");
			}
		}
		else
		{
			printf("The nA,nB is  0\n");
		}

	}
		return 0;

	
}