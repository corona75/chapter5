#include<stdio.h>

int main()
{
	int temp;
	printf("물의 온도는?");
	scanf("%d",&temp);

	if(100<=temp)
	{
		printf("기체 상태입니다\n");
	}
	else if(temp>0)
		printf("액체 상태입니다.\n");
	else
		printf("고체 상태입니다.\n");
	return 0;
}