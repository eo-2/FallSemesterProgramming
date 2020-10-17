
#include <stdio.h>

void input_nums(int* lotto_nums);			// �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums);			// �迭�� ����� ���� ����ϴ� �Լ�

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	
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
		printf("%d ", lotto_nums[i]);

	}
}