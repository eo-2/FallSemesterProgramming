#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	double a = 0;
	double b = 0;


	printf("enter the number a and b: ");
	double C = scanf("%lf%lf", &a, &b);

	double SUM = a + b;
	double SUB = a - b;
	double MUL = a * b;
	double DIV = a / b;
	int Res = (int)a % (int)b;

	printf("���� : %lf\n", SUM);
	printf("���� : %lf\n", SUB);
	printf("���� : %lf\n", MUL);
	printf("������ : %.4lf\n", DIV);
	printf("�� :%d, ������%d\n", (int)DIV, Res);


	system("pause..");
	return 0;


} 