#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int temp;

	//삼각형의 길이 입력받음
	printf("세 변의 길이를 입력하세요. :");
	scanf("%d %d %d", &a, &b, &c);

	//길이순으로 정렬
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

	//삼각형 조건 판별
	if (c < a + b)
	{
		if (c * c == a * a + b * b)
			printf("직각삼각형입니다.\n");

		else if (c * c > a * a + b * b)
			printf("둔각삼각형입니다.\n");

		else
			printf("예각 삼각형입니다.\n");

		if (a == b && b == c && a == c)
			printf("정삼각형입니다.");
	}

	//삼각형 종류 판별
	else 
		printf("삼각형이 아닙니다.");
	
	return 0;
}

/*int main(void)
{
	int a, b;
	int r;
	int x, y;

	printf("원의 중심의 좌표를 입력하세요 :");
	scanf("%d %d", &a, &b);

	printf("원의 반지름의 길이를 입력하세요 :");
	scanf("%d", &r);

	printf("점 (x,y)의 좌표를 입력하세요 :");
	scanf("%d %d", &x, &y);

	//원의 중심에서 점의 거리와 반지름 길이 비교
	int temp = (a - x) * (a - x) + (a - y) * (a - y) - r * r;

	if (temp > 0)
	{
		printf("점이 원 밖에 있습니다.");
	}

	else if (temp < 0)
	{
		printf("점이 원 안에 있습니다.");
	}

	else
	{
		printf("점이 원 위에 있습니다.");
	}

	return 0;
}*/

#include <stdlib.h>
#include <time.h>

/*int main()
{
	int i;

	//난수 5개 생성
	for (i = 1; i <= 5; ++i) 
	{
		printf("%d번째 난수 값 %d\n", i, rand());
	}
}*/