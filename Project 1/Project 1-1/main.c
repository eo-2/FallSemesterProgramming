#include <stdio.h>

int main(void)
{
	double nA = 0;


	printf("������ �Է��� �ּ���.: ");
	double P = scanf("%lf", &nA);

	if ((double)180 >= nA)
	{
		printf("%.4lf�� �Դϴ�.\n", nA);
	}
	else if (((double)180 < nA) && (nA <= (double)360))
	{
		double nB = nA - (double)360;
		printf("%.4lf�� �Դϴ�.\n", nB);
	}
	else if ((double)360 < nA)
	{
		int nC = (int)nA / 360;
		double nD = nA - (nC * 360);
		double nE = nD - 360;

		if ((0 <= nD) && (nD <= (double)180))
		{
			printf("%.4lf�� �Դϴ�.\n", nD);
		}
		else if ((180) < nD )&& (nD <= 360))
		{
			printf("%.4lf�� �Դϴ�.\n", nE);
		}

	}
	return 0;
}