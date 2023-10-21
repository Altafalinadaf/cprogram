// 17. Write a C program to sort array using pointers.
#include<stdio.h>
#include<stdlib.h>

void sort_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements of array \n");

	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	// sorting the array
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(*(arr+j)>*(arr+j+1)){
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}

	// printing the array
	for(int i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}
