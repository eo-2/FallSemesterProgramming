#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int i;
	int SUM = 0;

	printf("���� a�� b�� �Է��Ͻÿ�.\n");
	printf("a: ");
	int C = scanf("%d", &a);
	printf("b: ");
	int D = scanf("%d", &b);



	for (i = a; i <= b; i++)  // i�� a���� b���� �����ϸ鼭 b�� �ݺ�
	{

		SUM += i;           // i ���� SUM�� ����
		if(i == b) break;   // i ���� b���̶� �������� �� ���� ������ ���ÿ� �ݺ����� ������.

	}
	printf("���� ��: %d\n", SUM);
	return 0;
}
