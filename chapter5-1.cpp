#include<stdio.h>

int main()
{
	int temperature = 90;
	printf("�µ� ?");
	scanf("%d",&temperature);
	
	if(temperature > 100)
	{
		printf("�µ� %d�� 100������ Ů�ϴ�.\n",temperature);
	}
	else
	{
		printf("�µ� %d�� 100������ �۰ų� �����ϴ�.\n",temperature);
	}

	return 0;
}