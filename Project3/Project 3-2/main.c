#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;

	printf("����: ax + by + c = 0 \n");								// ���� �Է� ���
	printf("a, b, c �Է�: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lfx + %lfy + %lf\n", a, b, c);							// ���� �Է��� �� ���

	printf("�ϳ��� ��: (d, e)\n");									// ������ �� �� ���
	printf("d, e �Է�: ");
	scanf("%lf %lf", &d, &e);
	printf("vector L = %lfi + %lfj\n",  c / a, - c / b);			// ���� L ���

	double A = pow( c / a, 2);										// ���� L�� ���� ���� ��
	double B = pow(- c / b, 2);
	double C = sqrt(A + B);	
	
	double D = c / (a * C);										// ���� UL�� ���� ��
	double E = -c / (b * C);
   
	printf("ll L ll = %lf\n", C);								// ���� L�� �� ���
	printf("vector UL = %lfi + %lfj\n", D, E);					// ���� UL ���
	
	double F = (e + c / b);
	
	printf("vector a = %lfi + %lfj\n", d, F);					// ���� a ���
	
	double G = (D * d) + (F * E);								// ���� a2�� ����� ���� ��
	double H = d - (G * D);
	double I = F - (G * E);
	double J = pow(H, 2);
	double K = pow(I, 2);
	double L = sqrt(J + K);
	
	printf("vector a2 = %lfi + %lfj\n", H, I);					// ���� a2 ���
	printf("�ּ� �Ÿ� = %lf\n", L);								// ������ ���� �� ������ �� �� ������ �ּ� �Ÿ�

	return 0;
}

