#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch; //���ڸ� ������ ����

	printf("���� �Է� : "); //�Է� �ȳ� �޽���
	scanf("%c", &ch);  // ch������ ���� �Է�
	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.", ch, ch);

	return 0;

}