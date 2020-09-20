#include <stdio.h>

int main(void)
{

	int nA = 0;
	int nB = 0;

	printf("enter the number:\n");
	int nD = scanf("%d%d", &nA, &nB);

	int nC = nB % nA;
	

	if (nA >= 0 && nB >= 0)
	{
		if (nA > 0 && nB > 0)
		{
			if (nB > nA)
			{
				if (nC == 0)
				{
					printf("The nA is an abbrevior of nBs.\n");
				}
				else
				{
					printf("The nA isn't an abbrevior of nBs.\n");
				}
			}
			else if (nA > nB)
			{
				printf("The nA isn't an anbbrevior of nBs.\n");
			}
			else if (nA == nB)
			{
				printf("The nA and nB is same number\n");
			}
		}
		else if (nA > 0 && nB == 0)
		{
			printf("The nA isn't an anbbrevior of nBs.Because nB is 0.\n");
		}
		else if (nB > 0 && nA == 0)
		{
			printf("The nA isn't an anbbrevior of nBs. Because nA is 0.\n");
		}
		else if (nA == 0 && nB == 0)
		{
			printf("The nA and nB is same number 0.\n");
		}
	}

	return 0;
}