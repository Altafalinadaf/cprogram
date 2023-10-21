#include<stdio.h>

void arrayRev(int *arr,int *size){
	printf("The reverse array is : \n");
	for(int i=*size-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	
		midValue(arr,size);
}


void midValue(int arr[],int size){
	printf("The middle value of array is : %d\n",arr[size/2]);
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int size =sizeof(arr)/sizeof(arr[0]);
	printf("The array before the Array \n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}

	arrayRev(arr,&size);
	return 0;
}
