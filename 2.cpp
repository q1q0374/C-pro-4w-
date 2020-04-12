#include<stdio.h>
#include<math.h>
int two(int num)
{
	int r=0,mul=1;
	while(num>0)
	{
		if(num%2!=0)
		{
		r=r+mul;}
		mul=mul*2;
		num=num/10;
		
	}
	return r;
}
int main()
{
	int a;
	printf("2진수 숫자 입력");
	scanf("%d",&a); 
	
	printf("%d",two(a));
}
