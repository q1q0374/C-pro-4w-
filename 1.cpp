#include<stdio.h>
#include<math.h>
long a(long n)
{
	if(n<=1)
	{
		return n;
	}
	return a(n/2)*10+n%2;
}
long b(long n)
{
	if(n<=7)
	{
		return n;
	}
	return a(n/8)*10+n%8;
}

long c(long n)
{
	if(n<=15)
	{
		return n;
	}
	return a(n/16)*10+n%16;
}
int main()
{
	long n;
	printf("10진수 입력");
	scanf("%ld",&n);
	printf("10진수: %ld \n",n);
	printf("2진수 : %ld \n",a(n));
	printf("8진수 : %ld \n",b(n));
	printf("16진수 : %ld \n",c(n));
}
