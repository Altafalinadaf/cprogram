#include<stdio.h>
#include<string.h>
#define Binary(i)  binary[i]=='1'
// Binary to Decimal Number System
int binToDec(){
	char binary[100];
	printf("Enter the binary number : ");
	scanf("%s",binary);
	int i,sum=0,bit=0;
	for(i=strlen(binary)-1;i>=0;i--){ // 100
		if(Binary(i)){
			sum+=1<<bit; // sum=sum+1<<bit // 0+1<<0 // 1 // 2 //
		}
		bit++;
	}
	
	printf("%d\n",sum);
	
}

int decToBin(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	// 4 // 100
	int bit[32];
	int i=0,j=0;
	
	while(n>0){
		int rem=n%2;
		bit[i]=rem;
		i++;
		n/=2;
	}
	
	printf("The binary of %d is : ");
	
	for(j=i-1;j>=0;j--){
		printf("%d",bit[j]);
	}
	
}
