#include <stdio.h>

int main(void)
{


	int i, j;
	int row = 0;
	int a = 0;

	printf("���� a: ");
	int C = scanf("%d", &a);
	printf("���� row: ");
	int D = scanf("%d", &row);


	for (i = 0; i < row; i++)        // i�� 0���� row������ �����ϸ鼭 �ݺ�
	{
		for (j = 0; j <= a; j++)      // j�� 0���� a���� �����ϸ鼭 a�� �ݺ�
		{
			printf("*");
		}
		printf("\n");                 //a�� ����� �Ŀ� ���� �ٲ۴�.

	}
	return 0;
}