#include<stdio.h>
#include<string.h>
//int main(){
//	char s1[]={'A','L','I','A','S','\0'};
////	puts(s1);
//	printf("%s\n",s1);
//	
//	
//	// input taking from the user 
//	char s2[0];
////	gets(s2);
//    scanf("%s",&s2);
//	printf("%s\n",s2);
//	return 0;
//}

// *****************************************Code Vault Channels Video****************************************************

// strings Examples
// string declaration uses and how many ways we can declare

void string101(){
	char name[]="Hello!";
	printf("%s\n",str);
}

void print_string(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}

int main(){
	char str[]="harry";
	print_string(str);
	char str2[6]="Harry";
	puts(str2);
	return 0;
}
