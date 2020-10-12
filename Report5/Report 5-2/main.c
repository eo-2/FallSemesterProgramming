#include <stdio.h>

int res_func(int n);


int main(void)
{
	int n = 0;

	printf("Enter the number n: ");                  // n의 숫자를 입력하라는 것을 출력
	int D = scanf("%d", &n);                         // n의 숫자를 입력 받는다.
	printf("The sum from one to %d: %d\n", n, res_func(n));        // 1부터 n까지의 숫자를 더 한 것은 출력
	return 0;
}

int res_func(int n)
{

	if (n == 1)                                 
	{
		return 1;                                 // n이 만약에 1이면 1을 반환하고 호출
	}
	
	return n + res_func(n - 1);                  //	n + (n -1) 을 호출하고 반환하면서 숫자를 더한다.

}