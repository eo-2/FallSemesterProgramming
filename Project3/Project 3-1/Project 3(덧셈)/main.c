#include<stdio.h>

int main(void)
{
	int ANum[3][3];
	int BNum[3][3];
	int Sum[3][3];
	int n = 0;
	int i, j;

	printf("n x n ���(2 or 3): ");								// 2 �Ǵ� 3����� �����ϴ� ���� ���
	scanf("%d", &n);
	{
		printf("A ��� �Է��Ͻʽÿ�: ");						// A��� �Է� ���		
		for (i = 0; i < n; i++)									// ������ �Է� ���� n�� �� ��ŭ �Է�
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &ANum[i][j]);
			}
		}
		printf("B ��� �Է��Ͻʽÿ�: ");						// B��� �Է� ���	
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &BNum[i][j]);
			}
		}
		printf("\n");
		printf("A ���: \n");								// A��� ���
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d ", ANum[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("B ���: \n");							// B��� ���
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d ", BNum[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("Sum ���: \n");								//Sum��� ���
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				Sum[i][j] = ANum[i][j] + BNum[i][j];
				printf("%2d  ", Sum[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}