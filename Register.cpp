#include<stdio.h>

int main(){
	int arr[]={12,34,56,12,56,65,75,78,34};
	
	for(int i=0;i<9;i++){
		//int temp=arr[i];
		for(int j=i+1;j<9;j++){
			if(arr[i]==arr[j]){
				printf("%d ",arr[j]);
			}
		}
	}
}
