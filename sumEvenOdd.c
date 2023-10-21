#include<stdio.h>

// 4. Write a C program to find sum of all even or odd numbers in given range using recursion.

int printSumEvenOdd(int start,int end,int choice){
	int sum=0;
	if(start>end){
		return 0;
	}

	else if((choice==1 && start%2==0) ||(choice==2 && start%2!=0)){
		sum=start;
	}
	return sum+printSumEvenOdd(start+1,end,choice);
}
void sumEvenOdd(){
	int start,end,choice;
	printf("Enter the starting range : ");
	scanf("%d",&start);

	printf("Enter the ending  range : ");
	scanf("%d",&end);

	printf("Enter\n1 for EvenSum\n2 for OddSum");
	scanf("%d",&choice);

	if(choice==1){
		printf("The sum of even number from %d to %d = ",start,end);
	}
	else if(choice==2){
		printf("The sum of odd number from %d to %d = ",start,end);
	}
	else{
		printf("Wrong input");
	}

	int sum=printSumEvenOdd(start,end,choice);
	printf("%d",sum);
}
