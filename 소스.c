#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int temp;

	//�ﰢ���� ���� �Է¹���
	printf("�� ���� ���̸� �Է��ϼ���. :");
	scanf("%d %d %d", &a, &b, &c);

	//���̼����� ����
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}

	//�ﰢ�� ���� �Ǻ�
	if (c < a + b)
	{
		if (c * c == a * a + b * b)
			printf("�����ﰢ���Դϴ�.\n");

		else if (c * c > a * a + b * b)
			printf("�а��ﰢ���Դϴ�.\n");

		else
			printf("���� �ﰢ���Դϴ�.\n");

		if (a == b && b == c && a == c)
			printf("���ﰢ���Դϴ�.");
	}

	//�ﰢ�� ���� �Ǻ�
	else 
		printf("�ﰢ���� �ƴմϴ�.");
	
	return 0;
}

/*int main(void)
{
	int a, b;
	int r;
	int x, y;

	printf("���� �߽��� ��ǥ�� �Է��ϼ��� :");
	scanf("%d %d", &a, &b);

	printf("���� �������� ���̸� �Է��ϼ��� :");
	scanf("%d", &r);

	printf("�� (x,y)�� ��ǥ�� �Է��ϼ��� :");
	scanf("%d %d", &x, &y);

	//���� �߽ɿ��� ���� �Ÿ��� ������ ���� ��
	int temp = (a - x) * (a - x) + (a - y) * (a - y) - r * r;

	if (temp > 0)
	{
		printf("���� �� �ۿ� �ֽ��ϴ�.");
	}

	else if (temp < 0)
	{
		printf("���� �� �ȿ� �ֽ��ϴ�.");
	}

	else
	{
		printf("���� �� ���� �ֽ��ϴ�.");
	}

	return 0;
}*/

#include <stdlib.h>
#include <time.h>

/*int main()
{
	int i;

	//���� 5�� ����
	for (i = 1; i <= 5; ++i) 
	{
		printf("%d��° ���� �� %d\n", i, rand());
	}
}*/