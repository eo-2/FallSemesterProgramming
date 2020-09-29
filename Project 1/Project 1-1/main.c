#include <stdio.h>

int main(void)
{
	double nA = 0;


	printf("각도를 입력해 주세요.: ");
	double P = scanf("%lf", &nA);

	if (((double)180 >= nA) && (nA >= (double)-180))    // 180도 부터 -180도까지의 출력
	{
		printf("%.4lf도 입니다.\n", nA);
	}
	else if (((double)180 < nA) && (nA <= (double)360))   // 180도 초과 부터 360도 이하까지 출력
	{
		double nB = nA - (double)360;                  // 180도를 넘어가면 음수가 되기 때문에 -360도를 빼줘 -를 만들어준다
		printf("%.4lf도 입니다.\n", nB);
	}
	else if ((double)360 < nA)                        // 360도 초과의 출력
	{
		int nC = (int)nA / 360;                       // 360도가 초과가 되면 360를 몇번 지나는 횟수
		double nD = nA - (nC * 360);                  // 횟수에 맞춰 나머지를 계산 
		double nE = nD - 360;                        // 만약 nD가 180도를 넘어갈 경우 -로 환산

		if ((0 <= nD) && (nD <= (double)180))        // nD가 0 이상 180 이하 일때의 출력
		{
			printf("%.4lf도 입니다.\n", nD);
		}
		else if (((180) < nD )&& (nD <= 360))       // nD가 180초과 360 이하일 때의 출력
		{
			printf("%.4lf도 입니다.\n", nE);       // 이때 nE를 이용하여 출력
		}

	}
	else if (((double)-360<= nA) && (nA < (double)-180))    // -360도 초과 -180도 이하의 출력
	{
		double nB = nA + (double)360;                       // -180도가 넘어가면 양수가 되기 때문에 부호 환산
		printf("%.4lf도 입니다.\n", nB);
	}
	else if ((double)-360 > nA)                            // -360도 미만의 출력
	{
		int nC = (int)nA / 360;                           // -360도가 미만이 되면 360를 몇번 지나는 횟수
		double nD = nA - (nC * 360);                      // 횟수에 맞춰 나머지를 계산
		double nE = nD + 360;                             // 만약 nD가 -180도를 넘어갈 경우 +로 환산

		if ((-180 <= nD) && (nD <= (double)0))            // nD가 -180 이상 0이하일 때의 출력
		{
			 printf("%.4lf도 입니다.\n", nD);
		}
		else if ((-360 <= nD) && (nD < -180))             // nD가 -180 미만 -360이상일 때의 출력
		{
			printf("%.4lf도 입니다.\n", nE);
		}
	}
	return 0;
}