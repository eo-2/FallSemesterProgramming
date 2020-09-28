#include <stdio.h>

int main(void)
{


	int i, j;
	int row = 0;
	int a = 0;

	printf("정수 a: ");
	int C = scanf("%d", &a);
	printf("정수 row: ");
	int D = scanf("%d", &row);


	for (i = 0; i < row; i++)        // i가 0부터 row값까지 증가하면서 반복
	{
		for (j = 0; j <= a; j++)      // j가 0부터 a까지 증가하면서 a번 반복
		{
			printf("*");
		}
		printf("\n");                 //a번 출력한 후에 줄을 바꾼다.

	}
	return 0;
}