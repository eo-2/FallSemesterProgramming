#include <stdio.h>

int main(void)
{

	int nA = 0;


	printf("년도를 입력하십시오.: ");
	int P = scanf("%d", &nA);

	if (nA >= 100)                                                      // 100 이상은 4 한 개의 숫자로 판단이 어려워서 선택문 작성
	{
		if (((nA % 4 == 0) && (nA % 100 != 0)) || (nA % 400 == 0))      // nA가 4로 나누어떨어지고 100으로 나누어떨어지지 않거나 400으로 나누어 떨어지면 윤년
		{
			printf("%d년은 윤년입니다.\n", nA);
		}
		else                                                            // 그 외는 다 평년
		{
			printf("%d년은 평년입니다.\n", nA);
		}
	}
	else                                                     // 100 이하는 4 한 개의 숫자로 판단 가능
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