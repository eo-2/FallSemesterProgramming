#include <stdio.h>

int main(void)
{
	int ch;
	int len, max = 0;
	
	while (1)
	{
		len = 0;
		ch = getchar();						// ���ڸ� �Է�
		
		while ((ch != -1) && (ch != '\n'))				// ctrl + z�� �����ų� ����Ű�� ġ�� �ʴ� ���� �ݺ� �Է�
		{
			len++;										// �Էµ� ������ ���� ��
			ch = getchar();
		}
		if (ch == -1)break;								// ctrl + z�� �Է� �ϸ� ����
		if (len > max)max = len;						// �Է��� ������ ���̰� ���� ��� �� ���ڸ� ���� �� �ܾ�� �ϰ� �� ���� ����
	}
	printf("���� �� �ܾ��� ����: %d\n", max);
	
	return 0;
}