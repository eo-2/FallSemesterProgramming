#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double*  pi;						// ���� �Ҵ� ������ ������ ������
	int i = 0;
	double	sum = 0;
	int A;

	printf("�� ���� ������ ���ÿ�: ");				// ���� � ������ ���Ѵ�
	scanf("%d", &A);

	pi = (double *)calloc(A, sizeof(double));			// double�� ����
	if (pi == NULL)
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}
	printf("%d���� ���ڸ� �Է��Ͻÿ�.: ", A);
	for (i = 0; i < A; i++)
	{
		scanf("%lf", &pi[i]);						// �迭 ��ҿ� �Է�
		sum += pi[i];								// �迭 ����� �� ����
	}
	printf("%d�� ��: %.2lf\n", A, sum);				// �� ���
	free(pi);

	return 0;
}