#include <stdio.h>

int main(void)
{
	double nA = 0;


	printf("������ �Է��� �ּ���.: ");
	double P = scanf("%lf", &nA);

	if (((double)180 >= nA) && (nA >= (double)-180))    // 180�� ���� -180�������� ���
	{
		printf("%.4lf�� �Դϴ�.\n", nA);
	}
	else if (((double)180 < nA) && (nA <= (double)360))   // 180�� �ʰ� ���� 360�� ���ϱ��� ���
	{
		double nB = nA - (double)360;                  // 180���� �Ѿ�� ������ �Ǳ� ������ -360���� ���� -�� ������ش�
		printf("%.4lf�� �Դϴ�.\n", nB);
	}
	else if ((double)360 < nA)                        // 360�� �ʰ��� ���
	{
		int nC = (int)nA / 360;                       // 360���� �ʰ��� �Ǹ� 360�� ��� ������ Ƚ��
		double nD = nA - (nC * 360);                  // Ƚ���� ���� �������� ��� 
		double nE = nD - 360;                        // ���� nD�� 180���� �Ѿ ��� -�� ȯ��

		if ((0 <= nD) && (nD <= (double)180))        // nD�� 0 �̻� 180 ���� �϶��� ���
		{
			printf("%.4lf�� �Դϴ�.\n", nD);
		}
		else if (((180) < nD )&& (nD <= 360))       // nD�� 180�ʰ� 360 ������ ���� ���
		{
			printf("%.4lf�� �Դϴ�.\n", nE);       // �̶� nE�� �̿��Ͽ� ���
		}

	}
	else if (((double)-360<= nA) && (nA < (double)-180))    // -360�� �ʰ� -180�� ������ ���
	{
		double nB = nA + (double)360;                       // -180���� �Ѿ�� ����� �Ǳ� ������ ��ȣ ȯ��
		printf("%.4lf�� �Դϴ�.\n", nB);
	}
	else if ((double)-360 > nA)                            // -360�� �̸��� ���
	{
		int nC = (int)nA / 360;                           // -360���� �̸��� �Ǹ� 360�� ��� ������ Ƚ��
		double nD = nA - (nC * 360);                      // Ƚ���� ���� �������� ���
		double nE = nD + 360;                             // ���� nD�� -180���� �Ѿ ��� +�� ȯ��

		if ((-180 <= nD) && (nD <= (double)0))            // nD�� -180 �̻� 0������ ���� ���
		{
			 printf("%.4lf�� �Դϴ�.\n", nD);
		}
		else if ((-360 <= nD) && (nD < -180))             // nD�� -180 �̸� -360�̻��� ���� ���
		{
			printf("%.4lf�� �Դϴ�.\n", nE);
		}
	}
	return 0;
}