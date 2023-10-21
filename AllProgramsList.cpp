#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//.swapping using bitwise operator

void bitwise_swap(){
	int a=1;
	int b=2;
	printf("%d %d\n",a,b);
	a=a^b; //01+10=11=3
	b=a^b; //11+10=01=1
	a=a^b; //011+001=010
	printf("a = %d b = %d\n",a,b);
}

void add(int *p,int *q){
	int sum=*p+*q;
	printf("The sum of a + b is = %d \n",sum);
}

void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}


// 1. Write a C program to check Least Significant Bit (LSB) of a number is set or not.
void LSB(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if (n & 1) {
        printf("The least significant bit is set (LSB = 1).\n");
    } else {
        printf("The least significant bit is not set (LSB = 0).\n");
    }
}

// 2. Write a C program to check Most Significant Bit (MSB) of a number is set or not.

void MSB(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int bits=sizeof(int)*8;
	int msb=1<<(bits-1);
	if(n&msb){
		printf("MSB is set to 1\n");
	}
	else{
		printf("MSB is Set to 0\n");
	}
}


// 3. Write a C program to get nth bit of a number.

void NthBit(){
	int num;
	printf("Enter the numeber : ");
	scanf("%d",&num);

	int nthNumber;
	printf("Enter the nth position : ");
	scanf("%d",&nthNumber);

	if((num>>nthNumber)&1){
		printf("number %d in this the position of %d bit is 1 \n",num,nthNumber);
	}
	else{
		printf("number %d in this the position of %d bit is 0 \n",num,nthNumber);
	}
}

//4. Write a C program to set nth bit of a number.

void setNthBit(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	int nthBitPosition;
	printf("Enter the position : ");
	scanf("%d",&nthBitPosition);
	int setNthBit=(1<<nthBitPosition)|num;
	printf("Before setting the nth bit : ;%d\n",num);
	printf("After setting the nth bit%d\n",setNthBit);
}


// 5. Write a C program to clear nth bit of a number

void clearNthBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	int nthBitPosition;
	printf("Enter the position to clear : ");
	scanf("%d",&nthBitPosition);

	int newClearNthBit=(1<<nthBitPosition)^n;

	printf("Before cleaning the nth Bit : %d\n",n);
	printf("After cleaning the nth Bit : %d\n",newClearNthBit);
}


////////////////////////////////////////Pointer programs://////////////////////////////////////////////

// 2.Write a C program to add two numbers using pointers.

void add_using_Pointer(int *a,int *b){
	int sum=*a+*b;
	printf("The sum of 2 number is : %d\n",sum);
}

// 4. Write a C program to input and print array elements using pointer.

void array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&ptr[i]);
	}

	for(int i=0;i<n;i++){
		printf("%d ",*ptr);
		ptr++;
	}
}

// 5. Write a C program to copy one array to another using pointers.

void array1(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the %d elements : ",i+1);
		scanf("%d",&arr[i]);
	}
	int arr1[n];
	int *ptr=arr1;
	for(int i=0;i<n;i++){
		ptr[i]=arr[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ",ptr[i]);

	}
}

// 6. Write a C program to swap two arrays using pointers.

void array3(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	int arr2[n];
	int *ptr2=arr2;

	printf("Enter the 1 array elements \n");
	for(int i=0;i<n;i++){
		printf("Enter the %d elements : ",i+1);
		scanf("%d",&ptr[i]);
	}

	printf("Enter the 2 array elements \n");
	for(int i=0;i<n;i++){
		printf("Enter the %d elements : ",i+1);
		scanf("%d",&ptr2[i]);
	}


	for(int i=0;i<n;i++){
		int temp=*(ptr+i);
		*(ptr+i)=*(ptr2+i);
		*(ptr2+i)=temp;
    }

    printf("after swaping the array 1 list is : \n");
	for(int i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}


	printf("\n");
	printf("after swaping the array 2 list is : \n");
	for(int i=0;i<n;i++){
		printf("%d ",*(ptr2+i));
	}
}

// 7. Write a C program to reverse an array using pointers.
void array4(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	for(int i=0;i<n;i++){
		printf("Enter the %d elements : ",i+1);
		scanf("%d",&ptr[i]);
	}

	for(int i=n-1;i>=0;i--){
		printf("%d ",*(ptr+i));
	}
}

// 8. Write a C program to search an element in array using pointers.

int array5(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));

	for(int i=0;i<n;i++){
		printf("Enter the %d elements : ",i+1);
		scanf("%d",&arr[i]);
	}
	int key;
	printf("Enter the key elements : ");
	scanf("%d",&key);

	for(int i=0;i<n;i++){
		if(*(arr+i)==key){  // 	if(arr[i]==key){
			printf("%d Key found postion %d\n",key,i+1);
			return 0;
		}
	}
	printf("Not Found\n");
	return 0;
}

// 9. Write a C program to access two dimensional array using pointers.

void array6(){
	int row,col;
	printf("Enter the row and column size : ");
	scanf("%d%d",&row,&col);

	int arr[row][col];
	for(int i=0;i<row;i++){
		printf("Enter the elemets for %d row \n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter the %d elements : ",j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<row;i++){
		printf("Here %d row elements : \n",i+1);
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

// same program as above but difference is using pointer

void array7(){
	int row,col;
	printf("Enter the row and column size : ");
	scanf("%d%d",&row,&col);

	// for 2D array we need double pointer
	int **arr=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr[i]=(int*)malloc(col*sizeof(int));
	}


	for(int i=0;i<row;i++){
		printf("Enter the elemets for %d row \n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter the %d elements : ",j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<row;i++){
		printf("Here %d row elements : \n",i+1);
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


// 10. Write a C program to add two matrix using pointers.

void array8(){
	int row,col;
	printf("Enter the size of rows and cols : ");
	scanf("%d%d",&row,&col);


	// First 2D arrays
	int **arr1=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr1[i]=(int*)malloc(row*sizeof(int));
	}
	printf("Enter the first array elements \n");
	for(int i=0;i<row;i++){
		printf("Enter the %d row elements\n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter the %d element : ",j+1);
			scanf("%d",&arr1[i][j]);
		}
	}

	// second 2D arrays
	int **arr2=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr2[i]=(int*)malloc(row*sizeof(int));
	}
	printf("Enter the second array elements\n");
	for(int i=0;i<row;i++){
		printf("Enter the %d rows elements\n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter the %d element : ",j+1);
			scanf("%d",&arr2[i][j]);
		}
	}

	int **arr3=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr3[i]=(int*)malloc(row*sizeof(int));
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("\n");
	// printing the array
	for(int i=0;i<row;i++){
		printf("the %d row additions is \n",i+1);
		for(int j=0;j<col;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}


}

// 11. Write a C program to multiply two matrix using pointers.

void array9(){
	int row,col;
	printf("Enter the size of rows and columns : ");
	scanf("%d%d",&row,&col);

	int **arr1=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr1[i]=(int*)malloc(col*sizeof(int));
	}

	printf("Arra1 elements : \n");
	for(int i=0;i<row;i++){
		printf("Enter the %d row elements : \n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter the %d elemet : ",j+1);
			scanf("%d",&arr1[i][j]);
		}
	}

	int **arr2=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr2[i]=(int*)malloc(col*sizeof(int));
	}

	printf("\nArray2 elements : \n");
	for(int i=0;i<row;i++){
		printf("Enter the %d row elements : \n",i+1);
		for(int j=0;j<col;j++){
			printf("Enter the %d element : ",j+1);
			scanf("%d",&arr2[i][j]);
		}
	}

	// 3 array for storing the multiplayig of 2 array array and storing in the 3rd array

	int **arr3=(int**)malloc(row*sizeof(int*));
	for(int i=0;i<row;i++){
		arr3[i]=(int*)malloc(sizeof(int));
	}


	// multiplying and storing the values
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr3[i][j]=arr1[i][j]*arr2[i][j];
		}
	}

	// printing the multiplyed elemets

	for(int i=0;i<row;i++){
		printf("here is the %d row elemets : \n",i+1);
		for(int j=0;j<col;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}

}


// 12. Write a C program to find length of string using pointers.

void len_string(){
	char str[100];
	int count=0;
	printf("Enter the string : ");
	scanf("%s",str);
	char *str1=str;
	while(*str1!='\0'){
		count++;
		str1++;
	}
	printf("The string length is : %d\n",count);
}

// 13. Write a C program to copy one string to another using pointers.

void string_copy(){
	char str1[100];
	char str2[100];
	printf("Enter the string 1 : ");
	scanf("%s",str1);
	char *ptr=str1;
	int i=0;
	while(*ptr!='\0'){
		str2[i]=*ptr;
		i++;
		ptr++;
	}
	printf("The copy string of string 2 is : %s\n",str2);
}











void string_copy2();
void concatenate_str();



// String Programs:*************************************************************************************************





void cmp_str();
void cmp_str1();
void rev_str();
void rev_str2();
void sort_array();
void multiple();

void str1();
void strPolindrome();

void naturalNumber();
void EvenOdd();

void sumNatural();
void sumEvenOdd();
int main(){
// Pointer All Programs:
	int a=10;
	int b=20;
//	swap(&a,&b);
//	printf("%d %d\n",a,b);
//	add(&a,&b);
//	bitwise_swap();
//	LSB();
//	MSB();
//	NthBit();
//	setNthBit();
//	clearNthBit();
//	add_using_Pointer(&a,&b);
//	array();
//	array1();
//	array3();
//	array4();
//	array5();
//	array6();
//	array7();
//	array8();
//	array9();
//	len_string();
//	string_copy();
//	string_copy2();
//	concatenate_str();
//	cmp_str();
//	cmp_str1();
	rev_str();
//	rev_str2();
//	sort_array();
//	multiple();


//  String All Programs:
//    str1();
//    strPolindrome();

//	naturalNumber();
//	EvenOdd();
//	sumNatural();
//	sumEvenOdd();
//	reverseNumber();
	return 0;
}
