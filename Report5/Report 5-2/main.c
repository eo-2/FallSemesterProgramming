#include <stdio.h>

int res_func(int n);


int main(void)
{
	int n = 0;

	printf("Enter the number n: ");                  // n�� ���ڸ� �Է��϶�� ���� ���
	int D = scanf("%d", &n);                         // n�� ���ڸ� �Է� �޴´�.
	printf("The sum from one to %d: %d\n", n, res_func(n));        // 1���� n������ ���ڸ� �� �� ���� ���
	return 0;
}

int res_func(int n)
{

	if (n == 1)                                 
	{
		return 1;                                 // n�� ���࿡ 1�̸� 1�� ��ȯ�ϰ� ȣ��
	}
	
	return n + res_func(n - 1);                  //	n + (n -1) �� ȣ���ϰ� ��ȯ�ϸ鼭 ���ڸ� ���Ѵ�.

}