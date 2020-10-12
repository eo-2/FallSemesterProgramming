#include <stdio.h>
#include <math.h>

double Distance(double x1, double y1, double x2, double y2);                    // Distance 함수 선언

int main(void)
{
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;                          

	printf("x1 과 y1을 입력하십시오.: ");
	scanf_s("%lf%lf", &x1, &y1);

	printf("x2 과 y2를 입력하십시오.: ");
	scanf_s("%lf%lf", &x2, &y2);

	printf("(%lf, %lf)과 (%lf, %lf) 사이의 거리: %lf\n", x1, y1, x2, y2, Distance(x1, y1, x2, y2));  // Distance 함수 를 호출 하면서 출력
	return 0;
}             // main 함수의 끝




double Distance(double x1, double y1, double x2, double y2)
{	
	double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));                // 그래프에서 두 점사이의 거리를 구하는 공식을 이용한 식을 만듬
	return distance;                                                                      // distnace 값을 반환함
}           // Distance 함수의 끝



