#include<stdio.h>

void strPolindrome(){
	char str[50];
	printf("Enter the string : ");
	scanf("%s",str);
	int len=0;
	int i=0;
	bool flag=0;
	while(*(str+i)!='\0'){
		len++;
		i++;
	}
	printf("string length is : %d\n",len);
	int n=0;
	while(n<len/2){
		if(*(str+n)==*(str+len-1-n)){   // 0 4 // 1 5-1-1 3// 2 5-1-22
			flag=1;
			printf("*\n");

		}
		else{
			flag=0;
			break;
		}

		n++;

	}
	if(flag==1){
		printf("Polindrome");
	}
	else{
		printf("Not");
	}

}
