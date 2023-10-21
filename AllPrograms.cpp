#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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

void toggleBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos;
	printf("Enter the pos : ");
	scanf("%d",&pos);
//	pos=pos-1;
	int bit=((1<<pos-1)^n); // 1 0 1 0
					    	// 0 1 0 0
	printf("The new value is : %d\n",bit);

}


void highBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=32;i>=0;i--){
		if((n>>i)&1){
			pos=i;
			break;
		}
	}
	printf("The High index of 1 bit is : %d",pos+1);
}


void highBit1(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=32;i>=0;i--){
		if((1<<i)&n){
			pos=i;
			break;
		}
	}
	printf("The high index of 1 bit is : %d",pos+1);
}

void lowBit2(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=32;i>=0;i--){
		if((1<<i)&n){
			pos=i;
		}
	}
	printf("The low index of 1 bit is : %d",pos+1);
}


void lowBit13(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=0;i<=32;i++){
		if((n>>i)&n){
			pos=i;
			break;
		}
	}
	printf("The low index of 1 bit is : %d",pos+1);
}

void lowBit1(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=0;i<=32;i++){
		if((n>>i)&1){
			pos=i;
			break;
		}
	}
	printf("The low index of 1 bit is : %d",pos+1);
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


// same as privous program

void string_copy2(){
	char *str1=(char*)malloc(100*sizeof(char));
	if(str1==NULL){
		printf("Memory is not allocated \n");
	}

	printf("Enter the string 1 : ");
	scanf("%s",str1);


	char *str2=(char*)malloc(100*sizeof(char));
	if(str2==NULL){
		printf("Memory is not allocated \n");
	}
	int i=0;
	while(*str1!='\0'){
		*(str2+i)=*str1;
		i++;;
		str1++;
	}
	printf("The copy string of string 2 is : %s\n",str2);

	free(str1);
	free(str2);
}

// 14. Write a C program to concatenate two strings using pointers.

void concatenate_str(){

	// one string is created
	char *str1=(char*)malloc(100*sizeof(char));
	if(str1==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string1 : ");
		scanf("%s",str1);
	}

	// another string is created
	char *str2=(char*)malloc(100*sizeof(char));
	if(str2==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string2 : ");
		scanf("%s",str2);
	}

	// we are storing the str2 in str 1 so we have we have to count how many character in given string 1
	int count=0;
	char *ptr=str1;
	while(*ptr!='\0'){
		ptr++;
		count++;
	}
	printf("The count of string 1 is : %d\n",count);

	// concatinating str2 in str1
	int i = 0;
    while (str2[i] != '\0') {
        str1[count + i] = str2[i];
        i++;
    }
    str1[count + i] = '\0';
	printf("Concatinating of 2 string is : %s\n",str1);

}

// 15. Write a C program to compare two strings using pointers.

void cmp_str(){

	char *str1=(char*)malloc(100*sizeof(char));

	if(str1==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str1);
	}

	char *str2=(char*)malloc(100*sizeof(char));

	if(str2==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str2);
	}

	int count=0;
	int count1=0;
	int count2=0;

	char *ptr=str1;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}

	char *ptr2=str2;
	while(*ptr2!='\0'){
		count1++;
		ptr2++;
	}

	if(count==count1){
		while(*str1!='\0' && *str2!='\0'){
			if(*str1==*str2){
				count2++;
			}
			str1++;
			str2++;
		}
	}

	printf("%d %d %d\n",count,count1,count2);

	if(count==count2){
		printf("Both strings are same\n");
	}
	else{
		printf("Both string are not same\n");
	}
}

void cmp_str1(){
	// string 1
	char *str1=(char*)malloc(100*sizeof(char));
	if(str1==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str1);
	}

	// string 2
	char *str2=(char*)malloc(100*sizeof(char));
	if(str2==NULL){
		printf("Memory is not allocated \n");
	}
	else{
		printf("Enter the string 1 : ");
		scanf("%s",str2);
	}

	int count=0;
	int count1=0;
	int count2=0;

	// string 1 count
	char *ptr=str1;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}


	// string 2 count
	char *ptr2=str2;
	while(*ptr2!='\0'){
		count1++;
		ptr2++;
	}

	printf("%d %d\n",count,count1);
	if(count==count1){
		while(*str1!='\0' && *str2!='\0'){
			if(*str1==*str2){
			    printf("%c %c\n",*str1,*str2);
			    count2++;
			}
			str1++;
		   	str2++;
		}
	}
	printf("%d\n",count2);
	if(count==count2){
		printf("Both string are same \n");
	}
	else{
		printf("Both string are not same \n");
	}
}

// 16. Write a C program to find reverse of a string using pointers.
void rev_str(){
	char *str=(char*)malloc(100*sizeof(char));
	if(str==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string : ");
		scanf("%s",str);
	}

	char *ptr=str;
	int count=0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
	printf("%d\n",count);

	for(int i=0;i<(count-1)/2;i++){
		char temp=*(str+i);
		*(str+i)=*(str+count-i-1);
		*(str+count-i-1)=temp;
	}
	printf("%s",str);
}

void rev_str2(){
	char *str=(char*)malloc(100*sizeof(char));

	if(str==NULL){
		printf("Memory is not allocated\n");
	}
	else{
		printf("Enter the string : ");
		scanf("%s",str);
	}

	int count=0;
	char *ptr=str;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}

	int start=0;
	int end=count-1;

	while(start<end){
		char temp=*(str+start);
		*(str+start)=*(str+end);
		*(str+end)=temp;
		start++;
		end--;
	}

	printf("The reverse string is : %s\n",str);
}

// 17. Write a C program to sort array using pointers.

void sort_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements of array \n");

	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	// sorting the array
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(*(arr+j)>*(arr+j+1)){
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}

	// printing the array
	for(int i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}

// 18. Write a C program to return multiple value from function using pointers.

void multiple_values(int *a,int *b,int *c){
	*a=100;
	*b=200;
	*c=300;
}
void multiple(){
	int n,n2,n3;

	multiple_values(&n,&n2,&n3);

	printf("The n value is : %d\n",n);
	printf("The n2 value is : %d\n",n2);
	printf("The n3 value is : %d\n",n3);

}

// String Programs:*****************************************************************************************************************

//  1. Write a C program to find length of a string.

void str1(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	int count=0;
	int i=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	printf("The string length is : %d\n",count);
}

//  write a c program to find the length of a string.
void strPolindrome(){
	char str[50];
	printf("Enter the string : ");
	scanf("%s",str);
	int len=0;
	int i=0;
	bool flag=0;
	while(*(str+i)!='\0'){
		len++;
		i++;
	}
	printf("string length is : %d\n",len);
	int n=0;
	while(n<len/2){
		if(*(str+n)==*(str+len-1-n)){   // 0 4 // 1 5-1-1 3// 2 5-1-22
			flag=1;
			printf("*\n");

		}
		else{
			flag=0;
			break;
		}

		n++;

	}
	if(flag==1){
		printf("Polindrome");
	}
	else{
		printf("Not");
	}

}

// 1. Write a C program to print all natural numbers between 1 to n using recursion.

void print(int start,int n){
	if(start<=n){
		printf("%d ",start);
		print(start+1,n);
	}
}

void naturalNumber(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if(n<0){
		printf("Please write the positive number \n");
	}
	else{
		printf("The natural is 1 to %d is : ",n);
		print(1,n);
		printf("\n");
	}
}

// 2. Write a C program to print all even or odd numbers in given range using recursion.

#include <stdio.h>

void printEvenOddNumber(int start,int end,int choice){
	if(start>end){
		return ;
	}
	else if((choice==1 && start%2==0) || (choice==2 && start%2!=0)) {
		printf("%d ",start);
	}
	
	printEvenOddNumber(start+1,end,choice);
}

void EvenOdd(){
	int start,end,choice;
	printf("Enter the starting range : ");
	scanf("%d",&start);
	
	printf("Enter the ending range : ");
	scanf("%d",&end);
	
	printf("Enter\n1 for Even\n2 for Odd\n");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("Even number from 0 to %d \n",start);
	}
	else if(choice==2){
		printf("Odd number from 0 to %d \n",start);
	}
	else {
		printf("Please enter the correct choice \n");
	}
	
	printEvenOddNumber(start,end,choice);
}


// 3. Write a C program to find sum of all natural numbers between 1 to n using recursion.

int naturalSum(int start,int end){
	int sum=0;
	if(start>end){
		return 0;
	}
	else {
		return start+naturalSum(start+1,end);
	}
}

void sumNatural(){
	int n;
	printf("Enter the natural number : ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Please enter the positive number \n");
	}
	else if(n>0){
		printf("some of natural number is : \n");
   }

	int sum=naturalSum(0,n);
	printf("Some of Natural number is : %d\n",sum);
}

// 4. Write a C program to find sum of all even or odd numbers in given range using recursion.

int printSumEvenOdd(int start,int end,int choice){
	int sum=0;
	if(start>end){
		return 0;
	}

	else if((choice==1 && start%2==0) ||(choice==2 && start%2!=0)){
		sum=start;
	}
	return sum+printSumEvenOdd(start+1,end,choice);
}
void sumEvenOdd(){
	int start,end,choice;
	printf("Enter the starting range : ");
	scanf("%d",&start);
	
	printf("Enter the ending  range : ");
	scanf("%d",&end);
	
	printf("Enter\n1 for EvenSum\n2 for OddSum");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("The sum of even number from %d to %d = ",start,end);
	}
	else if(choice==2){
		printf("The sum of odd number from %d to %d = ",start,end);
	}
	else{
		printf("Wrong input");
	}
	
	int sum=printSumEvenOdd(start,end,choice);
	printf("%d",sum);
}


// number to binary;

void convertBinary(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int bit[32];
	int i=0;
	while(n>0){
		int rem=n%2;
		bit[i]=rem;
		n/=2;
		i++;
	}
	
	for(int j=i-1;j>=0;j--){
		printf("%d ",bit[j]);
	}
}

// convert binary to decimal

void strToDecimal(){
	char str[10];
	printf("Enter the string : ");
	scanf("%s",str);
	int size=strlen(str);
	int decimal=0;
	int bit=0;
	for(int i=size-1;str[i]!='\0';i--){
		if(str[i]=='1'){
			decimal+=1<<bit; // decimal = decimal+1<<bit // 1 // 2 // 5
		}
		bit++;  // 110 
	}
	printf("%d\n",decimal);

}

// 2. Write a C program to copy one string to another string.

void strCopy(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	char str2[100];
	int i=0;
	while(str[i]!='\0'){
		str2[i]=str[i];
		i++;
	}
	
	printf("The string2 is : %s\n",str2);
}

// 3. Write a C program to concatenate two strings.

void strCon(){
	char str1[100];
	char str2[100];
	
	printf("Etner the string 1 : ");
	scanf("%s",str1);
	
	printf("Enter the string 2 : ");
	scanf("%s",str2);
	
	int len=0;
	while(str1[len]!='\0'){
		len++;
	}
	printf("The length of string 1 is : %d\n",len);
	int i=0;
	
	while(str2[i]!='\0'){
		str1[len+i]=str2[i];
		i++;
	}
	
	printf("The concatination of string is : %s\n",str1);
}


// 4. Write a C program to compare two strings.

void strCmp(){
	char str1[100];
	printf("Enter the string 1 : ");
	scanf("%s",str1);
	
	char str2[100];
	printf("Enter the string 2 : ");
	scanf("%s",str2);
	int i=0;
	bool flag=1;
	while(str1[i]!='\0'){
		if(str1[i]==str2[i]){
			flag=0;
			
		}
		else{
			flag=1;
			break;
		}
		i++;
	}
	
	if(flag==0){
		printf("String is Same \n");
	}
	else{
		printf("String is not Same \n");
	}
}


// 5. Write a C program to find total number of alphabets, digits or special character in a string.

void countAlph(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str); // altafalinadaf@gmail.com
	
	printf("The string is : %s\n",str);
	int vowelCount=0;
	int conCount=0;
	int numCount=0;
	int sepCount=0;
	for(int i=0;str[i]!='\0';i++){
		char ch=str[i];
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
			vowelCount++;
		}
		else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
			conCount++;
		}
		else if(ch>='0' && ch<='9'){
			numCount++;
		}
		else{
			sepCount++;
		}
	}
	printf("Total vowel char count : %d\n",vowelCount);
	printf("Total con char count : %d\n",conCount);
	printf("Total num count : %d\n",numCount);
	printf("Total spe char count : %d\n",sepCount);
}

// 6. Write a C program to count total number of vowels and consonants in a string.

void vowConCount(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	int vowCount=0;
	int conCount=0;
	
	char str2[]="aeiou";
	
	for(int i=0;str[i]!='\0';i++){
		for(int j=0;str2[j]!='\0';j++){
			if(str[i]==str2[j]){
				vowCount++;
			}
			
        }
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
		    conCount++;
	    }
		
	}
	printf("Total vowel is : %d\n",vowCount);
	printf("Total con is : %d\n",conCount-vowCount);
}

// 7. Write a C program to count total number of words in a string.

void countWords(){
	char str[1000];
	printf("Enter the string : ");
	gets(str);
	printf("%s\n",str);
	int i=0,c=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			c++;
		}
	}
	printf("The word count is : %d\n",c+1);
}

int show(){
	char str[100];//try to use dynamic memory allocation
	printf("Enter the string : ");
	scanf("%s",str);
	int size=strlen(str); //dont use inbuilt functions
	printf("size of string is : %d\n",size);
	if(size!=17){
		printf("Wrong Input ");
		return 0;
	}
	else{
        for(int i=0;i<size;i++){
            char ch=str[i];
			if((i == 2) || (i == 5) || (i == 8) || (i == 11) || (i == 14)){ // false
				if(!(str[i]==':')){
					printf("Wrong Input \n");
					return 0;
				}
			}
			else{
			    for(int i=0;i<size;i+=3){  // 43:54:54:53
	            	for(int j=i;j<i+2;j++){
		        	   char ch=str[j];
			            if((ch>='A' && ch<='F') || (ch>='a' && ch<='f')||(ch>='0' && ch<='9')){ // false
                           // printf("%c",ch);
			            }
		        	    else{
				            printf("Wrong input ");
			         	    return 0;
		                }
		         	}
	        	}
	        	for(int i=0;i<size;i++){
		            char ch=str[i];
		            if(!((ch>='A' && ch<='F') || (ch>='a' && ch<='f')||(ch>='0' && ch<='9') || ch==':')){
		                printf("Wrong input \n");
			            return 0;
		            }
            	}
		   	}

        }
	}
	printf("Correct input : %s\n",str);
	return 0;
}

//8. Write a C program to find reverse of a string.

void revStr(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	int n=strlen(str);
	int i=0;
	while(i<n/2){
		char ch=str[i];
		str[i]=str[n-i-1];
		str[n-i-1 ]=ch;
		i++;
	}
	
	printf("The reverse string is : %s",str);
}

// 9. Write a C program to check whether a string is palindrome or not.

// 10.character count

void charCount(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++){
		int count=0;
		bool flag=0;
		for(int j=0;j<i;j++){
			if(str[i]==str[j]){
				flag=1;
				break;
			}
			
		}
		if(flag==1){
			continue;
		}
		for(int j=0;str[j]!='\0';j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		printf("%c %d\n",str[i],count);
	}
}
#include <stdio.h>

int dublicateUniqueValue() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4,4,4,1,1,5,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Unique duplicate values in the array: ");

    for (int i = 0; i < length; i++) {
        int count = 0; // Count of occurrences of the current element

        // Count the occurrences of arr[i] in the array
        for (int j = 0; j < length; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the count is greater than 1, it's a unique duplicate
        if (count > 1) {
            int isUnique = 1; // Flag to check if the element is unique among duplicates

            // Check if arr[i] is the first occurrence among duplicates
            // 1, 1, 2, 3, 3, 4, 4,4,4,1,1,5,5
            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    isUnique = 0;
                    break; // Element is not unique among duplicates
                }
            }

            if (isUnique) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}

// unique number

void uniqueNumber(){
	int arr[]={1,2,3,2,3,2,2,6,2};
	for(int i=0;i<9;i++){
		int count=0;
		bool flag=0;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				flag=1;
			}
		}
		if(!(flag)){
			printf("%d ",arr[i]);
		}
	}
}

// binary to decimal convert

void bnryToDecimal(){
	char str[100];
	printf("Enter the binary number : ");
	scanf("%s",str);
	int len=0;
	while(str[len]!='\0'){
		len++;
	}
	;
	printf("The length of string is : %d\n",len);
	int i=len-1;
	int digit=0;
	int bit=0;
	while(str[i]){
		if(str[i]=='1'){
			digit+=1<<bit;
		}
		bit++;
		i--;
	}
	printf("The decimal value of binary number is : %d\n",digit);
}

// 5. Write a C program to count total number of negative elements in an array.

void countNegative(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int count=0;
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			count++;
		}
	}
	printf("\n");
	printf("The total Negative Number is : %d",count);
}

// 6. Write a C program to copy all elements from an array to another array.

void cpyArray(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	
	int arr2[n];
	for(int i=0;i<n;i++){
		arr2[i]=arr[i];
	}
	printf("The copy array is : \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
}

// 7. Write a C program to insert an element in an array.

void insertArray(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int pos;
	printf("Enter in which position you want to add the element : ");
	scanf("%d",&pos);
	
	for(int i=n-1;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	int n2;
	printf("Enter the element : ");
	scanf("%d",&n2);
	
	arr[pos]=n2;
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

// frequency of array

void freArray(){
	int arr[]={1,2,34,5,3,1,2,4,34};
	
	for(int i=0;i<9;i++){
		int count=0;
		for(int j=0;j<9;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>1){
			bool flag=1;
			
			for(int k=0;k<i;k++){
				if(arr[i]==arr[k]){
					flag=0;
					break;
				}
			}
			if(flag==1){
				printf("%d is %d\n",arr[i],count);
			}
		}
		else{
			printf("%d is %d\n",arr[i],count);
		}
	}
}

// Precedence and associativity
void check(){
	
	//int x=10+2-2/2*2; // 10+2-1*2  // 10+2-2 // 10
	
   //int x=2*2/2*12*2/2*3; // 2*1*12*1*3 // 2*12*3 // 72
   
   int x=2>>1+1;
	printf("%d ",x);
	
	// more example on each
	
	printf("the value of a is : %d\n",10); // the value of a is : 10
	
	printf("The value of a is : %d\n",(10+20)); // the value of a is : 30
	
	printf("The value of a is : %d\n",~-8);// 7 // negative to positive and -1 // -8 = +8-1=7
	
	printf("The value of a is : %d\n",~8); // -9 // positive to negative and -1 // 8 = -8-1=-9
	
//	printf("The value of a is : %d\n",10++); // error - lvalue is required as increment operand;

//	printf("the value a is : %d",10--); // same error as ++
	
	printf("the a size is : %d\n",sizeof(10));  // size is 4
	
	printf("the b size is : %d\n",sizeof(10.8)); // size is 8

	printf("the a condition is : %d\n",10||10); // 1
	
	printf("the b condition is : %d\n",1&&10); // 1 // 0&&10->0
	
	
	// the example of the comma operators
	printf("the comma operator : %d\n",10,20,30); // 10 // only takes the first value
	
	printf("the comma operator2 : %d\n",(10,20,90)); // 90 // this will only take the last value
	
	// other examples
	
}
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
//	toggleBit();
//	highBit();
//	lowBit1();
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
//	rev_str();
//	rev_str2();
//	sort_array();
//	multiple();



//  String All Programs:
//    str1();
//    strPolindrome();
//   strCopy();
//	  strCon();
//	  strCmp();
//	  countAlph();
//	  vowConCount();
//	  countWords();
//	  show();
//	  revStr();
 //    charCount();
	  

//	naturalNumber();
//	EvenOdd();
//	sumNatural();
//	sumEvenOdd();
//	reverseNumber();
 // convertBinary();
 //  strToDecimal();
//    dublicateUniqueValue();
//   uniqueNumber();
//	bnryToDecimal();
//	countNegative();
//	cpyArray();
//	insertArray();
//	freArray();
	check();
 

   
	return 0;
}
