#include <stdio.h>

int main(void)
{
	int nA = 0;


	printf("각도를 입력해 주세요.: ");
	int P = scanf("%d", &nA);

	if (180 >= nA)
	{
		printf("%d도 입니다.", nA);
	}
	else if (180 < nA && nA <= 360)
	{
		int nB = nA - 360;
		printf("%d도 입니다.", nB);
	}
	else if (360 < nA)
	{
		int nC = nA % 360;

		if (nC >= 180)
		{
			printf("%d도 입니다.", nC);
		}
		else if (180 < nC < 360);
		{
			int nD = nC - 180;
			printf("%d도 입니다.", nD);
		}
	}
	return 0;
}