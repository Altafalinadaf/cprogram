#include<stdio.h>
int main(){
//	int a=10; // output 14 13 12 11 10
//	printf("%d %d %d %d %d",a++,a++,a++,a++,a++);
	
//	register int a=10; // output 14 13 12 11 10
//	printf("%d %d %d %d %d",a++,a++,a++,a++,a++);
	
//	register int a=10; // output 14 13 15 11 10
//	printf("%d %d %d %d %d",a++,a++,++a,a++,a++);
	
//	int a=10; // output 14 13 15 11 10
//	printf("%d %d %d %d %d",a++,a++,++a,a++,a++);

//	register int a=10+12; // output 26 25 27 23 22
//	printf("%d %d %d %d %d",a++,a++,++a,a++,a++);
	
	
	static int a=10+12; // output 26 25 25 23 22
	printf("%d %d %d %d %d",a++,a++,++a,a++,a++);
}
