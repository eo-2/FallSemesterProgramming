#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Weight;
	int res;
	double Height;
	double BMI;
	


	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%d%lf", &Weight, &Height);
	Height /= 100;
	BMI = Weight / (Height * Height);
	res = (BMI >= 20.0) && (BMI < 25.0);
	printf("%s", (res) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	
	

}