#include<stdio.h>
#include<stdlib.h>
// 14. Write a C program to concatenate two strings using pointers.

void concatenate_str(){

	// one string is created
	char *str1=(char*)malloc(100*sizeof(char));
	if(str1==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string1 : ");
		scanf("%s",str1);
	}

	// another string is created
	char *str2=(char*)malloc(100*sizeof(char));
	if(str2==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string2 : ");
		scanf("%s",str2);
	}

	// we are storing the str2 in str 1 so we have we have to count how many character in given string 1
	int count=0;
	char *ptr=str1;
	while(*ptr!='\0'){
		ptr++;
		count++;
	}
	printf("The count of string 1 is : %d\n",count);

	// concatinating str2 in str1
	int i = 0;
    while (str2[i] != '\0') {
        str1[count + i] = str2[i];
        i++;
    }
    str1[count + i] = '\0';
	printf("Concatinating of 2 string is : %s\n",str1);

}
