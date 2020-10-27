#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    int a = 0;
    int i, j;
    int strike = 0;
    int ball = 0;
    int number[4];
    int enternumber[4];
    int game = 0;

replay:
    printf("몇명이서 할 것인가요?: ");                       // 몇명에서 할지 선택 출력
    scanf("%d", &a);

    if (a == 1)
    {
        for (i = 0; i < 3; i++)
        {
            number[i] = rand() % 10;                                            // 랜덤한 숫자 생성
            for (j = 0; j < i; j++)
            {
                if (number[i] == number[j])                                     // 랜덤 숫자에 같은 숫자 생성 방지
                {
                    i--;
                    break;
                }
            }
        }
        while (1)
        {
            game++;                                                             // 돌 때마다 game에다가 1 축적
            printf("enter the number: ");                                       // 숫자 입력
            scanf("%1d%1d%1d%1d", &enternumber[0], &enternumber[1], &enternumber[2], &enternumber[3]);              // 4자리 숫자 입력
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)                                                   // i와 j는 다르지만 숫자는 같으면 ball
                {
                    if (i != j && enternumber[i] == number[j])
                        ball++;                                                          // ball에 1 축적한다.
                }
            }
            for (i = 0; i < 3; i++)                                                       // 숫자 순서도 맞고 숫자가 같으면 strike
            {
                if (enternumber[i] == number[i])
                    strike++;                                                           // strike에 1 축적한다.
            }
            if (strike == 4)                                                            // strike가 4만큼 축적 되면 Home Rum 출력
            {
                printf("Home Run!!\n");
                break;
            }
            else if (strike == 0 && ball == 0)                                               // strike도 ball도 0이면 4OUT 출력
            {
                printf("4OUT!!\n");
                continue;
            }

            printf("%ds", strike);                                                      // 축전된 strike 숫자 만큼 출력
            strike = 0;
            printf(" %db\n", ball);                                                     // 축전된 ball 숫자 만큼 출력
            ball = 0;
            if (game == 9)                                                              // game에 9가 축적이 되면 The end 출력 하고 끝낸다.
            {
                printf("The end\n");
                break;
            }
        }
        char Replay;
        printf("Do you want to replay game: ");                                         // 다시할거냐는 말 출력
        getchar();
        scanf("%c", &Replay);
        if (Replay == 'y')                                                              // 'y'면 replay로 가시오.
            goto replay;
        if (Replay == 'n')                                                              // 'n'면 끝낸다.
            return 0;
    }
    else if (a == 2)
    {
        printf("enter the number 1: ");                                                 // 첫번째 사람이 낼 야구숫자 입력
        scanf("%1d%1d%1d%1d", &number[0], &number[1], &number[2], &number[3]);

        system("cls");                                                                 // 전에 입력한 글을 지움
        while (1)
        {
            game++;
            printf("enter the number: ");
            scanf("%1d%1d%1d%1d", &enternumber[0], &enternumber[1], &enternumber[2], &enternumber[3]);
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (i != j && enternumber[i] == number[j])
                        ball++;
                }
            }
            for (i = 0; i < 3; i++)
            {
                if (enternumber[i] == number[i])
                    strike++;
            }
            if (strike == 4)
            {
                printf("Home Run!!\n");
                break;
            }
            if (strike == 0 && ball == 0)
            {
                printf("4OUT!!\n");
                continue;
            }

            printf("%ds", strike);
            strike = 0;
            printf(" %db\n", ball);
            ball = 0;
            if (game == 9)
            {
                printf("The end\n");
                break;
            }
        }
        char Replay;
        printf("Do you want to replay game: ");
        getchar();
        scanf("%c", &Replay);
        if (Replay == 'y')
            goto replay;
        if (Replay == 'n')
            return 0;
    }
    else
    {
        printf("다른 숫자를 입력해 주십시오.\n");
        goto replay;
    }
}