#include<stdio.h>
#include<stdlib.h>


void pointer_addition(){
	int arr[]={2,3,4,5,6,7};
	int *p=arr; //pointing the base address
	printf("This is the example of adding pointer or addition of pointer : \n");
	printf("the p index addrees value is : %d\n",*p);
	p=p+2; // adding to pointer position // first it pointing base address after it increment to 2 position
	printf("the p+2 index addrees value is : %d\n",*p);
	
	p+=2;
	printf("the p+2+2 index addrees value is : %d\n",*p);
	printf("\n\n");
	
}

void pointer_substraction(){
	int arr[]={2,3,4,5,6,7};
	int *p=&arr[5]; //pointing the 5th index  address
	printf("This is the example of substracting pointer or substraction of pointer : \n");
	printf("the p index addrees value is : %d\n",*p);
	p=p-2; // adding to pointer position // first it pointing 5th address after it decrement to 2 position
	printf("the p-2 index addrees value is : %d\n",*p);
	p+=2; // decrement 2
	printf("the p-2-2 index addrees value is : %d\n",*p);\
	printf("\n\n");

}

int showPointer(){
	printf("1.pointer_addition()\n2.pointer_substraction()\n");
	int input;
	printf("Enter the any one : ");
	scanf("%d",&input);
	switch(input){
		case 1:
			pointer_addition();
			break;
		case 2:
			pointer_substraction();
			break;
		default:
			printf("Invalid input \n");
	}
	return 0;
}
