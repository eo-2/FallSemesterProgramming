#include <stdio.h>
#include <Windows.h>

int print_Matrix(int* a);
int SumMatrix(int *a, int** pa, int** pb);
int SubMatrix(int* a, int** pa, int** pb);
int MulMatrix(int* a, int** pa, int** pb);
int InverseMatrix(int* a, int** pa);
int TrnMatrix(int* a, int** pa);

int main(void)
{
	int n;
	int* AMatrix[3][3];
	int* BMatrix[3][3];

	printf("n x n 행렬(2 or 3): ");
	scanf("%d", &n);

	printf("A 행렬을 입력하십시오: \n");
	AMatrix[3][3] = print_Matrix(n);
	printf("B 행렬을 입력하십시오: \n");
	BMatrix[3][3] = print_Matrix(n);
	if (n == 2)
	{
		SumMatrix(&n, AMatrix[3][3], BMatrix[3][3]);
		SubMatrix(&n, AMatrix[3][3], BMatrix[3][3]);
		MulMatrix(&n, AMatrix[3][3], BMatrix[3][3]);
		InverseMatrix(&n, AMatrix[3][3]);
		TrnMatrix(&n, AMatrix[3][3]);
	}
	else if (n == 3)
	{
		SumMatrix(&n, AMatrix[3][3], BMatrix[3][3]);
		SubMatrix(&n, AMatrix[3][3], BMatrix[3][3]);
		MulMatrix(&n, AMatrix[3][3], BMatrix[3][3]);
		TrnMatrix(&n, AMatrix[3][3]);
	}

	return 0;
}

int print_Matrix(int *a)
{
	int ANum[3][3];
	int i, j;

		for (i = 0; i < a; i++)									// 위에서 입력 받은 n의 값 만큼 입력
		{
			for (j = 0; j < a; j++)
			{
				scanf("%d", &ANum[i][j]);
			}
		}
		return 0;
}
int SumMatrix(int* a, int **pa, int **pb)
{
	int Sum[3][3];
	int i, j;

		printf("Sum 행렬: \n");								//Sum행렬 출력
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				Sum[i][j] = pa[i][j] + pb[i][j];
				printf("%2d  ", Sum[i][j]);
			}
			printf("\n");
		}
		return 0;
}
	
	
int SubMatrix(int* a, int** pa, int** pb)
{
	int Sub[3][3];
	int i, j;

		printf("Sub 행렬: \n");								//Sum행렬 출력
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				Sub[i][j] = pa[i][j] - pb[i][j];
				printf("%2d  ", Sub[i][j]);
			}
			printf("\n");
		}
		return 0;
}
	

int MulMatrix(int* a, int** pa, int** pb)
{
	int Mul[3][3];
	int i, j, k;

		printf("Mul 행렬: \n");								//Mul행렬 출력
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				Mul[i][j] = 0;
				for (k = 0; k < a; k++)
				{
					Mul[i][j] += pa[i][k] * pb[k][j];
				}
			}
		}
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				printf("%d ", Mul[i][j]);
			}
			printf("\n");
		}
		return 0;
}
	

int InverseMatrix(int* a, int** pa)
{

	double inverANum[2][2];
	int i, j;
	int x, y;
	double d;


	d = pa[0][0] * pa[1][1] - pa[0][1] * pa[1][0];                          // A 역행렬을 구하는 법
	if (d == 0)                                                                     // A 역행렬이 안될 경우
	{
		printf("역행렬이 존재하지 않음!\n");

	}
	else
	{
		printf("A역행렬\n");                                                       // A 역행렬 출력
		x = 1;
		for (i = 0; i < 2; i++)
		{
			y = 1;
			for (j = 0; j < 2; j++)
			{
				inverANum[i][j] = pa[y][x] / d;
				y--;
			}
			x--;
		}
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.3lf ", inverANum[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

int TrnMatrix(int* a, int** pa)
{
	int Trn[3][3];
	int i, j;

		printf("Trn 행렬: \n");								//Trn행렬 출력
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				Trn[i][j] = pa[j][i];
				printf("%2d  ", Trn[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	
