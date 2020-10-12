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

		printf("앞면 또는 뒷면:(1 또는 0)");

		scanf("%d", &num);

		if (num == b_rand())

			printf("맞았습니다.\n");

		else

			printf("틀렸습니다.\n");

		printf("계속하시겠습니까?(y or n):");

		scanf(" %c", &z);

	} while (z != 'n');


}
[출처] C언어 동전던지기 | 작성자 qpll1010