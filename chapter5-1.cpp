#include<stdio.h>

int main()
{
	int temperature = 90;
	printf("온도 ?");
	scanf("%d",&temperature);
	
	if(temperature > 100)
	{
		printf("온도 %d는 100도보다 큽니다.\n",temperature);
	}
	else
	{
		printf("온도 %d는 100도보다 작거나 같습니다.\n",temperature);
	}

	return 0;
}