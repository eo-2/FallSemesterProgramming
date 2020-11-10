#include <stdio.h>
#include <string.h>

void swap(char* type, void* ap, void* bp);

int main(void)
{
	int Aage, Bage;
	double Aheight, Bheight;

	printf("첫 번째 사람의 나이와 키 입력: ");
	scanf("%d%lf", &Aage, &Aheight);

	printf("두 번째 사람의 나이와 키 입력: ");
	scanf("%d%lf", &Bage, &Bheight);

	swap("int", &Aage, &Bage);						// 두 사람의 나이를 바꾸는 함수 
	swap("double", &Aheight, &Bheight);				// 두 사람의 키를 바꾸는 함수

	printf("첫 번째 사람의 나이와 키: %d, %.1lf\n", Aage, Aheight);
	printf("두 번째 사람의 나이와 키: %d, %.1lf\n", Bage, Bheight);


	return 0;
}

void swap(char* type, void* ap, void* bp)
{
	int temp;
	double dtemp;

	if (strcmp(type, "int") == 0)					// int 와 double을 구분 하고 strcmp 함수를 이용하여 두 개의 자리를 바꾼다.
	{
		temp = *(int*)ap;
		*(int*)ap = *(int*)bp;
		*(int*)bp = temp;
	}
	if (strcmp(type, "double") == 0)
	{
		dtemp = *(double*)ap;
		*(double*)ap = *(double*)bp;
		*(double*)bp = dtemp;
	}
}