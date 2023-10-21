#include<stdio.h>
//#define Prime(n,i) n%i==0

int primetask3(){
	int n,i,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Prime Number");
	}
	else{
		printf("Not Prime ");
	}
}


