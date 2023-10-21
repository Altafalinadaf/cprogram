#include<stdio.h>

// 1 d array diplay
int display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("element %d is : %d\n",i+1,arr[i]);
	}
}

// 1D array accept
int array(){
	int n;
	printf("2d array is : \n");
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	display(arr,n);
}

// 2d aray pass by value examples
//***************************************
// display 2d array
void display1(int arr[][100],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

// another way of display functions
void display12(int arr[100][100],int row,int col){ // row is optional but col is mandatory
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
}

// qnother way of display functions
void display13(int (*arr)[100],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
}

// 2d array accept ;
int array2d(){
	int row,col;
	printf("Enter the size of rows and cols : ");
	scanf("%d%d",&row,&col);

	int arr[row][100];
	printf("Enter the 2d array here : \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
//	display1(arr,row,col);
//	display12(arr,row,col);
	display13(arr,row,col);
}


// another way of declaring the 2d array
int array2d2(){
	int row,col;
	printf("Enter the size of rows and cols : ");
	scanf("%d%d",&row,&col);
	int arr[100][100]; // asigning the max size

	printf("Enter the 2d array elements : \n");
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",*(arr+i)+j); // without & also we can write the scanf
		}
	}
	display12(arr,row,col);
}


// 2d array pass by reference examples
//****************************************
// display

void displayR1(int arr[100][100],int *row,int *col){
	int i,j;
	printf("Example of 2d array cal by reference : \n");
	printf("2d array is : \n");
	for(i=0;i<*row;i++){
		for(j=0;j<*col;j++){
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}
}



// accepting 2
int array2d3(){
	int row,col;
	printf("Enter the size of row and size : ");
	scanf("%d%d",&row,&col);
	int i,j;
	int arr[100][100];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",*(arr+i)+j);
		}
	}
	displayR1(arr,&row,&col);

}

// 3d array example

int array3d(){
	int arr[2][2][2];
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("%d ",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

// 3d array pass by value

// displaying the 3d array using  pass the value to the function
void display3dp2(int arr[][100][100],int array,int row,int col){
	printf("The 3d array is : \n");
	int i,j,k;
	for(i=0;i<array;i++){
		printf("%d array is : \n",i+1);
		for(j=0;j<row;j++){
			for(k=0;k<col;k++){
				printf("%d ",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

// accetpring the 3d array
void array3d3(){
	int array,row,col;
	printf("Enter the number of arrays,rows, and col");
	scanf("%d%d%d",&array,&row,&col);

	int arr[100][100][100];
	int i,j,k;
	printf("This is the 3d array pass by value example :\n");
	printf("Enter the array elements : \n");
	for(i=0;i<array;i++){
		printf("%d array elements : \n",i+1);
		for(j=0;j<row;j++){
			printf("%d array %d row elements : \n",i+1,j+1);
			for(k=0;k<col;k++){
				printf("%d array %d row %d col element : ",i+1,j+1,k+1);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	display3dp2(arr,array,row,col);
}

// Strings example
// pass by value
void display(char str[100]){
	printf("%s",str);
}
void string1(){
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	display(str);
}


// pass by reference
void displayStr2(char *str){
	printf("%s",str);
}

int string2(){
	char str[100];
	printf("Enter the string ");
	scanf("%s",str);
	
	displayStr2(str);
}

// example 2

void displayStr3(char str[][100],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter the %d str : ",i+1);
		scanf("%s",str[i]);
	}
	
	printf("The array of string is : \n");
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
}

int string3(){
	int n;
	printf("Enter number of str you want : ");
	scanf("%d",&n);
	char str[n][100];
	displayStr3(str,n);
}

// array of string pass by reference

void displayStr4(char (*str)[100],int *n){
	int i=0;
	for(i=0;i<*n;i++){
		printf("Enter %d str : ",i+1);
		scanf("%s",str[i]);
	}
	printf("Array of string is : \n");
	for(i=0;i<*n;i++){
		printf("%s\n",str[i]);
	}
}

int string4(){
	int n;
	printf("Enter number of str you want : ");
	scanf("%d",&n);
	char str[n][100];
	displayStr4(str,&n);
	
}

//     Structures

struct emp{
	char name[100];
	int id;
	int sal;
};

void structure(){
	struct emp e1;
	printf("Enter the name : ");
	scanf("%s",&e1.name);
	printf("Enter id : ");
	scanf("%d",&e1.id);
	printf("Enter sal : ");
	scanf("%d",&e1.sal);
	
	printf("%s\n%d\n%d\n",e1.name,e1.id,e1.sal);
}

// pass by value

struct emp2{
	char name[100];
	int id;
	int sal;
};

void displayStruct(struct emp2 e2){
	printf("%s\n%d\n%d\n",e2.name,e2.id,e2.sal);
}

int structure2(){
	struct emp2 e2;
	printf("Enter the name : ");
	scanf("%s",&e2.name);
	printf("Enter id : ");
	scanf("%d",&e2.id);
	printf("Enter sal : ");
	scanf("%d",&e2.sal);
	displayStruct(e2);

}

struct emp3{
	char name[100];
	int id;
	int sal;
};

// pass by reference

void displayStruct2(struct emp3 *e2){
	printf("%s\n%d\n%d\n",e2->name,e2->id,e2->sal);
}

int structure3(){
	struct emp3 e2;
	printf("Enter the name : ");
	scanf("%s",&e2.name);
	printf("Enter id : ");
	scanf("%d",&e2.id);
	printf("Enter sal : ");
	scanf("%d",&e2.sal);
	displayStruct2(&e2);
}

//  Pointers

// pass by value
void displayP1(int *p,int *q){
	int c = *p+*q;
	printf("a + b = %d\n",c);
}

void pointer1(){
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	int *p=&a;
	int *q=&b;
	
	displayP1(p,q); // passing the value of p , q in that we have address of a and b value
}

// anoter way
void displayP12(int p,int q){
	int c = p+q;
	printf("a + b = %d\n",c);
}

void pointer12(){
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);

	int *p=&a;
	int *q=&b;

	displayP12(*p,*q); // directly passing the values of a,b using (*) deference operator
}

// pass by referenece

void displayP2(int **p,int **q){
	int c=**p+**q;
	printf("a + b = %d\n",c);
	
}

void pointer2(){
	int a,b;
	printf("Enter the a and b value : ");
	scanf("%d%d",&a,&b);
	
	int *p=&a;
	int *q=&b;
	
	displayP2(&p,&q);
}


// another example using dynamic memory allocation
#include<stdlib.h>

void displayP3(int *p,int *n){
	for(int i=0;i<*n;i++){
		printf("%d ",*(p+i));
	}
}
void pointer3(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int *p=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("%d element : ",i+1);
		scanf("%d",p+i);  // scanf("%d",&p[i]);
	}
	
	displayP3(p,&n);
}


// double pointers

// pass by value
void displayD1(int **p,int **q){
	int c = **p+**q;
	printf("p + q = %d\n",c);
}

void pointerD1(){
	int a,b;
	printf("Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	int *p=&a;
	int *q=&b;
	int **p1=&p;
	int **q1=&q;
	
	displayD1(p1,q1);
}



// pass by reference
void displayD2(int ***p,int ***q){
	int c = ***p+***q;
	printf("p + q = %d\n",c);
}

void pointerD2(){
	int a,b;
	printf("Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	int *p=&a;
	int *q=&b;
	int **p1=&p;
	int **q1=&q;

	displayD2(&p1,&q1);
}


int main(){
	fun();

// pass by value
//	array();
//	array2d();
//	array2d2();

// pass by reference
//	array2d3();

// 3d array examples
	//array3d();
//	array3d3();
	
// string examples
 //  string1();
//   string2();
 //  string3();
  // string4();
  
  
  // struture
 // structure();
 // structure2();
 // structure3();
  
  // Pointers
 // pointer1();
 // pointer2();
//  pointer3();
//	pointer12();

 // doubble pointers
//  pointerD1();
 // pointerD2();
	return 0;
}

