#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input_nums(int* lotto_nums);			// 배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto_nums);			// 배열에 저장된 값을 출력하는 함수
int b_rand(int* lotto_nums);

int main(void)
{
	int lotto_nums[7];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	b_rand(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j;


	for (i = 0; i < 6; i++)							// 로또 번호가 6개이니깐 i를 6번 반복
	{
		printf("번호 입력: ");
		scanf("%d", &lotto_nums[i]);              // lotto_num[i]를 직접 입력
		if (i > 0)
		{
			if (lotto_nums[i] <= 45)                 // 로또 번호가 45이하의 수이기 때문에 그 이상을 넣으면 이하의 번호를 입력하라고 출력
			{
				for (j = 0; j < i; j++)                     // 중복의 여부를 판단 하는 식
				{
					if (lotto_nums[i] == lotto_nums[j])		// i만큼 반복을 시켜서 중복되는 값이 있으면 같으 번호가 있습니다 출력
					{
						printf("같은 번호가 있습니다.\n");
						i--;
						break;
					}
				}
			}
			else
			{
				printf("45이하 번호를 입력하십시오.\n");		// 입력을 45 초과로 할 때 45이하로 입력하시오 출력
				i--;
				continue;
			}
		}

	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("로또 번호: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);

	}
}

int b_rand(int* lotto_nums)
{
	int lotto_Nums[7];
	int i, j;
	int A = 0;
	int	B = 0;


	srand((unsigned int)time(NULL));                               // 난수를 발생을 양수형으로 선언           
	
	for (i = 0; i < 7; i++)
	{
		lotto_Nums[i] = rand() % 46;
		for (j = 0; j < i; j++)
		{
			if (lotto_Nums[i] == lotto_Nums[j])
			{
				i--;
				break;
			}
		}
	}
	
	printf("\n로또 번호: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_Nums[i]);
	}
    printf("보너스 번호: %d", lotto_Nums[i]);

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (lotto_nums[j] == lotto_Nums[A])
			{
				B++;
			}
		}
		A++;
	}

	if (B == 6)
	{
		printf("\n1등입니다.");
	}
	else if (B == 5)
	{
		printf("\n2등입니다.");
	}
	else if (B == 4)
	{
		printf("\n3등입니다.");
	}
	else if (B == 3)
	{
		printf("\n4등입니다.");
	}
	else if (B == 2)
	{
		printf("\n5등입니다.");
	}	
	else if (B == 1)
	{
		printf("\n꽝입니다.");
	}
	else if (B == 0)
	{
		printf("\n꽝입니다.");
	}

	return lotto_Nums[7];
}