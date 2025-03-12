#include <stdio.h>
int main()
{
	//判断一个数是否为奇数
	int num = 0;
	scanf_s("%d", &num);
	if(num%2==1)
	{
		printf("奇数\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}