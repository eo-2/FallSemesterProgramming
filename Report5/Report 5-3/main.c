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
		printf("앞면(1) 또는 뒷면(0)을 입력하십시오: ");               // 앞면 또는 뒷면을 입력하는 것을 출력
		scanf("%d", &n);
		{
			if (n == 1 || n == 0)                                     // n이 1 또는 0을 입력하면 넘어간다.
			{
				if (n == b_rand())                                    //n이 b_rand()값과 같으면 넘어간다.
				{
					if (b_rand() == 1)                                //b_rand()값이 1이면 앞면이고 맞았습니다. 출력
					{ 
						printf("앞면, 맞았습니다.\n");
					}
					else if (b_rand() == 0)                           //b_rand()값이 0이면 뒷면이고 맞았습니다. 출력
					{
						printf("뒷면, 맞았습니다.\n");
					}
				}
				else
				{
					printf("틀렸습니다.\n");                        // n과 b_rand()값이 다르면 틀렸습니다. 출력
				}
			}
			else
			{
				printf("0과 1을 입력하십시오.\n");                  //n을 실수로 0또는 1을 누르지 않았을 때 0과 1을 입력하라고 출력
				continue;                                           // 밑에 있는 함수를 건너뛰고 반복 실행
			}
		}
		answer:
		printf("계속하시겠습니까?(y or n): ");                      // 계속하시겠습니까? 출력
		getchar();                                                  // 문자열 함수 초기화
		scanf("%c", &b);                                            // 컴퓨터에서 문자를 받는다.
		{
				if (b == 'n')
				{
					break;                                          // b가 n이면 함수를 끝낸다.
				}
				else if (b == 'y')
				{
					continue;                                       // b가 y면 밑에 함수를 건너뛰고 반복 실행
				}
				else
				{
					printf("n 또는 y를 입력하십시오.\n");          // n 또는 y를 입력하지 않을 경우 n또는 y를 입력하시오 출력 후 answer위치로 가서 다시 실행
					goto answer;
				}
		}	
	}
	return 0;
}

int b_rand(void)
{
	int a;                 
	srand((unsigned)time(NULL));                               // 난수를 발생을 양수형으로 선언           
	a = rand() % 2;                                            // 랜덤한 수를 2로 나누어 0또는 1만 나오게 한다.
	return a;
}


