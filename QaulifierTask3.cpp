#include<stdio.h>

// TypeDef Example
void typeDef(){
	int a;
	a=10;
	printf("a value is : %d\n",a);

	typedef int integer;
	integer b=10;
	printf("b value is : %d\n",b);

	typedef char str;
	str name[10]="hello";
	printf("name is : %s\n",name);
}

// Qaulifiers
// 1.const
void constant(){
	const int a=10;
	printf("const a is : %d",a);
// 	a=11; // read only variable a

}

void volatile1(){
	volatile int a=10;
	a=12;
	printf("const a is : %d",a);
	
	
}
int main(){
	typeDef();
	constant();
	volatile1();
}


