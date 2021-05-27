#include<stdio.h>

 void main()
  {
  	float pri,dis,i,n;
  	printf(" enter price of item : ");
	scanf("%f",&pri);
	printf(" enter discount on item : ");
	scanf("%f",&dis);
	
	if(pri!=0)
	 {
	 	i=pri*(dis/100);
	 	n= pri-i;
	 	
	 }
	  printf(" price after discount on item is : %f \n",n);
	
	 
  }
