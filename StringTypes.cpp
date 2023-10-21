#include<stdio.h>
#include<string.h>
int main(){
	char s1[10]="Ali";
	char s2[10]="Ali";
	// 1st type of string type
	printf("This is the cancatination of String \n");
	puts(strcat(s1,s2));  // concatination of two string 
	
	
	// 2nd type of string type 
	printf("This is the reversing of String \n");
	puts(strrev(s1));
	
	
	//3rd type of String type 
	printf("This is the checking the length of String \n");
	printf("%d\n",strlen(s1));
	
	
	// 4th type of string type
	printf("This is way of comparing the String \n");
	printf("%d\n",strcmp(s1,s2));
	if(strcmp(s1,s2)){
		printf("The given string is same \n");
	} 
	else{
		printf("The given string is not same \n");
	}
	
	// 5th type of String type 
	printf("This is way of copying string from one string to another string \n");
	char s3[30];
	strcpy(s3,s2);
	puts(s3);
	
	// another way of type 5 
	
	printf("First concatinating 2 string and then copy that string to another string \n");
	char a[]="ALi";
	char b[]="AS";
	char c[40];
	strcpy(c,strcat(a,b));
	puts(c);
	return 0;
}
