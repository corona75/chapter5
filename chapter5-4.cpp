#include<stdio.h>

int main()
{
	double dividend = 0;
	double divisor = 0;
	double result = 0;

	printf("�������� ������?");
	scanf("%lf %lf",&dividend,&divisor);

	result = (divisor == 0)? 0: (double)dividend/divisor;
	printf("%lf / %lf = %lf\n",dividend,divisor,result);
	return 0;
}