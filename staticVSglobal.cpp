#include<stdio.h>
//void fun2();
//void fun1(){
//	//x=20; // we cannot access the global x =10
//	// after writting the global variable below function can be access
//
//
////	 int x;
//	// to access the global variable above the global variable we need to use the extern keyboard then only we can accees
////	extern int x; //we need to wrwite the extern keyword along with the data type then only we can access
//
//	printf("fun1 x = %d\n",x);
//}
//
//int x=10; // global variable
//
//int main(){
//	fun1();
//	fun2();
//	printf("x = %d\n",x);
//}
//
//
//void fun2(){
//	x=90; // global variable is x
//	printf("fun2 x = %d\n",x); // 90
//}



// *******************************static variable is not applicable for this ************************

int fun1(int x){
	static int sum=0;
	sum+=x;
	return sum;
}


int main(){
//	printf("%d\n",fun1(5));
//	printf("%d\n",fun1(5));
//	printf("%d\n",fun1(5));
//	printf("%d\n",fun1(5));

 int a=10; //
   printf("%d %d %d %d",a++,++a,a++,++a); //   15 15 14 12 12 11       15 15 15 12 15 15
}

