#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("This is the Example of Malloc Function \n");
	// it intialize all the values as garbage values 
	int n;
	int *ptr;
	printf("Enter the size of an array : \n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int)); // syntax of malloc function 
	
	// once we make as free then it will free the array 
	// if we print the same array values after the free function we will get the garbage values 
    //	for(int i=0;i<n;i++){
    //		printf("The %d value is %d\n",i+1,ptr[i]);
    //	}
    
    // here i'm initializing each values 
	for(int i=0;i<n;i++){
		printf("Enter the %d element in array : ",i+1);
		scanf("%d",&ptr[i]);
	}
	
	for(int i=0;i<n;i++){
		printf("The %d value is %d\n",i+1,ptr[i]);
	}
	
	free(ptr);

    printf("This is the Example of Calloc function \n");
    // it initialize all the values as a 0 rather than the garbage values this is the one different
    printf("Enter the size of an array : \n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int)); // syntax of calloc function
    
    // if I print the values of an array of calloc i will get every value as 0 
    // because calloc intialize all the calloc values as the 0
    //	for(int i=0;i<n;i++){
    //		printf("The %d value is %d\n",i+1,ptr[i]);
    //	}
    
    
    // here i'm initializing all the values 
    for(int i=0;i<n;i++){
    	printf("Enter the %d element in array : ",i+1);
    	scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf("The %d value is %d\n",i+1,ptr[i]);
	}
	// to use realloc then we can't realloc 
	// if we use free then next we can't use the realloc 
//	free(ptr);  // it will free the that array space that we can store new array values 
	
	
	printf("This is the Example of ReAlloc Function \n");
	printf("Enter the new array size : \n");
	scanf("%d",&n);
	// by using realloc function we can creating new memory size in heap memory y
	ptr=(int*)realloc(ptr,n*sizeof(int)); // syntax of the realloc function
	for(int i=0;i<n;i++){
		printf("Enter the %d element in array : ",i+1);
		scanf("%d",&ptr[i]);
	} 
	for(int i=0;i<n;i++){
		printf("The %d value is %d\n",i+1,ptr[i]);
	}
	free(ptr);
	return 0;
}
