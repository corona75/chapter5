#include<stdio.h>

int main()
{
	int grade;
	char grade_char;
	printf("�г���?");
	scanf("%d",&grade);
	switch(grade_char)
	{
		case 1:
		case 2:
			grade_char = 'B';
			break;
		case 3:
			grade_char = 'C';
			break;
		case 4:
			grade_char = 'D';
			break;
		default:
			grade_char = 'U';
			break;
	}
	printf("%d�г� => %c\n",grade,grade_char);

	return 0;
}