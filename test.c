 #include<stdio.h>
 
 void swap(int*,int*);
 
 void main()
 {
 	int a=10,b=20;
    swap(&a,&b);	 	
 }
 
 void swap(int* p,int* q)
   {
   	 int t;
   	 t= *p;
   	 *p = *q;
   	 *q = t;
   	 printf("%d,%d",*p,*q);
   	 
   	}
