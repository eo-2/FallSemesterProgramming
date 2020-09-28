#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)        // i는 0부터 4까지 5번 반복
	{
		for (j = 0; j < 5; j++)   // j는 0부터 4까지 5번 반복
		{
			if ((i == j) || (i + j == 4))   // i 와 j가 같거나 또는 i 와 j의 합이 4이면 * 출력
				printf("*");
			else
				printf(" ");   // 아니면 출력 안함
		}
		printf("\n");  
	}
	return 0;
}