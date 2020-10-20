#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* pa, int* pb);
void line_up(int* maxp, int* minp);
int b_rand(int* Randnums);

int main(void)
{
	int RandNums[10];

	b_rand(RandNums);

	return 0;
}

int b_rand(int* Randnums)
{
	int i, j;
	int RandNums[10];
	srand((unsigned int)time(NULL)); 

	printf("RandomNums: ");

	for (i = 0; i < 10; i++)				// 랜덤 숫자를 10개를 만든다
	{
		RandNums[i] = rand() % 50;         // 만든 랜덤 숫자를 RandNums[i]에 저장한다.
		for (j = 0; j < i; j++)
		{
			if (RandNums[i] == RandNums[j])       // 랜덤 숫자를 만들었을 때 같은 숫자가 나오면 취소 하고 다시한다
			{
				i--;
				break;
			}
		}
		printf("%d ", RandNums[i]);				// 랜덤 숫자 10개를 출력
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			line_up(&RandNums[j], &RandNums[j + 1]);         // line_up 함수를 불러와서 숫자를 비교
		}
	}

	printf("\nRandomNums: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", RandNums[i]);							// 정리된 숫자를 출력
	}
	return RandNums[10];
}

void line_up(int* maxp, int* minp)
{
	if (*maxp < *minp) swap(maxp, minp);					// 숫자를 비교하면서 왼쪽에 있는 숫자가 오른쪽 있는 수보다 작으면 자리를 바꾼다.
}

void swap(int* pa, int* pb)									// 자리를 바꾸는 함수
{
	int temp;

	temp = *pa;												// *pa를 temp에 저장
	*pa = *pb;												// *pb를 *pa에 저장
	*pb = temp;												// temp를 *pb에 저장
}
