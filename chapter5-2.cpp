#include<stdio.h>

int main()
{
	double dividend = 0;
	double divisor = 0;
	double result = 0;

	printf("�������� ������?");
	scanf("%lf %lf",&dividend,&divisor);

	if(divisor == 0)
	{
		printf("0���� ������ �����ϴ�.");
		return -1;
	}
	result = dividend/divisor;
	printf("%lf / %lf = %lf\n",dividend,divisor,result);
	return 0;
}