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
	

	printf("a�� �� :%lf, b�� �� :%lf\n", a, b);
	printf("���� : %lf\n", sum);
	printf("���� : %lf\n", sub);
	printf("���� : %lf\n", mul);
	printf("������ : %.4f\n", division);
	printf("�� :%d, ������%d\n", (int)division, res);


	system("pause..");
	return 0;


}