#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Weight;
	int res;
	double Height;
	double BMI;
	


	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d%lf", &Weight, &Height);
	Height /= 100;
	BMI = Weight / (Height * Height);
	res = (BMI >= 20.0) && (BMI < 25.0);
	printf("%s", (res) ? "표준입니다." : "체중관리가 필요합니다.");

	
	

}