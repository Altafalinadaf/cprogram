#include<stdio.h>
int sum=10;
int add(int a,int b){
    sum=a+b;
	sum++;
	return sum;
}
int main(){
	
	printf("This is the example of auto : \n");
	// 3 ways of using the auto classes 
	int a=10;
	auto int b=20;
	int auto a1=1010;
	printf("The value of a and b is : %d and %d\n",a,b);
	printf("The value of a1 is : %d\n",a1);
	printf("********************************************\n");
	printf("This is the example of register : \n");
	register int c=30;
	int register c1=40;
	printf("The value of Register c and c1 : %d and %d\n",c,c1); 
	printf("********************************************\n");
	printf("This is the example of the static storage classes \n");
	int sum=add(2,3);
	printf("The sum of value is : %d\n",sum); // 5
	int sum1=add(2,8);
	printf("The sum of values is : %d\n",sum1); //5 // even we pass any of the value but we will the the privous output
	
	int sum2=add(3,4);
	printf("The sum of value is : %d\n",sum2);
	
	
	return 0;
}
