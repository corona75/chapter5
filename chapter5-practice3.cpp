#include<stdio.h>

int main()
{
	int score;
	printf("������?");
	scanf("%d",&score);
	if(score>100)
	{	
		printf("������ 100���� �۾ƾ��մϴ�.");
	}
	else if(score>90)
	{
		printf("������ A�Դϴ�.");
	}
	else if(score>80)
	{
		printf("������ B�Դϴ�.");
	}
	else if(score>70)
	{
		printf("������ C�Դϴ�.");
	}
	else if(score>60)
	{
		printf("������ D�Դϴ�.");
	}
	else
	{
		printf("������ F�Դϴ�.");
	}
	return 0;
}