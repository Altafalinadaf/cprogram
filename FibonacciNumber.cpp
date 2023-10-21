#include<stdio.h>

int main(){
	int n1=0,n2=1,sum;
	int n;
	printf("Enter the Finacci number : ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		sum=n1+n2;
		
		n1=n2;
		n2=sum;
		printf("%d ",sum);
	}
	
	return 0;
}


//#include<stdio.h>
//void arr_printf(int *arr){
//	printf("%d",*(arr+3));  // a[3] in C is equivalent to *(a + 3) in pointer notation.
// 
//}
//int main(){
//	int arr[]={1,23,45,6};
//	arr_printf(arr);
//	return 0;
//}
