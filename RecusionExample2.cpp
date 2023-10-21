#include<stdio.h>


int fib(int n){
	if(n==0 ){
		return n;
	}
	else if(n==1){
		return n;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
int main(){
	int n;
	int a=3;
	int b=2;
	printf("The value of A&B is : %d\n",a&b);
	printf("The value of A|B is : %d\n",a|b);
	printf("The value of A^B is : %d\n",a^b);
	printf("Enter the value : ");
	scanf("%d",&n);
	printf("The fib of given value is : %d",fib(n));
	return 0;
}

//#include <stdio.h>
//
//int fib(int n){
//    if (n == 0) {
//        return 0; // Base case for fib(0)
//    } else if (n == 1) {
//        return 1; // Base case for fib(1)
//    } else {
//        return fib(n - 1) + fib(n - 2); // Recursive calculation
//    }
//}
//
//int main(){
//    int n;
//    printf("Enter the value : ");
//    scanf("%d", &n);
//    printf("The fib of given value is : %d", fib(n));
//    return 0;
//}

