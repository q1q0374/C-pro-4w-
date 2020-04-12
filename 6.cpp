#include <stdio.h>
int main(void){
 
    
     int coin,coin1,coin2;
     int c500, c100, c50, c10;
 
     printf("교환할 금액을 입력해주세요 >> ");
     fflush(stdout);
     scanf("%d", &coin);
     // 110  55    60 50 
    
	 c500 = coin/500; 
	 coin = coin%500; 
	 if(c500>1)
	 {
	 c500=c500-1;
     }
	 coin=coin+500;
	 
	 c100 = coin/100; 
	 coin %= 100;     
	 
     if(c100>1){
     	c100=c100-1;
	 }
     coin=coin+100;
     
	  
     c50 = coin/50;
     coin %= 50;
	      
	if(c50>1){
		c50=c50-1;
	}
	coin=coin+50;

     c10 = coin/10;    
     
     printf("오백 원 짜리 동전  : %d개\n", c500);
     printf("백 원 짜리 동전   : %d개\n", c100);
     printf("오십 원 짜리 동전   : %d개\n", c50);
     printf("십 원 짜리 동전   : %d개\n", c10);
  
 
     return 0; 
}
