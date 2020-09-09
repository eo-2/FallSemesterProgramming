#include <stdio.h>
#include <stdlib.h>

/* main function
* 2020.09.09
* made by Eo
*/


int main(void)

{
	int kor = 70, eng = 80, mat = 90;
		int tot;

		tot = kor + eng + mat;
		printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
		printf("총점 : %d", tot);

		return 0;
}