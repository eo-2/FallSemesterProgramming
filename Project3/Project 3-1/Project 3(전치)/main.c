#include <stdio.h>


int main(void)
{
	int ANum[3][3];
	int Trn[3][3];
	int n = 0;
	int i, j;

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
		printf("Trn ���: \n");								//Trn��� ���
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				Trn[i][j] = ANum[j][i];
				printf("%2d  ", Trn[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}