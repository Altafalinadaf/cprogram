#include<stdio.h>

int fact(int n){
	if(n==0 ||n==1){
		return 1;
	}
	else{
		return n*fact(n-1);

	}
	
}

int main(){
	
	int n;
	printf("Enter the number of factorial : ");
	scanf("%d",&n);
//	int c=fact(n);
	printf("The factorial of given number is : %d",fact(n));
	return 0;
}
