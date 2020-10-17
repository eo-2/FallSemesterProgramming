#include <stdio.h>

void swap(double *pa, double *pb);          //두 실수를 바꾸는 함수
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
	double max, mid, min;


	printf("실수값 3개 입력: ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력: %.1lf, %.1lf. %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = tmep;
}

void line_up(double *maxp, double *midp, double *minp);
{
	double *maxp, *midp, *minp

	max = (max - mid) > 0;
	max = (max - min) > 0;
	mid = (mid - max) < 0;
	mid = (mid - min) > 0;
	min = (min - max) > 0;
	min = (min - mid) > 0;
}