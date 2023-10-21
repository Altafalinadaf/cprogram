// 18. Write a C program to return multiple value from function using pointers.

#include<stdio.h>

void multiple_values(int *a,int *b,int *c){
	*a=100;
	*b=200;
	*c=300;
}
void multiple(){
	int n,n2,n3;

	multiple_values(&n,&n2,&n3);

	printf("The n value is : %d\n",n);
	printf("The n2 value is : %d\n",n2);
	printf("The n3 value is : %d\n",n3);

}
