#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)        // i�� 0���� 4���� 5�� �ݺ�
	{
		for (j = 0; j < 5; j++)   // j�� 0���� 4���� 5�� �ݺ�
		{
			if ((i == j) || (i + j == 4))   // i �� j�� ���ų� �Ǵ� i �� j�� ���� 4�̸� * ���
				printf("*");
			else
				printf(" ");   // �ƴϸ� ��� ����
		}
		printf("\n");  
	}
	return 0;
}