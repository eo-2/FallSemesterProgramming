#include<stdio.h>

int main(void)
{
	int ANum[3][3];
	int BNum[3][3];
	int Sum[3][3];
	int n = 0;
	int i, j;

	printf("n x n 행렬(2 or 3): ");								// 2 또는 3행렬을 선택하는 것을 출력
	scanf("%d", &n);
	{
		printf("A 행렬 입력하십시오: ");						// A행렬 입력 출력		
		for (i = 0; i < n; i++)									// 위에서 입력 받은 n의 값 만큼 입력
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &ANum[i][j]);
			}
		}
		printf("B 행렬 입력하십시오: ");						// B행렬 입력 출력	
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &BNum[i][j]);
			}
		}
		printf("\n");
		printf("A 행렬: \n");								// A행렬 출력
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d ", ANum[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("B 행렬: \n");							// B행렬 출력
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d ", BNum[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("Sum 행렬: \n");								//Sum행렬 출력
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