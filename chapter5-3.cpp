#include<stdio.h>

int main()
{
	int temp;
	printf("���� �µ���?");
	scanf("%d",&temp);

	if(100<=temp)
	{
		printf("��ü �����Դϴ�\n");
	}
	else if(temp>0)
		printf("��ü �����Դϴ�.\n");
	else
		printf("��ü �����Դϴ�.\n");
	return 0;
}