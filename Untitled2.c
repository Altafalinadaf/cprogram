#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

int main(int argc, char *argv[]) {
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the %d elements\n",size);
	for(int i=0;i<size;i++) {
		printf("Enter the %d element : ",i);
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,size);
	return 0;
}
