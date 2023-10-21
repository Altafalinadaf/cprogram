#include<stdio.h>


// operators
// there are 3 operators
// 1.unary operator - only 1 operand use
// 2.binary operator - only 2 operabd use
// 3.ternary operator - only 3 operand use

// 1. exmaple of unary operator
// there are some example withe programs

void unary_operator(){
	int a=10;
	printf("This is the example of post-increment\n");
	printf("a is %d and a++ is = %d\n",a,a++);
	
	int b=11;
	printf("This is the example of post-decrement\n");
	printf("b is %d and b++ is = %d\n",b,b--);
	
	
	int c=10;
	printf("This is the example of pre-increment\n");
	printf("c is %d and ++c is = %d\n",c,++c);

	int d=11;
	printf("This is the example of pre-decrement\n");
	printf("d is %d and --d is = %d\n",d,--d);
	
	
	
	int p=1;
	printf("This is the example of unary not operator \n");
	printf("a not unary operator = %d\n",!p);
	printf("This will convert the value to zero and zero to value \n");
	
	int q=10;
	printf("This is the example of sizeof operator \n");
	printf("Both are same we can use sizeof(datatype) or sizeof(variable_name) both are same \n");
	printf("The sizeof(int) = %d\n",sizeof(int));
	printf("The sizeof(q) = %d\n",sizeof(q));
	
}

void binary_operator(){
	int a=10;
	int b=2;
	printf("this is the example of arithmatic operator \n");
	printf("a+b = %d\n",a+b);
	printf("a-b = %d\n",a-b);
	printf("a*b = %d\n",a*b);
	printf("a/b = %d\n",a/b);
	
	printf("This is the example of logical operators \n");
	printf("a&&b = %d\n",a&&b);
	printf("a||b = %d\n",a||b);
	
	printf("This is the example of bitwise operators \n");
	printf("a&b = %d\n",a&b);
	printf("a|b = %d\n",a|b);
	printf("a^b = %d\n",a^b);
	printf("a<<b = %d\n",a<<b);
	printf("a>>b = %d\n",a>>b);
	printf("~a = %d\n",~a); // 10+1=-11
	printf("b = %d\n",~b); // 2+1=3 = -3
	
	printf("This is the example of raltonal operators \n");
	if(a>b){
		printf("The a is greater than b\n");
		
	}
	if(a<b){
		printf("a is less than b \n");
	}
	if(a==b){
		printf("both a and b are same\n");
	}
	
	if(a!=b){
		printf("a is not eqaul to b \n");
	}
}


// ternary operators
// 3 operand we need for turnary operator
void ternary_operators(){
	int a=10;
	int b=20;
	
	printf("This is the example of ternary operator(a>b?a:b) : %d\n",a>b?a:b);
	
}
int main(){
	
	int n;
	printf("1.unary_operator()\n2.binary_operator()\n3.ternary_operators()\n");
	printf("Enter which one you want : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			unary_operator();
			break;
		case 2:
			binary_operator();
			break;
		case 3:
			ternary_operators();
			break;
		default :
			printf("Invalid option \n");
	}
	return 0;
}
