#include<stdio.h>
int main()
{
	//���0-1000������
	int i = 1;
	int e = 2;
	while(i <=100)
	{

		if (i % 2 == 1)
		{
			printf("������%d\n", i);
		}
		i+=2;
	}
	while (e <= 100)
	{

		if (e % 2 == 0)
		{
			printf("ż����%d\n", e);
		}
		e += 2;
	}

	return 0;

}