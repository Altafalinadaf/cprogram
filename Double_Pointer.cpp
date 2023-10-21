#include<stdio.h>
#include<stdlib.h>

int main(){
	int row,col;
	printf("Enter the size of rows and columns : ");
	scanf("%d%d",&row,&col);
	int **ptr=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		*(ptr+i)=(int*)malloc(col*sizeof(int));
	}
	
	for(int i=0;i<row;i++){
		printf("Enter the %d elements : \n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter %d element : ",j+1);
			scanf("%d",&ptr[i][j]);
		}
	}
	
	printf("Array list \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",ptr[i][j]);
		}
		printf("\n");
	}
	
}
