#include <stdio.h>

int main(void) 
{

    double ANum[2][2];
    double inverANum[2][2];
    int i, j;
    int x, y;
    double d;


    printf("2x2 A행렬을 입력하시오: \n");                                       // 2x2 A행렬을 출력
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%lf", &ANum[i][j]);
        }
    }
    d = ANum[0][0] * ANum[1][1] - ANum[0][1] * ANum[1][0];                          // A 역행렬을 구하는 법
    if (d == 0)                                                                     // A 역행렬이 안될 경우
    {   
        printf("역행렬이 존재하지 않음!\n");

    }
    else 
    {
        printf("A역행렬\n");                                                       // A 역행렬 출력
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
