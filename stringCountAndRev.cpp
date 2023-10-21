#include<stdio.h>

int main(){
	char name[]="Harry";
	int count=0;
	int i=0;
	while(name[i]!='\0'){
		i++;
		count++;
	}
	int start=0;
	int end=count-1;
	printf("count of string is : %d\n",count);
	
	while(start<end){
		char temp=name[start];
		name[start]=name[end];
		name[end]=temp;
		start++;
		end--;
	}
	printf("rev string is = %s",name);
}
