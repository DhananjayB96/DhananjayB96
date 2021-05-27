#include<stdio.h>

// common prog
/*
 int main()
  {
 	float r,pi=3.14,area,per;
 	
	printf(" enter the radius of circle : ");
 	scanf("%f",&r);
 	
 	area= pi*r*r;
 	printf(" area of circle is : %f \n",area);
 	
 	per= 2*pi*r;
 	printf(" perimeter of circle is : %f \n",per);
  }
*/  
  
  // prog with func type 1: without parameter without returntype
   void area();
   void perimeter();
   
   void main()
   {
   	 area();
   	 perimeter();
   }
   
   void area()
     {
        float r,pi=3.14,a;
		printf(" enter the radius of circle : ");
 	    scanf("%f",&r);
 	
 	    a= pi*r*r;
 	    printf(" area of circle is : %f \n",a);
 		
	 }
	 void perimeter()
     {
     	
     	float p,r,pi=3.14;
 	    p= 2*pi*r;
 	    printf(" perimeter of circle is : %f \n",p);	
	 }
/*	 
   
   // prog with func type 2: without parameter with returntype
   float area();
   float perimeter();
   
   void main()
   {
   	 float x,y;
   	 x=area();
   	 y=perimeter();
   	 printf(" area of circle is : %f \n",x);
   	 printf(" perimeter of circle is : %f \n",y);	
   }
   
   float area()
     {
        float r,pi=3.14,a;
		printf(" enter the radius of circle : ");
 	    scanf("%f",&r);
 	
 	    a= pi*r*r;
 	    return a;
 		
	 }
	 float perimeter()
     {
     	float r,pi=3.14,p;
 	    p= 2*pi*r;
 	    return p;
	 }
	 
	 // prog with func type 3: with parameter without returntype
   void area(float,float);
   void perimeter(float,float);
   
   void main()
   {
   	 
   	 float r,pi=3.14;
	 printf(" enter the radius of circle : ");
     scanf("%f",&r);
 	
   	 area(r,pi);
   	 perimeter(r,pi);
   	 
   	 
   }
   
   void area(float x,float y)
     {
     	float a;
 	    a= y*x*x;
 	    printf(" area of circle is : %f \n",a);
 		
	 }
	 void perimeter(float x,float y)
     {
     	float p;
 	    p= 2*y*x;
 	    printf(" perimeter of circle is : %f \n",p);	
	 }
	 
	 // prog with func type 4: with parameter with returntype
   float area(float,float);
   float perimeter(float,float);
   
   float main()
   {
   	 
   	 float r,pi=3.14;
	 printf(" enter the radius of circle : ");
     scanf("%f",&r);
 	
 	 float j,k;
   	 j=area(r,pi);
   	 k=perimeter(r,pi);
   	 printf(" area of circle is : %f \n",j);
   	 printf(" perimeter of circle is : %f \n",k);
   	 
   	 
   }
   
   float area(float x,float y)
     {
     	float a;
 	    a= y*x*x;
 	    return a;
 		
	 }
	 float perimeter(float x,float y)
     {
     	float p;
 	    p= 2*y*x;
 	    return p;
 	    	
	 }
	 */
   
   
   
   
   
   
   
   
   
   
   
  
