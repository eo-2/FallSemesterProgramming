#include <stdio.h>
#include <math.h>

double Distance(double x1, double y1, double x2, double y2);                    // Distance �Լ� ����

int main(void)
{
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;                          

	printf("x1 �� y1�� �Է��Ͻʽÿ�.: ");
	scanf_s("%lf%lf", &x1, &y1);

	printf("x2 �� y2�� �Է��Ͻʽÿ�.: ");
	scanf_s("%lf%lf", &x2, &y2);

	printf("(%lf, %lf)�� (%lf, %lf) ������ �Ÿ�: %lf\n", x1, y1, x2, y2, Distance(x1, y1, x2, y2));  // Distance �Լ� �� ȣ�� �ϸ鼭 ���
	return 0;
}             // main �Լ��� ��




double Distance(double x1, double y1, double x2, double y2)
{	
	double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));                // �׷������� �� �������� �Ÿ��� ���ϴ� ������ �̿��� ���� ����
	return distance;                                                                      // distnace ���� ��ȯ��
}           // Distance �Լ��� ��



