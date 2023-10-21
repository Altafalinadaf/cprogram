#include<stdio.h>
#include<string.h>

// String Method

// string length

void strLen(){
	// 1. string length
	char str[10];
	printf("Enter the string : ");
	scanf("%s",&str);
	printf("String size is : %d\n",strlen(str));
}

// string concatination
void strCon(){
	char str1[10];
	char str2[20];
	printf("Enter the string1 and string2 : ");
	scanf("%s%s",str1,str2);
	printf("string1 is : %s\nString2 is : %s\n",str1,str2);
	
	strcat(str1,str2);
	printf("Concatination of string1 is : %s\n",str1);
}

// string copy

void strCpy(){
	char str1[10];
	char str2[20];
	
	printf("Enter the string1 : ");
	scanf("%s",str1);
	printf("string1 is : %s\n",str1);

	strcpy(str2,str1);
	printf("Copy string2  is : %s\n",str2);

}

// string n - copy

void strNCpy(){
	char str1[10];
	char str2[20];
	
	printf("Enter the string1 : ");
	scanf("%s",str1);
	printf("string1 is : %s\n",str1);
	int n;
	printf("How many character you want to copy : ");
	scanf("%d",&n);
	strncpy(str2,str1,n);
	printf("Copy string2  is : %s\n",str2);
}

// string compare

void strCmp(){
	char str1[10];
	char str2[20];
	
	printf("Enter the string1 and string2 : ");
	scanf("%s%s",str1,str2);
	printf("string1 is : %s\nString2 is : %s\n",str1,str2);

	if((strcmp(str1,str2)==0)){
		printf("Both string are same \n");
	}
	else{
		printf("Both string are not same \n");
	}
}

// string first occurence

void strChr(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	char character;
	printf("which character you want to find : ");
	scanf("%s",&character);
	char* res=strchr(str,character);
	printf("%c\n",*res);
	if(res){
		printf("%c find in %d\n",character,res-str);
		
	}
	else{
		printf("not\n");
	}
	
}

// finding first occurence of sub string
void strStr(){
	char str[10],str2[20];
	printf("Enter the string : ");
	scanf("%s",str2);
	
	printf("string is : %s\n",str2);
	
	printf("Enter sub string : ");
	scanf("%s",str);
	
	char *res=strstr(str2,str);
	
	if(res){
		printf("Find\n");
	}
	else{
		printf("not\n");
	}
}

// strrchr(): This function searches for the last occurrence of a character in a string.

void strRChr(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);

	char character;
	printf("which character you want to find : ");
	scanf("%s",&character);
	char* res=strrchr(str,character);
	printf("%c\n",*res);
	if(res){
		printf("%c find in %d\n",character,res-str);

	}
	else{
		printf("not\n");
	}

}
int main(){
//	strLen();
//	strCon();
//	strCpy();
//	strNCpy();
//	strCmp();
//	strChr();
//	strStr();
	strRChr();
}
