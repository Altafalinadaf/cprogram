/*
Please work on below topics by 20th Oct.

1. Enums & Macros
2. Typedef, type qualifiers and type quantifiers
3. Memorize all keywords
4. Number system conversion
5. Cmpilation stages in detail to view output of each stage
6. Pointer arithmatics
7. Structure Padding, Unions and Bitfields
8. String Method
9.  Dynamic memory allocation.
10. Minimum 20 built in functions like  memset(), getchar(), itoa() etc and Overview of minimum 4 header files.
*/


#include<stdio.h>
#include "MacrosTask3.h"
#include "NumberSystemTask3.h"
#include "PointerTask3.h"
// example 1
enum day{
	monday=10,
	tuesday=1,
	wednesday=0,
};

// example 2

enum months{
	jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec,
};


// Example 1
void display(){
	enum day d1;
//	d1=monday; // assigning the value of monday to d1
	printf("The day1 value is : %d\n",d1); // default value is zero


	enum day d2;
	d2=monday; // assigning the value of monday to d2
	printf("day2 value is : %d\n",d2);

	printf("tuesday value is : %d\n",tuesday);
	printf("wednesday value is : %d\n",wednesday);
}

// Example 2
void display2(){
	enum months m;
	// jan=1; // lvalue required as left operand of assignment
	int i;
	printf("**************************\nExample 2 \n");
	for(i=jan;i<=dec;i++){
		printf("%d\n",i);
	}
}

int main(){
	// Enums
//	display();
//	display2();

	// Micros
//	prime();
//	iPAddress();
	
	//Number System
//	binToDec();
//	decToBin();

	// pointers arthmatics
	pointers();
	pointers2();
	pointers3();
	pointers4();
	pointers5();
}
