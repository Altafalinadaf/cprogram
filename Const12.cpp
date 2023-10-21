#include<stdio.h>
int main(){
	
	/*
		int a1=16;
	int *const ptr5=&a1;
	*ptr5=5;
//	ptr5=&a1; // assignment of read-only variable 'a1'
	printf("The value of constant pointer : %d\n",*ptr5);
*/
	int b=10;
	int a=10;
	int *const ptr=&b;
	*ptr=10;
	
	int *ptr1=&a;
	*ptr1=100;
	printf("%d\n",*ptr);
	printf("%d\n",*ptr1);
	
	return 0;
}
