//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n;
//	printf("Enter the number : ");
//	scanf("%d",&n);
//	int count;
//	int temp=n;
//	int temp1=n;
//	int sum;
//	while(n>0){
//		n/=10;
//		count++;
//	}
//	printf("%d\n",count);
//	while(temp1>0){
//		int rem=temp1%10;
//		sum=sum+pow(rem,count);
//		temp1/=10;
//	}
//	printf("%d\n",sum);
//	if(temp==sum){
//		printf("ArmStrong Number ");
//	}
//	else{
//		printf("Not ArmStrong Number ");
//	}
//	return 0;
//	
//}


// average of sum of values 
//#include<stdio.h>
//int main(){
//	int n;
//	printf("Enter the number : ");
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//		printf("Enter the %d number : ",i+1);
//		scanf("%d",&arr[i]);
//		
//	}
//	int sum=0;
//	for(int i=0;i<n;i++){
//		sum=sum+arr[i];
//	}
//	printf("%d\n",sum);
//	return 0;
//}


// Back pattern printing 
//#include<stdio.h>
//
//void backPrinting(int n){
//	if(n>0){
//		for(int i=0;i<n;i++){
//			printf("* ");
//		}
//		printf("\n");
//		backPrinting(n-1);
//	}
//}
//int main(){
//	int n;
//	printf("Enter the number : ");
//	scanf("%d",&n);
//	
//	backPrinting(n);
//	return 0;
//}


// Printing Star 

#include<stdio.h>

void printingStar(int n){
	if(n>0){
		printingStar(n-1);
		for(int i=0;i<n;i++){
			printf("* ");
		}
		printf("\n");
		
	}
}
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printingStar(n);
	return 0;
}
