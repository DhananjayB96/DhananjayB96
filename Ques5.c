#include<stdio.h>

 int main()
 {
    int sal,da,ta,hra,tsal=0;
	printf(" enter basic salary : ");
	scanf("%d",&sal);  	
	
	if(sal<=5000)
	  {
	      da=(sal*10)/100;
		  ta=(sal*20)/100;
		  hra=(sal*25)/100;
		  tsal = sal+da+ta+hra;
		  printf(" your total salary is : %d \n",tsal);	
	  }
	  else
	  {
	  	  da=(sal*15)/100;
		  ta=(sal*25)/100;
		  hra=(sal*30)/100;
		  tsal = sal+da+ta+hra;
		  printf(" your total salary is : %d \n",tsal);	
	    	
	  }	
 }
