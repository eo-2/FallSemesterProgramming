#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* pa, int* pb);
void line_up(int* maxp, int* minp);

int main(void)
{
	int i, j;
	int RandNums[10];
	srand((unsigned int)time(NULL));
	
	printf("RandomNums: ");

	for (i = 0; i < 10; i++)
	{
		RandNums[i] = rand() % 50;
		for (j = 0; j < i; j++)
		{
			if (RandNums[i] == RandNums[j])
			{
				i--;
				break;
			}
		}
		printf("%d ", RandNums[i]);
	} 

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			line_up(&RandNums[j], &RandNums[j + 1]);
		}
	}

	printf("\nRandomNums: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", RandNums[i]);
	}
	return 0;
}

void swap(int *pa, int *pb)               
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(int* maxp, int* minp)
{
	if (*maxp < *minp) swap(maxp, minp);			
}
