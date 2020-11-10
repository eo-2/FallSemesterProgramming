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

	printf("문자열을 입력하십시오.: ");
	gets_s(str, sizeof(str));
	len = strlen(str);								// 문자열의 길이를 구함
	
	for (i = 0; i < len; i++)						// 문자열의 길이 만큼 반복
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cnt[str[i] - 'A']++;						// A이면 0이되고 B면 1이 되는 이런 식으로 어떤 알파벳인지 알고 cnt에 숫자를 1씩 저장
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			cnt[str[i] - 'a']++;						// 위와 같은 방법으로 소문자로 하고 cnt에 숫자를 1씩 저장
		}
	}

	for (i = 0; i < 26; i++)
	{
		word[i] = 'a' + i;
	}

	for (i = 0; i < 26; i++)
	{
		if (cnt[i])												// 안해 줄 시 모든 알파벳들이 출력
		{
			for (j = i + 1; j < 26; j++)
			{
				if (cnt[i] < cnt[j])
				{
					temp = cnt[j];								// 숫자를 바꿔주는 식
					cnt[j] = cnt[i];
					cnt[i] = temp;

					wtemp = word[j];							// 알파벳을 바꿔주는 식
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