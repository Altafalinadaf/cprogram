#include<stdio.h>

//int main(){
//	int size,min;
//	printf("Enter the size of an array : ");
//	scanf("%d",&size);
//	int arr[size];
//	
//	for(int i=0;i<size;i++){
//		printf("Enter the %d element : ",i+1);
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<size-1;i++){
//		min=i;
//		for(int j=i+1;j<size;j++){
//			if(arr[j]<arr[min]){
//				min=j;
//			}
//		}
//		int temp=arr[i];
//		arr[i]=arr[min];
//		arr[min]=temp;
//	}
//	
//	for(int i=0;i<size;i++){
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

//int bubbleSort(int arr[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(arr[j]>arr[j+1]){
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
//	return arr;
//}
//
//
//int main(){
//	int n;
//	printf("Enter the size of an array : \n");
//	scanf("%d",&n);
//	int arr[n];
//	
//	for(int i=0;i<n;i++){
//		printf("Enter the %d element : ",i+1);
//		scanf("%d",&arr[i]);
//		
//	}
//	
//	int *arr1=bubbleSort(arr,n);
//	printf("The sorted array list \n");
//	for(int i=0;i<n;i++){
//		printf("%d\n",arr1[i]);
//	}
//	printf("Here is the elements of an array : \n");
//	for(int i=0;i<n;i++){
//		printf("%d\n",arr1[i]);
//	}
//	int target;
//	printf("Enter the target value : \n");
//	scanf("%d",&target);
//	
//	int left=0;
//	int right=n-1;
//	
//	while(left<=right){
//		int mid=(left+right)/2;
//		if(arr1[mid]==target){
//			printf("%d element found in index of %d \n",target,mid);
//			return 0;
//		}
//		else if(arr1[mid]<target){
//			right=mid-1;
//		}
//		else{
//			left=mid+1;
//		}
//	}
//	printf("%d is not found\n",target);
//	return 0;
//}
