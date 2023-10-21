#include<stdio.h>

void findPosition(int *arr,int *n){
	int key;
	printf("Enter the number : ");
	scanf("%d",&key);

	for(int i=0;i<*n;i++){
		if(*(arr++)==key){
			printf("the elements %d is in position %d ",key,i);
		}
	}

//	for(int i=0;i<*n;i++){
//		if(arr[i]==key){
//			printf("the elements %d is in position %d ",key,i);
//		}
//	}
}

int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	findPosition(arr,&n);
	return 0;
}
