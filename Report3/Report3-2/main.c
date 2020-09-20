#include <stdio.h>
#include <stdlib.h>

#define SUM 1
#define SUB 2
#define MUL 3
#define DIV 4
#define NONE 5




int main(void)
{
	int a = 0;
	int b = 0;
	int nCase = NONE;
	char cCal;


	printf("사칙연산 입력(정수):\n");
	int nResf = scanf("%d%c%d", &a, &cCal, &b);
	{
		if (cCal == '+')
			nCase = SUM;
		else if (cCal == '-')
			nCase = SUB;
		else if (cCal == '*')
			nCase = MUL;
		else if (cCal == '/')
			nCase = DIV;
		else
			nCase = NONE;

		printf("nResf = %d", nResf);
		if (nResf >= 0)
		{
			switch (nCase)
			{
			 case SUM:
			 {
				 nResf = a + b;
				 break;
			 }
			 case SUB:
			 {
				 nResf = a - b;
				 break;
			 }
			 case MUL:
			 {
				 nResf = a * b;
				 break;
			 }
			 case DIV:
			 {
				 nResf = a / b;
				 break;
			 }
			 default:
			 case NONE:
			 {
				 printf("잘못된 식입니다.\n");
				 break;
			 }
			 printf("%d%c%d=%d\n", a, cCal, b, nResf);
			 }
		}
		else
		{
			printf("잘못된 식입니다.\n");
		}
	}
		
		return 0;
}
		

	