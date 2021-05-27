#include<stdio.h>
void add();
void substract();
void multiply();
void divide();
void modulus();

void main()
  {
  	int a,b;
    printf(" enter 2 numbers :");
	scanf("%d %d",&a,&b); 
	add(a,b);
	substract(a,b);
	multiply(a,b);
	divide(a,b);
	modulus(a,b);
  }
  void add(int x, int y)
  {
  	int sum=0;
  	sum= x+y;
  	printf("sum of number is : %d\n",sum);
  }
  void substract(int c, int d)
  {
  	int minus=0;
  	minus= c-d;
  	printf("substr. of number is : %d\n",minus);
  }
  void multiply(int p, int q)
  {
  	int mul=0;
  	mul= p*q;
  	printf("multiplic. of number is : %d\n",mul);
  }
  void divide(int r, int s)
  {
  	int div=0;
  	div= r/s;
  	printf("dividat. of number is : %d\n",div);
  }
  void modulus(int u, int v)
  {
  	int mod=0;
  	mod= u%v;
  	printf("remainder of number is : %d\n",mod);
  }
