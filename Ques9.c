#include<stdio.h>
void evenodd();
void basicsal();

void main()
 {
 	int a;
    printf(" Enter your choice:\n 1: Even odd prog.\t 2: Basic salary prog. \n ");
	scanf("%d",&a); 
	
	if(a==1)
	  {
	  	evenodd();
	  }
	  else if(a==2)
	      {
	      	basicsal();
	      }
	      else
	      {
	      	printf(" Invalid input..!! plz enter correct choice ");
		  }
 }
 
     void evenodd()
        {
        	int num;
	        printf(" Enter any number : \t");
	        scanf("%d",&num);  	
	 
	        if(num%2==0)
	        {
		        printf(" %d is even num. \n",num);
	        }
	       else
	          {
		        printf(" %d is odd num. \n",num);
	          }
		}
     void basicsal()
        {
        	int sal,da,ta,hra,tsal=0;
	        printf(" Enter basic salary : \t");
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
