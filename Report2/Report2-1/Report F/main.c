#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = (int)time;
	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec);
	
	system("pause..");
	return 0;

}