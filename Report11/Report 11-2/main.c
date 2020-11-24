#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_assert(FILE* fp);
int check_registration(char(*reg_word)[21], char* word, int cnt);


int main(void)
{
	FILE* afp, * bfp, * cfp;						
	char reg_word[10][21];									// �ִ� 20��, �ܾ� �� 10���� ������ ����
	char word[21];											// �ܾ ������ ����
	int i, cnt;

	afp = fopen("a.txt", "r");								// a �ؽ�Ʈ�� ����
	my_assert(afp);
	bfp = fopen("b.txt", "r");								// b �ؽ�Ʈ�� ����
	my_assert(bfp);
	cfp = fopen("c.txt", "w");								// c �ؽ�Ʈ�� ����
	my_assert(cfp);

	for (i = 0; i < 10; i++)
	{
		fscanf(afp, "%s", reg_word[i]);						// afp�� �ִ� �ܾ reg_word�� ����
		if (feof(afp))										// afp�� �� �Ǹ� ����
		{
			break;
		}
	}
	cnt = i;

	while (fscanf(bfp, "%s", word) != EOF)					// bfp�� word �ִ� �ܾ ����
	{
		if (!check_registration(reg_word, word, cnt))
		{
			fprintf(cfp, "%s\n", word);
		}
	}

	fclose(afp);
	fclose(bfp);
	fclose(cfp);

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
		if (strcmp(reg_word[i], word) == 0)
		{
			return 1;
		}
	}
	return 0;
}
