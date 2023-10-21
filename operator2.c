#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a= 9, b = 4;
	
	// uninary operator 
	printf("initial value of  a = %d and b = %d\n",a,b);
	a += b;
	printf("add operator a = %d\n", a);
	
	a -=b;
	printf("sub operator a = %d\n", a);
	
	a *=b;
	printf("mul operator a = %d\n", a);
	
	//Increment (++) Operator=> increment by 1 
	
	//a = a+1;   a++
	// ++a => preincrement   
	// a++ => postincrement  
	
	 //a= 36 => ++a; a= 37
	 //a = 36 -> a++ ; a = 37 


	b = ++a;
	
	printf("preincrement of b =  %d\n",b);
	return 0;
}

