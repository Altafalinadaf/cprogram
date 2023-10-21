#include<stdio.h>
#include<stdlib.h>
#include "threeDArrayReturn.h"
#include "StringReturn.h"
#include "StructureReturnType.h"
#include "PointerReturnType.h"


int** TdArray(int row,int col){
	int i,j;
	int **arr=(int**)malloc(row*sizeof(int*));
	for(i=0;i<col;i++){
		arr[i]=(int*)malloc(row*sizeof(int));
	}

	
	for(i=0;i<row;i++){
		printf("Enter %d row elements : \n",i+1);
		for(j=0;j<col;j++){
			printf("%d element : ",j+1);
			scanf("%d",&arr[i][j]);
		}

	}

	return arr;
}

void display(){
	int row,col;
	printf("Enter the row and col : ");
	scanf("%d%d",&row,&col);

	int **arr1=TdArray(row,col);
	printf("Displaying the 2D array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}


int main(){
	printf("Example of 2d array \n");
	display();
	printf("*****************************************************************************************\n\n");
	printf("Example of 3d array \n");
//	display1();
	printf("*****************************************************************************************\n\n");
    printf("Example of String pass by value \n");
	string1();
	printf("*****************************************************************************************\n\n");
	printf("Example of String pass by reference \n");
	string2();
	printf("*****************************************************************************************\n\n");
    printf("Example of Structure pass by value \n");
    displayStruct();
    printf("*****************************************************************************************\n\n");
    printf("Example of Structure pass by reference \n");
    displayStruct2();
    printf("*****************************************************************************************\n\n");
    printf("Example of Pointers pass by value \n");
    pointer12();
    printf("*****************************************************************************************\n\n");
    printf("Example of Pointers pass by reference \n");
    pointer2();
}
