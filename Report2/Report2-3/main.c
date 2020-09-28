#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	double a;
	double b;
	double sum, sub, mul;
	double division;
	int res;

	a = 7.0000;
	b = 3.0000;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	division = a / b;
	res = (int)a % (int)b;
	

	printf("aÀÇ °ª :%lf, bÀÇ °ª :%lf\n", a, b);
	printf("µ¡¼À : %lf\n", sum);
	printf("»¬¼À : %lf\n", sub);
	printf("°ö¼À : %lf\n", mul);
	printf("³ª´°¼À : %.4f\n", division);
	printf("¸ò :%d, ³ª¸ÓÁö%d\n", (int)division, res);


	system("pause..");
	return 0;


}