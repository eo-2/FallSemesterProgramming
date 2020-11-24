#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_assert(FILE* fp);
int check_registration(char(*reg_word)[21], char* word, int cnt);

int main(void)
{
	FILE* afp, * bfp;
	char reg_word[10][20];
	char word[20];
	int i, cnt;

	afp = fopen("a.txt", "r");
	void my_assert(afp);
	bfp = fopen("b.txt", "r");
	void my_assert(bfp);

	for (i = 0; i < 10; i++)
	{
		fscanf(afp, "%s", reg_word[i]);
		if (feof(afp))
		{
			break;
		}
	}
	cnt = i;

	while (fscanf(bfp, "%s", word) != EOF)					
	{
		check_registration(reg_word, word, cnt);
	}

	fclose(afp);
	fclose(bfp);

	return 0;
}

void my_assert(FILE* fp)
{
	if (fp == NULL)
	{
		printf("������ ���� ���߽��ϴ�.\n");
		exit(1);
	}
}

int check_registration(char(*reg_word)[21], char* word, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		if (strcmp(reg_word[i], word) == 0)						// �� ���ڿ��� ���Ͽ� ������ �ƴ��� ��
		{
			printf("���� ���ڿ��Դϴ�.");
		}
		else
		{
			printf("�ٸ� ���ڿ��Դϴ�.");
		}
	}
	return 0;
}
