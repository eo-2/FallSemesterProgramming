#include <stdio.h>

int main(void)
{

	int nA = 0;


	printf("년도를 입력하십시오.: ");
	int P = scanf("%d", &nA);

	if (nA >= 100)
	{
		if (((nA % 4 == 0) && (nA % 100 != 0)) || (nA % 400 == 0))
		{
			printf("%d년은 윤년입니다.\n", nA);
		}
		else
		{
			printf("%d년은 평년입니다.\n", nA);
		}
	}
	else
	{
		if (nA % 4 == 0)
		{
			printf("%d년은 윤년입니다.\n", nA);
		}
		else
		{
			printf("%d년은 평년입니다.\n", nA);
		}
	}
	return 0;
}