#include<stdio.h>

  void main()
  {
  	int a,b,c;
    printf(" enter 3 numbers :");
	scanf("%d %d %d",&a,&b,&c); 
	
	if(a>=b && a>=c)
	  {
	     printf(" greatest is %d  ",a);	
	  }
	     else if(b>=a && b>=c)
	          {
	     	     printf(" greatest is %d  ",b);	
		      }
		      else 
	              {
	     	        printf(" greatest is %d  ",c);	
		          }
	
		
  }

 
