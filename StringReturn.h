#include<stdio.h>
#include<string.h>
// Strings example
// pass by value
char* display3(char str[100]){
	printf("Enter the string : ");
	scanf("%s",str);
	return str;
	
}
void string1(){
	char str[100];
	char *str2=display3(str);
	printf("%s\n",str2);
}


// pass by reference
char* displayStr4(char *str){
	printf("Enter the string ");
	scanf("%s",str);
	return str;
	
}

int string2(){
	char str[100];

	char *str2=displayStr4(str);
	printf("%s\n",str);
}
