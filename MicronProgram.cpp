#include<stdio.h>
void Even_Odd(){
	
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Number is Even ");
		
	}
	else{
		printf("Number is not Prime ");
		printf("\n");
	}
}

void Even_Odd_range(){
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the %d Number : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d = Even\n",arr[i]);
			
		}
		else{
			printf("%d = Odd\n",arr[i]);
		}
	}
}

void Max_Even_odd_Number(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	int max;
	int min;
	for(int i=0;i<n;i++){
		printf("Enter the %d Number : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		else{
			if(arr[i]<min){
				min=arr[i];
			}
			
		}
		
	}
	printf("The Max of Even number : %d\n",max);
	printf("The Max of Odd number : %d\n",min);
}
int main(){
//	Even_Odd();
//	Even_Odd_range();
//	Max_Even_odd_Number();
}
