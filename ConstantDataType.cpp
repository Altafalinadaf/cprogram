#include<stdio.h>
int main(){
//	int a=10;
//	a=20;
//	printf("the a value is : %d\n",a);
//	
//
//
//// Both the example's are same 	
//	const int b=10;
////	b=20; // assignment of read-only variable 'b'
//	printf("the const int b value is : %d\n",b);
//
//	int const c=10;
//	//c=20; //  assignment of read-only variable 'c'
//	printf("the int const c value is : %d\n",c);
//	
//	
//	printf("First Step of Constant\n");
//	// we cannot modify the values 
//	// we can modify the address
//	// we can also points multiple variables 
//	
//	int d=10;
//	int d22=1000;
//	const int *ptr=&d; //here the value is constant but not address
//	ptr=&d22;  // here is we are assigning we address to the ptr
//
//	
////	*ptr=&d;//  assignment of read-only variable 'd'
//	printf("The value of pointers is : %d\n",*ptr);
//	
//	// we can also points multiple variables 
//	int d1=12,d2=13;
//	const int *ptr1=&d1,*ptr2=&d2;
//	printf("the value of two pointers is : %d and %d\n",d1,d2);
//	
//	printf("Second Step of Constant\n");
//	// address is constant
//	// we can assign new values but not constant
//	// it's pointing to only single values
//	int a1=16;
//	int a22=20;
//	int *const ptr5=&a1;
////	ptr5=&a1; // assignment of read-only variable 'a1'	
//	printf("The value of constant pointer : %d\n",*ptr5);
//	
//	
//	printf("Third Step of Constant\n");
//	// the constant pointing to the single variable
//	// we cannot assign the value to the pointers
//	// we cannot assign the address to the pointers 	
//	const int *const ptr7=&a1;
//	printf("The value of constant int constant pointer : %d\n",*ptr7);

	int a=10;
	int *b=&a;
	printf("%d",*b);
	return 0;
}
