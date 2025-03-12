#include<stdio.h>
int main()
{
	//输出0-1000的奇数
	int i = 1;
	int e = 2;
	while(i <=100)
	{

		if (i % 2 == 1)
		{
			printf("奇数：%d\n", i);
		}
		i+=2;
	}
	while (e <= 100)
	{

		if (e % 2 == 0)
		{
			printf("偶数：%d\n", e);
		}
		e += 2;
	}

	return 0;

}