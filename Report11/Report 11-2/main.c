#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_assert(FILE* fp);
int check_registration(char(*reg_word)[21], char* word, int cnt);


int main(void)
{
	FILE* afp, * bfp, * cfp;						
	char reg_word[10][21];									// 최대 20자, 단어 수 10개를 저장할 공간
	char word[21];											// 단어를 저장할 공간
	int i, cnt;

	afp = fopen("a.txt", "r");								// a 텍스트를 연다
	my_assert(afp);
	bfp = fopen("b.txt", "r");								// b 텍스트를 연다
	my_assert(bfp);
	cfp = fopen("c.txt", "w");								// c 텍스트에 쓴다
	my_assert(cfp);

	for (i = 0; i < 10; i++)
	{
		fscanf(afp, "%s", reg_word[i]);						// afp에 있는 단어를 reg_word에 저장
		if (feof(afp))										// afp가 다 되면 종료
		{
			break;
		}
	}
	cnt = i;

	while (fscanf(bfp, "%s", word) != EOF)					// bfp를 word 있는 단어를 저장
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
		printf("파일을 열지 못했습니다.\n");
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
