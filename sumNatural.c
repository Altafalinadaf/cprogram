// 3. Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include<stdio.h>

int naturalSum(int start,int end){
	int sum=0;
	if(start>end){
		return 0;
	}
	else {
		return start+naturalSum(start+1,end);
	}
}

void sumNatural(){
	int n;
	printf("Enter the natural number : ");
	scanf("%d",&n);

	if(n<0){
		printf("Please enter the positive number \n");
	}
	else if(n>0){
		printf("some of natural number is : \n");
   }

	int sum=naturalSum(0,n);
	printf("Some of Natural number is : %d\n",sum);
}
