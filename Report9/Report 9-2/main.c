#include <stdio.h>

int main(void)
{
	int ch;
	int len, max = 0;
	
	while (1)
	{
		len = 0;
		ch = getchar();						// 문자를 입력
		
		while ((ch != -1) && (ch != '\n'))				// ctrl + z를 누르거나 엔터키를 치지 않는 동안 반복 입력
		{
			len++;										// 입력된 문자의 수를 셈
			ch = getchar();
		}
		if (ch == -1)break;								// ctrl + z를 입력 하면 종료
		if (len > max)max = len;						// 입력한 문자의 길이가 가장 길면 그 문자를 가장 긴 단어로 하고 그 값을 설정
	}
	printf("가장 긴 단어의 길이: %d\n", max);
	
	return 0;
}