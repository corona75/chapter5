#include<stdio.h>

int main()
{
	int x,y,result;
	printf("�ΰ� ����?");
	scanf("%d %d",&x,&y);
	result = (x>y)? 1 : 0;
	if(result == 1)
		printf("ū ���� %d, ���� ���� %d�Դϴ�.",x,y);
	else if(result == 0)
		printf("ū ���� %d, ���� ���� %d�Դϴ�.",y,x);
	return 0;
}