#include<stdio.h>
/*
Time Complexity: O(n)
Auxiliary Space: O(1) as no extra space was needed.

In this method, the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case.
In the above implementation, the worst case occurs when elements are sorted in descending order and
the best case occurs when elements are sorted in ascending order.

*/

struct pair{
	int max;
	int min;
};

struct pair getMaxMin(int arr[],int n){
	struct pair maxMin;
	int i=0;
	

    /*If there is only one element then return it as min and max both*/
	if(n==1){
		maxMin.max=arr[0];
		maxMin.min=arr[0];
		return maxMin;
	}
	
	if(arr[0]>arr[1]){
		maxMin.max=arr[0];
		maxMin.min=arr[1];
		
	}
	else{
		maxMin.max=arr[1];
		maxMin.min=arr[0];

	}

	for(int i=2;i<n;i++){
		if(maxMin.max<arr[i]){
			maxMin.max=arr[i];
		}
		else if(maxMin.min>arr[i]){
			maxMin.max=arr[i];
		}


	}
	return maxMin;
}

int main(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d elements in array \n",n);

	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	struct pair minMax=getMaxMin(arr,n);
	printf("max is : %d\n",minMax.max);
	printf("min is : %d\n",minMax.min);
}
