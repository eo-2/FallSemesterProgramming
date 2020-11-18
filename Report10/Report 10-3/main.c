#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double*  pi;						// 동적 할당 영역을 연결할 포인터
	int i = 0;
	double	sum = 0;
	int A;

	printf("몇 개를 받을지 고르시오: ");				// 직접 몇개 받을지 정한다
	scanf("%d", &A);

	pi = (double *)calloc(A, sizeof(double));			// double형 변수
	if (pi == NULL)
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}
	printf("%d개의 숫자를 입력하시오.: ", A);
	for (i = 0; i < A; i++)
	{
		scanf("%lf", &pi[i]);						// 배열 요소에 입력
		sum += pi[i];								// 배열 요소의 값 누적
	}
	printf("%d의 합: %.2lf\n", A, sum);				// 합 출력
	free(pi);

	return 0;
}