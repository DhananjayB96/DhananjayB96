#include<stdio.h>

void disc1(float);
void disc2(float);
void disc3(float);

 void main()
  {
  	float p,sum=0;
  	int i;
  	
  	printf(" Enter the price : ");
	scanf("%f",&p);
	
 	printf(" You are student or not  : \n 1.yes\t 2.no\n");
 	scanf("%d",&i);
 	
 	if(i!=1 && i!=2)
 	 {
 	 	printf(" invalid input..!!");
	 }
 	else if(i==1 && p>=500)
 	    {
          disc1(p); 	  	
	    }
	      else if(i==1 && p<500)
	      {
	  	    disc2(p);
	      }
	       else if(i==2 && p>=600)
	            {
	  	          disc3(p);
	            }
	            else
	              {
	              	printf(" sorry you dont get any discount..!! price for you is %f ",p);
				  }
	  }
	  
	   void disc1(float x)
	     {
	     	float d=20,j,k;
	     	j = x*(d/100);
	     	k = x-j;
	     	printf(" the new price for you is %f ",k);
	     		
		 }
		 void disc2(float y)
	     {
	     	float g=10,m,n;
	     	m = y*(g/100);
	     	n = y-m;
	     	printf(" the new price for you is %f ",n);
	     		
		 }
		 void disc3(float z)
	     {
	     	float h=15,u,v;
	     	u = z*(h/100);
	     	v = z-u;
	     	printf(" the new price for you is %f ",v);
	     		
		 }
