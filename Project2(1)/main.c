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
    printf("����̼� �� ���ΰ���?: ");                       // ����� ���� ���� ���
    scanf("%d", &a);

    if (a == 1)
    {
        for (i = 0; i < 3; i++)
        {
            number[i] = rand() % 10;                                            // ������ ���� ����
            for (j = 0; j < i; j++)
            {
                if (number[i] == number[j])                                     // ���� ���ڿ� ���� ���� ���� ����
                {
                    i--;
                    break;
                }
            }
        }
        while (1)
        {
            game++;                                                             // �� ������ game���ٰ� 1 ����
            printf("enter the number: ");                                       // ���� �Է�
            scanf("%1d%1d%1d%1d", &enternumber[0], &enternumber[1], &enternumber[2], &enternumber[3]);              // 4�ڸ� ���� �Է�
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)                                                   // i�� j�� �ٸ����� ���ڴ� ������ ball
                {
                    if (i != j && enternumber[i] == number[j])
                        ball++;                                                          // ball�� 1 �����Ѵ�.
                }
            }
            for (i = 0; i < 3; i++)                                                       // ���� ������ �°� ���ڰ� ������ strike
            {
                if (enternumber[i] == number[i])
                    strike++;                                                           // strike�� 1 �����Ѵ�.
            }
            if (strike == 4)                                                            // strike�� 4��ŭ ���� �Ǹ� Home Rum ���
            {
                printf("Home Run!!\n");
                break;
            }
            else if (strike == 0 && ball == 0)                                               // strike�� ball�� 0�̸� 4OUT ���
            {
                printf("4OUT!!\n");
                continue;
            }

            printf("%ds", strike);                                                      // ������ strike ���� ��ŭ ���
            strike = 0;
            printf(" %db\n", ball);                                                     // ������ ball ���� ��ŭ ���
            ball = 0;
            if (game == 9)                                                              // game�� 9�� ������ �Ǹ� The end ��� �ϰ� ������.
            {
                printf("The end\n");
                break;
            }
        }
        char Replay;
        printf("Do you want to replay game: ");                                         // �ٽ��ҰųĴ� �� ���
        getchar();
        scanf("%c", &Replay);
        if (Replay == 'y')                                                              // 'y'�� replay�� ���ÿ�.
            goto replay;
        if (Replay == 'n')                                                              // 'n'�� ������.
            return 0;
    }
    else if (a == 2)
    {
        printf("enter the number 1: ");                                                 // ù��° ����� �� �߱����� �Է�
        scanf("%1d%1d%1d%1d", &number[0], &number[1], &number[2], &number[3]);

        system("cls");                                                                 // ���� �Է��� ���� ����
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
        printf("�ٸ� ���ڸ� �Է��� �ֽʽÿ�.\n");
        goto replay;
    }
}