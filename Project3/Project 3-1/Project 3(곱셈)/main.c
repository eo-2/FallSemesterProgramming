#include<stdio.h>
#include<Windows.h>

int main(void)
{
	int ANum[3][3];
	int BNum[3][3];
	int Mul[3][3];
	int n = 0;
	int i, j, k;

	printf("n x n ���(2 or 3): ");								// 2 �Ǵ� 3����� �����ϴ� ���� ���
	scanf("%d", &n);
	{
		printf("A ��� �Է��Ͻʽÿ�: \n");						// A��� �Է� ���		
		for (i = 0; i < n; i++)									// ������ �Է� ���� n�� �� ��ŭ �Է�
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &ANum[i][j]);
			}
		}
		printf("B ��� �Է��Ͻʽÿ�: \n");						// B��� �Է� ���	
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &BNum[i][j]);
			}
		}
		printf("\n");
		system("cls");
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
		printf("Mul ���: \n");								//Sum��� ���
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				Mul[i][j] = 0;
				for (k = 0; k < n; k++)
				{
					Mul[i][j] += ANum[i][k] * BNum[k][j];
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d ", Mul[i][j]);
			}
			printf("\n");
		}	
	}
	return 0;
}