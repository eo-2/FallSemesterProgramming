#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void)
{

	int n;
	char b;

	while (1)
	{
		printf("�ո�(1) �Ǵ� �޸�(0)�� �Է��Ͻʽÿ�: ");               // �ո� �Ǵ� �޸��� �Է��ϴ� ���� ���
		scanf("%d", &n);
		{
			if (n == 1 || n == 0)                                     // n�� 1 �Ǵ� 0�� �Է��ϸ� �Ѿ��.
			{
				if (n == b_rand())                                    //n�� b_rand()���� ������ �Ѿ��.
				{
					if (b_rand() == 1)                                //b_rand()���� 1�̸� �ո��̰� �¾ҽ��ϴ�. ���
					{ 
						printf("�ո�, �¾ҽ��ϴ�.\n");
					}
					else if (b_rand() == 0)                           //b_rand()���� 0�̸� �޸��̰� �¾ҽ��ϴ�. ���
					{
						printf("�޸�, �¾ҽ��ϴ�.\n");
					}
				}
				else
				{
					printf("Ʋ�Ƚ��ϴ�.\n");                        // n�� b_rand()���� �ٸ��� Ʋ�Ƚ��ϴ�. ���
				}
			}
			else
			{
				printf("0�� 1�� �Է��Ͻʽÿ�.\n");                  //n�� �Ǽ��� 0�Ǵ� 1�� ������ �ʾ��� �� 0�� 1�� �Է��϶�� ���
				continue;                                           // �ؿ� �ִ� �Լ��� �ǳʶٰ� �ݺ� ����
			}
		}
		answer:
		printf("����Ͻðڽ��ϱ�?(y or n): ");                      // ����Ͻðڽ��ϱ�? ���
		getchar();                                                  // ���ڿ� �Լ� �ʱ�ȭ
		scanf("%c", &b);                                            // ��ǻ�Ϳ��� ���ڸ� �޴´�.
		{
				if (b == 'n')
				{
					break;                                          // b�� n�̸� �Լ��� ������.
				}
				else if (b == 'y')
				{
					continue;                                       // b�� y�� �ؿ� �Լ��� �ǳʶٰ� �ݺ� ����
				}
				else
				{
					printf("n �Ǵ� y�� �Է��Ͻʽÿ�.\n");          // n �Ǵ� y�� �Է����� ���� ��� n�Ǵ� y�� �Է��Ͻÿ� ��� �� answer��ġ�� ���� �ٽ� ����
					goto answer;
				}
		}	
	}
	return 0;
}

int b_rand(void)
{
	int a;                 
	srand((unsigned)time(NULL));                               // ������ �߻��� ��������� ����           
	a = rand() % 2;                                            // ������ ���� 2�� ������ 0�Ǵ� 1�� ������ �Ѵ�.
	return a;
}


