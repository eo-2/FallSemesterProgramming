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
		printf("파일을 열지 못했습니다.\n");
		exit(1);
	}
}

int check_registration(char(*reg_word)[21], char* word, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		if (strcmp(reg_word[i], word) == 0)						// 두 문자열을 비교하여 같은지 아닌지 비교
		{
			printf("같은 문자열입니다.");
		}
		else
		{
			printf("다른 문자열입니다.");
		}
	}
	return 0;
}
