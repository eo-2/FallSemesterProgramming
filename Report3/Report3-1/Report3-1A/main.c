#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	double height = 179.5;
	double weight = 75.0;
	if ((187.5 >= height) && (weight < 80.0))
	{
		printf("ok\n");
	}
	else
	{
		printf("cancel\n");
	}

	return 0;
}