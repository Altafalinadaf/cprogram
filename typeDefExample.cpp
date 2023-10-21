#include<stdio.h>
int main(){
	
	typedef int interger; // here we are giving the alias name to int to integer
	interger a4=19;
	printf("%d\n",a4);
	
	
	typedef char b2;
	b2 a3='A';
	printf("%c\n",a3);

	
	//we can assign the same for any dataypes even structure also
	// for pointer here we can use like this
	int c=10;
	int d=20;
	int* a,b; // here it will take first variable as a pointer remainings are the int variable
	a=&c;
	b=10; // it will take this as int variable so that we can assign the value
	printf("%d\n",*a);
	printf("%d\n",b);
	
	typedef int* pointer; // here we give the alias name to the int* pointer to pointer that we can directle declare the value for the pointer
	pointer aaa,bbb; // here it will take first variable as a pointer remainings are the int variable
	aaa=&c;
	bbb=&d; // it will take this as int variable so that we can assign the value
	printf("%d\n",*aaa);
	printf("%d\n",*bbb);
	return 0;
}
