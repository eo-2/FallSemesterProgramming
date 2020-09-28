#include <stdio.h>

int main(void)
{
	int nA;
	int i, j;
	int nB;
	int nC = 0;

	printf("2 이상의 정수를 입력하시오:");
	int D = scanf("%d", &nA);

	if (nA > 2)
	{
		for (i = 2; i <= nA; i++)
		{
			nB = 1;
			for (j = 2; j < i; j++)
			{
				if ((i % j) == 0)
				{
					nB = 0;
					break;
				}
			}
			if (nB == 1)
			{
				printf("%5d", i);
				nC++;
				if ((nC % 5) == 0)
					printf("\n");
			}
		}
	}
	else
	{
		printf("2이상의 수를 입력하시오.");
	}
	return 0;
}