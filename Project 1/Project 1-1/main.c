#include <stdio.h>

int main(void)
{
	int nA = 0;


	printf("������ �Է��� �ּ���.: ");
	int P = scanf("%d", &nA);

	if (180 >= nA)
	{
		printf("%d�� �Դϴ�.", nA);
	}
	else if (180 < nA && nA <= 360)
	{
		int nB = nA - 360;
		printf("%d�� �Դϴ�.", nB);
	}
	else if (360 < nA)
	{
		int nC = nA % 360;

		if (nC >= 180)
		{
			printf("%d�� �Դϴ�.", nC);
		}
		else if (180 < nC < 360);
		{
			int nD = nC - 180;
			printf("%d�� �Դϴ�.", nD);
		}
	}
	return 0;
}