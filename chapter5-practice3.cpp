#include<stdio.h>

int main()
{
	int score;
	printf("점수는?");
	scanf("%d",&score);
	if(score>100)
	{	
		printf("점수는 100보다 작아야합니다.");
	}
	else if(score>90)
	{
		printf("성적은 A입니다.");
	}
	else if(score>80)
	{
		printf("성적은 B입니다.");
	}
	else if(score>70)
	{
		printf("성적은 C입니다.");
	}
	else if(score>60)
	{
		printf("성적은 D입니다.");
	}
	else
	{
		printf("성적은 F입니다.");
	}
	return 0;
}