#include<stdio.h>

 int main()
  {
    int num,i,sum=0,rev=0;
	printf(" enter 3 digit number : ");
	scanf("%d",&num);
	
	while(num>0)
	{
	  i=num%10;
	  sum=sum+i;
	  rev=rev*10+i;
	  num=num/10;
	}
	printf(" sum of number is %d \n",sum);
	printf(" reverse number is %d \n",rev);	
  }
  
    
