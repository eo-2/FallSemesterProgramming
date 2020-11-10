#include <stdio.h>


int main(void)
{
	char str[100];
	char word[50];
	int i, j;
	int cnt[26] = { 0 };
	int len;
	int temp;
	int wtemp;

	printf("���ڿ��� �Է��Ͻʽÿ�.: ");
	gets_s(str, sizeof(str));
	len = strlen(str);								// ���ڿ��� ���̸� ����
	
	for (i = 0; i < len; i++)						// ���ڿ��� ���� ��ŭ �ݺ�
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cnt[str[i] - 'A']++;						// A�̸� 0�̵ǰ� B�� 1�� �Ǵ� �̷� ������ � ���ĺ����� �˰� cnt�� ���ڸ� 1�� ����
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			cnt[str[i] - 'a']++;						// ���� ���� ������� �ҹ��ڷ� �ϰ� cnt�� ���ڸ� 1�� ����
		}
	}

	for (i = 0; i < 26; i++)
	{
		word[i] = 'a' + i;
	}

	for (i = 0; i < 26; i++)
	{
		if (cnt[i])												// ���� �� �� ��� ���ĺ����� ���
		{
			for (j = i + 1; j < 26; j++)
			{
				if (cnt[i] < cnt[j])
				{
					temp = cnt[j];								// ���ڸ� �ٲ��ִ� ��
					cnt[j] = cnt[i];
					cnt[i] = temp;

					wtemp = word[j];							// ���ĺ��� �ٲ��ִ� ��
					word[j] = word[i];
					word[i] = wtemp;
				}
			}			
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (cnt[i])
		{
			printf("%c : %d\n", word[i], cnt[i]);
		}
	}
	
	return 0;
}