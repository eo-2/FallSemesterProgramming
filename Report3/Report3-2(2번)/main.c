#include <stdio.h>

int main(void)
{
	int a = 0;  
	int b = 0; 
	int nRes = 0;
	char cCal;

	printf("��Ģ���� �Է�(����):\n");
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
		printf("����� �߸��Ǿ����ϴ�.");
		break;
	}
	}
	printf("%d%c%d=%d\n", a, cCal, b, nRes);
		return 0;
}