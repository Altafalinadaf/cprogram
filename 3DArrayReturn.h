#include<stdio.h>
#include<stdlib.h>


int*** TdArray1(int array,int row,int col){
	int i,j,k;

	int ***arr=(int***)malloc(array*sizeof(int**));
	for(i=0;i<col;i++){
		arr[i]=(int**)malloc(row*sizeof(int*));
		for(k=0;k<col;k++){
			arr[i][j]=(int*)malloc(col*sizeof(int));
		}
	}


	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter %d row elements : \n",j+1);
			for(k=0;k<col;k++){
				printf("%d element : ",j+1);
			    scanf("%d",&arr[i][j][k]);
			}
		}

	}
	return arr;
}

void display1(){
	int array,row,col;
	int i,j,k;
	printf("Enter the row and col : ");
	scanf("%d%d%d",&row,&col);

	int ***arr1=TdArray1(array,row,col);
	printf("Displaying the 2D array:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
           for(k=0;k<col;k++){
           	   printf("%d ",arr1[i][j][k]);
		   }
		   printf("\n");
        }
        printf("\n");
    }
}

//
//int main(){
//	display1();
//}
