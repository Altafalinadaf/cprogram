#include<stdio.h>
#include<stdlib.h>
// same as privous program

void string_copy2(){
	char *str1=(char*)malloc(100*sizeof(char));
	if(str1==NULL){
		printf("Memory is not allocated \n");
	}

	printf("Enter the string 1 : ");
	scanf("%s",str1);


	char *str2=(char*)malloc(100*sizeof(char));
	if(str2==NULL){
		printf("Memory is not allocated \n");
	}
	int i=0;
	while(*str1!='\0'){
		*(str2+i)=*str1;
		i++;;
		str1++;
	}
	printf("The copy string of string 2 is : %s\n",str2);

	free(str1);
	free(str2);
}
