#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	
    int a=3;
    int b=4;
    int c;
    printf("preincrement of b =  %d\n",b); // b = 37 
	printf("value in a = %d \n", a); // a= 37 
	
	c = a++;// c = 37 => a = 38 
	
	printf("post increment  c = %d\n",c); // c = 37
	printf("value in a = %d \n", a);   // a= 38
	
	
	// a--   --a
    b = --a;
	printf("pre decrement of b =  %d\n",b); 
	printf("value in a = %d \n", a); 
	  
	  
    c = a--;
	
	printf("post decrement  c = %d\n",c); 
	printf("value in a = %d \n", a);   
	
	
	
	return 0;
}
