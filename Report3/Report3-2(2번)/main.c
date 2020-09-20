#include <stdio.h>

int main(void)
{
	int a = 0;  
	int b = 0; 
	int nRes = 0;
	char cCal;

	printf("사칙연산 입력(정수):\n");
	scanf("%d%c%d", &a, &cCal, &b);

	switch (cCal)
	{
	case '+': 
	{
		nRes = a + b;
		break;
	}
	case '-': 
	{
		nRes = a - b;
		break;
	}
	case '*': 
	{
		nRes = a * b;
		break;
	}
	case '/': 
	{
		nRes = a / b;
		break;
	}
	default:
	{
		printf("계산이 잘못되었습니다.");
		break;
	}
	}
	printf("%d%c%d=%d\n", a, cCal, b, nRes);
		return 0;
}