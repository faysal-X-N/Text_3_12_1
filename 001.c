#include <stdio.h>
int main()
{
	//�ж�һ�����Ƿ�Ϊ����
	int num = 0;
	scanf_s("%d", &num);
	if(num%2==1)
	{
		printf("����\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}