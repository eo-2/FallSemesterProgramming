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

	for (i = 0; i < 10; i++)				// ���� ���ڸ� 10���� �����
	{
		RandNums[i] = rand() % 50;         // ���� ���� ���ڸ� RandNums[i]�� �����Ѵ�.
		for (j = 0; j < i; j++)
		{
			if (RandNums[i] == RandNums[j])       // ���� ���ڸ� ������� �� ���� ���ڰ� ������ ��� �ϰ� �ٽ��Ѵ�
			{
				i--;
				break;
			}
		}
		printf("%d ", RandNums[i]);				// ���� ���� 10���� ���
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			line_up(&RandNums[j], &RandNums[j + 1]);         // line_up �Լ��� �ҷ��ͼ� ���ڸ� ��
		}
	}

	printf("\nRandomNums: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", RandNums[i]);							// ������ ���ڸ� ���
	}
	return RandNums[10];
}

void line_up(int* maxp, int* minp)
{
	if (*maxp < *minp) swap(maxp, minp);					// ���ڸ� ���ϸ鼭 ���ʿ� �ִ� ���ڰ� ������ �ִ� ������ ������ �ڸ��� �ٲ۴�.
}

void swap(int* pa, int* pb)									// �ڸ��� �ٲٴ� �Լ�
{
	int temp;

	temp = *pa;												// *pa�� temp�� ����
	*pa = *pb;												// *pb�� *pa�� ����
	*pb = temp;												// temp�� *pb�� ����
}
