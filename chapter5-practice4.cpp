#include<stdio.h>

int main()
{
	int x,grade;
	char grade_char;
	printf("점수는?");
	scanf("%d",&x);
	grade = x/10;
	
	switch(grade)
	{
	case 10:
	case 9:
		grade_char='A';
		break;
	case 8:
		grade_char='B';
		break;
	case 7:
		grade_char='C';
		break;
	case 6:
		grade_char='D';
		break;
	default:
		grade_char='F';
		break;
	}
	printf("성적은 %c입니다.\n",grade_char);
}