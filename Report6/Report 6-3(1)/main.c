#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input_nums(int* lotto_nums);			// �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums);			// �迭�� ����� ���� ����ϴ� �Լ�
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


	for (i = 0; i < 6; i++)							// �ζ� ��ȣ�� 6���̴ϱ� i�� 6�� �ݺ�
	{
		printf("��ȣ �Է�: ");
		scanf("%d", &lotto_nums[i]);              // lotto_num[i]�� ���� �Է�
		if (i > 0)
		{
			if (lotto_nums[i] <= 45)                 // �ζ� ��ȣ�� 45������ ���̱� ������ �� �̻��� ������ ������ ��ȣ�� �Է��϶�� ���
			{
				for (j = 0; j < i; j++)                     // �ߺ��� ���θ� �Ǵ� �ϴ� ��
				{
					if (lotto_nums[i] == lotto_nums[j])		// i��ŭ �ݺ��� ���Ѽ� �ߺ��Ǵ� ���� ������ ���� ��ȣ�� �ֽ��ϴ� ���
					{
						printf("���� ��ȣ�� �ֽ��ϴ�.\n");
						i--;
						break;
					}
				}
			}
			else
			{
				printf("45���� ��ȣ�� �Է��Ͻʽÿ�.\n");		// �Է��� 45 �ʰ��� �� �� 45���Ϸ� �Է��Ͻÿ� ���
				i--;
				continue;
			}
		}

	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("�ζ� ��ȣ: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);							// �Է��� �ζ� ��ȣ 6���� ���

	}
}

int b_rand(int* lotto_nums)
{
	int lotto_Nums[7];
	int i, j;
	int A = 0;
	int	B = 0;


	srand((unsigned int)time(NULL));                               // ������ �߻��� ��������� ����           
	
	for (i = 0; i < 7; i++)											// ���ʽ� ���ڱ��� �ؼ� 7�� �ݺ�
	{
		lotto_Nums[i] = rand() % 46;								// 45������ ���� ���ڸ� lotto_Nums[i]�� ����
		for (j = 0; j < i; j++)
		{
			if (lotto_Nums[i] == lotto_Nums[j])						// �������� ���� �� �߿� ���� ���� ����ϰ� �ٽ� ����
			{
				i--;
				break;
			}
		}
	}
	
	printf("\n�ζ� ��ȣ: ");										
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_Nums[i]);								// ����� ���ڸ� ���
	}
    printf("���ʽ� ��ȣ: %d", lotto_Nums[i]);						// �������� ����� ���ʽ� ���ڸ� ���

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (lotto_nums[j] == lotto_Nums[A])						//�Է��� ���ڿ� ��� ���� ���ڸ� ���ؼ� ������ B�� 1�� ���ϸ鼭 ����
			{
				B++;
			}
		}
		A++;														// �����ϸ鼭 A�� 1�� ���ϸ鼭 ����
	}

	if (B == 6)														// B�� ����� ���ڸ�ŭ �´� ���� ���
	{
		printf("\n1���Դϴ�.");
	}
	else if (B == 5)												
	{
		printf("\n2���Դϴ�.");
	}
	else if (B == 4)
	{
		printf("\n3���Դϴ�.");
	}
	else if (B == 3)
	{
		printf("\n4���Դϴ�.");
	}
	else if (B == 2)
	{
		printf("\n5���Դϴ�.");
	}	
	else if (B == 1)
	{
		printf("\n���Դϴ�.");
	}
	else if (B == 0)
	{
		printf("\n���Դϴ�.");
	}

	return lotto_Nums[7];
}