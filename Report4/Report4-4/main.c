#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int i;
	int SUM = 0;

	printf("정수 a와 b를 입력하시오.\n");
	printf("a: ");
	int C = scanf("%d", &a);
	printf("b: ");
	int D = scanf("%d", &b);



	for (i = a; i <= b; i++)  // i는 a부터 b까지 증가하면서 b번 반복
	{

		SUM += i;           // i 값을 SUM에 누적
		if(i == b) break;   // i 값이 b값이랑 같아지면 그 값을 누적과 동시에 반복분을 끝낸다.

	}
	printf("더한 값: %d\n", SUM);
	return 0;
}
