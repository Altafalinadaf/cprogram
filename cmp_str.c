#include<stdio.h>
#include<stdlib.h>

// 15. Write a C program to compare two strings using pointers.

void cmp_str(){

	char *str1=(char*)malloc(100*sizeof(char));

	if(str1==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str1);
	}

	char *str2=(char*)malloc(100*sizeof(char));

	if(str2==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str2);
	}

	int count=0;
	int count1=0;
	int count2=0;

	char *ptr=str1;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}

	char *ptr2=str2;
	while(*ptr2!='\0'){
		count1++;
		ptr2++;
	}

	if(count==count1){
		while(*str1!='\0' && *str2!='\0'){
			if(*str1==*str2){
				count2++;
			}
			str1++;
			str2++;
		}
	}

	printf("%d %d %d\n",count,count1,count2);

	if(count==count2){
		printf("Both strings are same\n");
	}
	else{
		printf("Both string are not same\n");
	}
}
