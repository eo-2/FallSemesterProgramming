#include <stdio.h>


int b_rand()

{

	srand((unsigned)time(NULL));

	return rand() % 2;

}

int main(void)

{

	int num;

	char z;


	do {

		printf("�ո� �Ǵ� �޸�:(1 �Ǵ� 0)");

		scanf("%d", &num);

		if (num == b_rand())

			printf("�¾ҽ��ϴ�.\n");

		else

			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�?(y or n):");

		scanf(" %c", &z);

	} while (z != 'n');


}
[��ó] C��� ���������� | �ۼ��� qpll1010