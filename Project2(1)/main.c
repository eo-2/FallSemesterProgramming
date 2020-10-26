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
    printf("몇명이서 할 것인가요?: ");
    scanf("%d", &a);

    if (a == 1)
    {
        for (i = 0; i < 4; i++)
        {
        renumber:
            number[i] = rand() % 10;
            if (i != 0 && number[i - 1] == number[i])
                goto renumber;
        }
        while (1)
        {
            game++;
            printf("enter the number: ");
            scanf("%1d%1d%1d%1d", &enternumber[0], &enternumber[1], &enternumber[2], &enternumber[3]);
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (i != j && enternumber[i] == number[j])
                        ball++;
                }
            }
            for (i = 0; i < 4; i++)
            {
                if (enternumber[i] == number[i])//자리수가 맞는지 검사
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
    else if (a == 2)
    {
        printf("enter the number 1: ");
        scanf("%1d%1d%1d%1d", &number[0], &number[1], &number[2], &number[3]);

        system("cls");
        while (1)
        {
            game++;
            printf("enter the number: ");
            scanf("%1d%1d%1d%1d", &enternumber[0], &enternumber[1], &enternumber[2], &enternumber[3]);
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (i != j && enternumber[i] == number[j])
                        ball++;
                }
            }
            for (i = 0; i < 4; i++)
            {
                if (enternumber[i] == number[i])//자리수가 맞는지 검사
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