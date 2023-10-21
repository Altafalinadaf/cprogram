#include<stdio.h>
#include<stdlib.h>

// 16. Write a C program to find reverse of a string using pointers.


void rev_str2(){
	char *str=(char*)malloc(100*sizeof(char));

	if(str==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string : ");
		scanf("%s",str);
	}

	int count=0;
	char *ptr=str;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}

	int start=0;
	int end=count-1;

	while(start<end){
		char temp=*(str+start);
		*(str+start)=*(str+end);
		*(str+end)=temp;
		start++;
		end--;
	}

	printf("The reverse string is : %s\n",str);
}
