#include<stdio.h>

int main(){
	printf("This is your First Array *****************\n");
	printf("Enter the size of Array : ");
	int size;
	scanf("%d",&size);
	int arr1[size];	
	printf("Enter the %d Elements Here \n",size);
	for(int i=0;i<size;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr1[i]);
	}
	for(int i=1;i<size;i++){
		for(int j=0;j<size-i;j++){
			if(arr1[j]>arr1[j+1]){
				int temp=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
			}
		}
	}
	printf("Here is the 1st aray List Below \n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr1[i]);
	}
	
	// second array 
	
	printf("This is your Second Array *****************\n");
	printf("Enter the size of Array : ");
	int size1;
	scanf("%d",&size1);
	int arr2[size1];	
	printf("Enter the %d Elements Here \n",size);
	for(int i=0;i<size1;i++){
	    printf("Enter the %d element : ",i+1);
     	scanf("%d",&arr2[i]);
	}
	
	for(int i=1;i<5;i++){
		for(int j=0;j<size1-i;j++){
			if(arr2[j]>arr2[j+1]){
				int temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	printf("Here is the 2nd aray List Below \n");
	for(int i=0;i<size1;i++){
		printf("%d\n",arr2[i]);
	}
	
	
	// merging of both the arrays
	int size3=size+size1;
	int arr3[size3];
	for(int i=0;i<10;i++){
		if(i<size){
			arr3[i]=arr1[i];
		}
		else{
			arr3[i]=arr2[i-size];
		}
	}
	printf("Merged list of Array \n");
	for(int i=0;i<size3;i++){
	  printf("%d\n",arr3[i]);
	}
	
	// here is the merged sorted array list 

	for(int i=1;i<size3;i++){
		for(int j=0;j<size3-i;j++){
			if(arr3[j]>arr3[j+1]){
				int temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
			}
		}
	}
	printf("Here is the 3rd array List Below \n");
	for(int i=0;i<size3;i++){
		printf("%d\n",arr3[i]);
	}
	
	
	return 0;
}
