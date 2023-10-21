#include<stdio.h>
#include<stdlib.h>

void rev_str(){
	char *str=(char*)malloc(100*sizeof(char));
	if(str==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string : ");
		scanf("%s",str);
	}

	char *ptr=str;
	int count=0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
	printf("%d\n",count);

	for(int i=0;i<(count-1)/2;i++){
		char temp=*(str+i);
		*(str+i)=*(str+count-i-1);
		*(str+count-i-1)=temp;
	}
	printf("%s",str);
}
