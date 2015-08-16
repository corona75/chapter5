#include<stdio.h>

int main()
{
	int x,y,result;
	printf("두개 값은?");
	scanf("%d %d",&x,&y);
	result = (x>y)? 1 : 0;
	if(result == 1)
		printf("큰 수는 %d, 작은 수는 %d입니다.",x,y);
	else if(result == 0)
		printf("큰 수는 %d, 작은 수는 %d입니다.",y,x);
	return 0;
}