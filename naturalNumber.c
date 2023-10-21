#include<stdio.h>
// 1. Write a C program to print all natural numbers between 1 to n using recursion.

void print(int start,int n){
	if(start<=n){
		printf("%d ",start);
		print(start+1,n);
	}
}

void naturalNumber(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if(n<0){
		printf("Please write the positive number \n");
	}
	else{
		printf("The natural is 1 to %d is : ",n);
		print(1,n);
		printf("\n");
	}
}
