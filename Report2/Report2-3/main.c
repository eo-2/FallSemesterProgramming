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

	printf("µ¡¼À : %lf\n", SUM);
	printf("»¬¼À : %lf\n", SUB);
	printf("°ö¼À : %lf\n", MUL);
	printf("³ª´°¼À : %.4lf\n", DIV);
	printf("¸ò :%d, ³ª¸ÓÁö%d\n", (int)DIV, Res);


	system("pause..");
	return 0;


} 