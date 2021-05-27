#include<stdio.h>

void display(int *,int);
void main()
 {
    /*	int arr[5]={10,12,14},i;
    int i;
    char arr[5]={'a','b','c'};
    
 	for(i=0;i<5;i++)
 	  {
 	 	//printf("%d \t",arr[i]);
 	 	printf("%c \t",arr[i]);
	  }
	  
	  int a=10;
	  int* ptr;
	  *ptr = 40;
	  printf("%d \t",*ptr);
	  */
	  
	  int arr[5]={1,2,3,4,5};
	  display(arr,5);
	  
 }
 
   void display(int* p,int q)
   {
   	  int i;
   	  for(i=0;i<5;i++)
   	     {
   	  	    printf("%d",p[i]);
   	  	    
		 }
   }
