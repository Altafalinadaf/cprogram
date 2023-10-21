#include<stdio.h>
#include<stdlib.h>
int displayP12(int *p,int *q){
	int c=*p+*q;
	return c;
	
}

void pointer12(){
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);

	int *p=&a;
	int *q=&b;

	int p2=displayP12(p,q);
	printf("a + b = %d\n",p2);

}

// pass by referenece

int* displayP2(int *p,int *q){
    int *c=(int*)malloc(sizeof(int));
	*c=*p+*q;
	return c;


}

void pointer2(){
	int a,b;
	printf("Enter the a and b value : ");
	scanf("%d%d",&a,&b);

	int *p=&a;
	int *q=&b;

	int *p2=displayP2(p,q);
	printf("a + b = %d\n",*p2);
}

