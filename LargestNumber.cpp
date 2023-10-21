#include<stdio.h>

int main(){
	int arr[]={2,304,56,6,7,45,90,70,60};
	
	int max1;
	int max2;
	int max3;
	
	for(int i=0;i<9;i++){
		if(arr[i]>max1){
			max3=max2;
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2){
			max3=max2;
			max2=arr[i];
		}
		else if(arr[i]>max3){

			max3=arr[i];
		}
	}
	
	printf("Max 1 : %d\n",max1);
	printf("Max 2 : %d\n",max2);
	printf("Max 2 : %d\n",max3);
}


