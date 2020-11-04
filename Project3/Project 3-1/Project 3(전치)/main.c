#include <stdio.h>


int main(void)
{
	int ANum[3][3];
	int Trn[3][3];
	int n = 0;
	int i, j;

	printf("n x n 행렬(2 or 3): ");								// 2 또는 3행렬을 선택하는 것을 출력
	scanf("%d", &n);
	{
		printf("A 행렬 입력하십시오: \n");						// A행렬 입력 출력		
		for (i = 0; i < n; i++)									// 위에서 입력 받은 n의 값 만큼 입력
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &ANum[i][j]);
			}
		}	
		printf("Trn 행렬: \n");								//Trn행렬 출력
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