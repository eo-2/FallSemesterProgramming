#include <stdio.h>

int main(void)
{
	int nA = 0;


	printf("12���� �� �ϳ��� �Է��Ͻʽÿ�.: ");
	int B = scanf("%d", &nA);

	if (0 < nA && nA <= 12)
	{
		if (nA == 12 || nA == 1 || nA == 2)
		{
			printf("�ܿ��Դϴ�.\n");
		}
		else if (nA == 3 || nA == 4 || nA == 5)
		{
			printf("���Դϴ�.\n");
		}
		else if (nA == 6 || nA == 7 || nA == 8)
		{
			printf("�����Դϴ�.\n");
		}
		else if (nA == 9 || nA == 10 || nA == 11)
		{
			printf("�����Դϴ�.\n");
		}
	}
	else
	{
		printf("12���� �� �ϳ��� �Է��Ͻʽÿ�.\n");
	}
	return 0;
}