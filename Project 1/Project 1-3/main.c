#include <stdio.h>

int main(void)
{

	int nA = 0;


	printf("�⵵�� �Է��Ͻʽÿ�.: ");
	int P = scanf("%d", &nA);

	if (nA >= 100)
	{
		if (((nA % 4 == 0) && (nA % 100 != 0)) || (nA % 400 == 0))
		{
			printf("%d���� �����Դϴ�.\n", nA);
		}
		else
		{
			printf("%d���� ����Դϴ�.\n", nA);
		}
	}
	else
	{
		if (nA % 4 == 0)
		{
			printf("%d���� �����Դϴ�.\n", nA);
		}
		else
		{
			printf("%d���� ����Դϴ�.\n", nA);
		}
	}
	return 0;
}