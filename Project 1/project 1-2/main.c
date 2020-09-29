#include <stdio.h>

int main(void)
{
	int nA = 0;


	printf("12개월 중 하나를 입력하십시오.: ");
	int B = scanf("%d", &nA);

	if (0 < nA && nA <= 12)
	{
		if (nA == 12 || nA == 1 || nA == 2)
		{
			printf("겨울입니다.\n");
		}
		else if (nA == 3 || nA == 4 || nA == 5)
		{
			printf("봄입니다.\n");
		}
		else if (nA == 6 || nA == 7 || nA == 8)
		{
			printf("여름입니다.\n");
		}
		else if (nA == 9 || nA == 10 || nA == 11)
		{
			printf("가을입니다.\n");
		}
	}
	else
	{
		printf("12개월 중 하나를 입력하십시오.\n");
	}
	return 0;
}