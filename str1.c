#include<stdio.h>

//  1. Write a C program to find length of a string.

void str1(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	int count=0;
	int i=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	printf("The string length is : %d\n",count);
}
