#include<stdio.h>
int main(void)
{
double total, rate, investment; 
int year, n;   
n =1;
printf("원금을 입략");
scanf("%lf", &investment);
printf("이율을 입력");
scanf("%lf", &rate);
printf("기간(년)을 입력");
scanf("%d", &year);

total = investment;
rate = rate / 100.0; 
printf("연도	원리금\n");
while(year>0)
{
total = total *(1+rate);

year--;

n++;

}
printf("%d	%lf\n",n-1, total);
return 0;
}



