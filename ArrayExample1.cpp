#include<stdio.h>

// this is the first program that i didn't done at test
void shifting(int *arr,int size){
	int pos;
	int n;
	printf("Enter the Position you want to add : ");
	scanf("%d",&pos);
	
	printf("Enter the number : ");
	scanf("%d",&n);
								  //  0  1  2  3  4
	for(int i=size-1;i>=pos;i--){ // 10 20 30 40 50
		 arr[i]=arr[i-1];         //       20  30 40
	}
	
	arr[pos-1]=n;
	
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

int main(){
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	shifting(arr,size);
	return 0;
}
