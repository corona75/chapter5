#include<stdio.h>

int main()
{
	int x;
	printf("값은?");
	scanf("%d",&x);
	if(x>0)
		printf("%d는 양수입니다.\n",x);
	else
		printf("%d는 음수입니다.\n",x);
	return 0;
}