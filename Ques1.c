#include<stdio.h>

// common prog.
/*
 void main()
   {
      int d,f;
      
	  printf(" enter tempr. in degree : ");
	  scanf("%d",&d);
	  
	  f=(d*9/5)+32;
	  printf(" the tempr. in ferenheit is : %d \n",f);
	   	
   }
   
  
 // prog with func type 1: without parameter without returntype
   
   void temp();
   
   void main()
    {
    	temp();
   	} 
	
	void temp()
	  {
	  	int d,f;
	     
	    printf(" enter tempr. in degree : ");
	    scanf("%d",&d);
	  
	    f=(d*9/5)+32;
	    printf(" the tempr. in ferenheit is : %d \n",f);	
	  }
	  
	
	// prog with func type 2: without parameter with returntype
	
	int temp();
   
    void main()
    {
    	int tem;
    	tem=temp();
    	//printf("%d",temp());
    	printf("the tempr. in ferenheit is : %d \n ",tem);
   	} 
	
	 int temp()
	  {
	  	int d,f;
	     
	    printf(" enter tempr. in degree : ");
	    scanf("%d",&d);
	  
	    f=(d*9/5)+32;
	    return f;	
	  }
	
	
	// prog with func type 3: with parameter without returntype
	
	void temp(int ,int);
   
    int main()
    {
    	int a,b;
    	printf(" enter tempr. in degree : ");
	    scanf("%d",&a);
    	temp(a,b);
   	} 
	
	 void temp(int d, int f)
	  {
	    
	  
	    f=(d*9/5)+32;
	    printf("the tempr. in ferenheit is : %d \n ",f);
	    	
	  }
     */
     // prog with func type 4: with parameter with returntype
	
	int temp(int ,int);
   
    int main()
    {
    	int a,b,f;
    	printf(" enter tempr. in degree : ");
	    scanf("%d",&a);
    	f=temp(a,b);
    	printf("the tempr. in ferenheit is : %d \n ",f);
   	} 
	
	 int temp(int d, int f)
	  {
	    
	  
	    f=(d*9/5)+32;
	    return f;
	    	
	  }
	
	
	
	
	
	
	
	
 
