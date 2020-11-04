#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;

	printf("직선: ax + by + c = 0 \n");								// 직선 입력 출력
	printf("a, b, c 입력: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lfx + %lfy + %lf\n", a, b, c);							// 직선 입력한 값 출력

	printf("하나의 점: (d, e)\n");									// 임의이 한 점 출력
	printf("d, e 입력: ");
	scanf("%lf %lf", &d, &e);
	printf("vector L = %lfi + %lfj\n",  c / a, - c / b);			// 벡터 L 출력

	double A = pow( c / a, 2);										// 벡터 L의 값을 위한 식
	double B = pow(- c / b, 2);
	double C = sqrt(A + B);	
	
	double D = c / (a * C);										// 벡터 UL을 위한 식
	double E = -c / (b * C);
   
	printf("ll L ll = %lf\n", C);								// 벡터 L의 값 출력
	printf("vector UL = %lfi + %lfj\n", D, E);					// 벡터 UL 출력
	
	double F = (e + c / b);
	
	printf("vector a = %lfi + %lfj\n", d, F);					// 벡터 a 출력
	
	double G = (D * d) + (F * E);								// 벡터 a2를 만들기 위한 식
	double H = d - (G * D);
	double I = F - (G * E);
	double J = pow(H, 2);
	double K = pow(I, 2);
	double L = sqrt(J + K);
	
	printf("vector a2 = %lfi + %lfj\n", H, I);					// 벡터 a2 출력
	printf("최소 거리 = %lf\n", L);								// 임의이 직선 과 임의이 한 점 사이의 최소 거리

	return 0;
}

