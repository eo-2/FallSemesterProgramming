#include <stdio.h>

int main(void) 
{

    double ANum[2][2];
    double inverANum[2][2];
    int i, j;
    int x, y;
    double d;


    printf("2x2 A����� �Է��Ͻÿ�: \n");                                       // 2x2 A����� ���
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%lf", &ANum[i][j]);
        }
    }
    d = ANum[0][0] * ANum[1][1] - ANum[0][1] * ANum[1][0];                          // A ������� ���ϴ� ��
    if (d == 0)                                                                     // A ������� �ȵ� ���
    {   
        printf("������� �������� ����!\n");

    }
    else 
    {
        printf("A�����\n");                                                       // A ����� ���
        x = 1;
        for (i = 0; i < 2; i++) 
        {
            y = 1;
            for (j = 0; j < 2; j++) 
            {
                inverANum[i][j] = ANum[y][x] / d;
                y--;
            }
            x--;
        }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++) 
                {
                    printf("%.3lf ", inverANum[i][j]);
                }
                printf("\n");
            }
    }
    return 0;
}
