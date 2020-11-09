#include <stdio.h>
#include <string.h>

void swap(char* type, void* ap, void* bp);

int main(void)
{
	int Aage, Bage;
	double Aheight, Bheight;

	printf("ù ��° ����� ���̿� Ű �Է�: ");
	scanf("%d%lf", &Aage, &Aheight);

	printf("�� ��° ����� ���̿� Ű �Է�: ");
	scanf("%d%lf", &Bage, &Bheight);

	swap("int", &Aage, &Bage);						// �� ����� ���̸� �ٲٴ� �Լ� 
	swap("double", &Aheight, &Bheight);				// �� ����� Ű�� �ٲٴ� �Լ�

	printf("ù ��° ����� ���̿� Ű: %d, %.1lf\n", Aage, Aheight);
	printf("�� ��° ����� ���̿� Ű: %d, %.1lf\n", Bage, Bheight);


	return 0;
}

void swap(char* type, void* ap, void* bp)
{
	int temp;
	double dtemp;

	if (strcmp(type, "int") == 0)					// int �� double�� ���� �ϰ� strcmp �Լ��� �̿��Ͽ� �� ���� �ڸ��� �ٲ۴�.
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