#include<stdio.h>

// 2. Write a C program to print all even or odd numbers in given range using recursion.

void printEvenOddNumber(int start,int end,int choice){
	if(start>end){
		return ;
	}
	else if((choice==1 && start%2==0) || (choice==2 && start%2!=0)) {
		printf("%d ",start);
	}

	printEvenOddNumber(start+1,end,choice);
}

void EvenOdd(){
	int start,end,choice;
	printf("Enter the starting range : ");
	scanf("%d",&start);

	printf("Enter the ending range : ");
	scanf("%d",&end);

	printf("Enter\n1 for Even\n2 for Odd\n");
	scanf("%d",&choice);

	if(choice==1){
		printf("Even number from 0 to %d \n",start);
	}
	else if(choice==2){
		printf("Odd number from 0 to %d \n",start);
	}
	else {
		printf("Please enter the correct choice \n");
	}

	printEvenOddNumber(start,end,choice);
}
