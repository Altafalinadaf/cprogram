#include<stdio.h>
#include<stdlib.h>
void cmp_str1(){
	// string 1
	char *str1=(char*)malloc(100*sizeof(char));
	if(str1==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str1);
	}

	// string 2
	char *str2=(char*)malloc(100*sizeof(char));
	if(str2==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str2);
	}

	int count=0;
	int count1=0;
	int count2=0;

	// string 1 count
	char *ptr=str1;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}


	// string 2 count
	char *ptr2=str2;
	while(*ptr2!='\0'){
		count1++;
		ptr2++;
	}

	printf("%d %d\n",count,count1);
	if(count==count1){
		while(*str1!='\0' && *str2!='\0'){
			if(*str1==*str2){
			    printf("%c %c\n",*str1,*str2);
			    count2++;
			}
			str1++;
		   	str2++;
		}
	}
	printf("%d\n",count2);
	if(count==count2){
		printf("Both string are same \n");
	}
	else{
		printf("Both string are not same \n");
	}
}
