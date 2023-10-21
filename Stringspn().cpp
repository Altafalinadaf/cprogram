#include<stdio.h>
#include<string.h>
int main(){
	char str1[20]="Hi how are you";
	char str2[7]="how";
	
	int len=strspn(str1,str2);
	printf("%d",len);
	return 0;
}
