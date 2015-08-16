#include<stdio.h>

int main()
{
	double dividend = 0;
	double divisor = 0;
	double result = 0;

	printf("피제수와 제수는?");
	scanf("%lf %lf",&dividend,&divisor);

	if(divisor == 0)
	{
		printf("0으로 나눌수 없습니다.");
		return -1;
	}
	result = dividend/divisor;
	printf("%lf / %lf = %lf\n",dividend,divisor,result);
	return 0;
}