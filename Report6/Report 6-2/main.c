	#include <stdio.h>

void swap(double *pa, double *pb);       // �� �Ǽ��� �ٲٴ� �Լ�
 void line_up(double* maxp, double* midp, double* minp);        // �Լ� ����

int main(void)
{
	double max, mid, min;


	printf("�Ǽ��� 3�� �Է�: ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);                     // �� ������ ���� �����ϴ� �Լ� ȣ��
	printf("���ĵ� �� ���: %.1lf, %.1lf. %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)                //�ڸ� �ٲٴ� �Լ�
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp) swap(maxp, midp);			// maxp���� midp���� ������ �ΰ��� �ڸ��� �ٲ۴�.
	if (*maxp < *minp) swap(maxp, minp);			// maxp���� minp���� ������ �ΰ��� �ڸ��� �ٲ۴�.            
	if (*midp < *minp) swap(midp, minp);			//midp���� minp���� ������ �ΰ��� �ڸ��� �ٲ۴�.
}

