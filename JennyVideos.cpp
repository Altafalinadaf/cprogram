#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void do_while_loop1();
void input_char(){
	char ch;
	printf("Enter the character : ");
	ch=getchar();

	printf("The character is : %c \n",ch);
	getch(); //optinal
}

// Bitwise Operator

void and_op(){
	int n1,n2;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("Enter the number 2 : ");
	scanf("%d",&n2);
	
	printf("The and num1 &(and) num2 is = %d\n",n1&n2);
	
}
void or_op(){
	int n1,n2;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("Enter the number 2 : ");
	scanf("%d",&n2);

	printf("The and num1 |(or) num2 is = %d\n",n1|n2);

}
void not_op(){
	int n1;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("The and num1 ~(not)  = %d\n",~n1);

}

void left_shift(){
	int n1,shift;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("Enter how many number you want to shift : ");
	scanf("%d",&shift);
	
	printf("The left shifted number %d to postion %d  = %d\n",n1,shift,n1<<shift);

}

void right_shift(){
	int n1,shift;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("Enter how many number you want to shift : ");
	scanf("%d",&shift);

	printf("The right shifted number %d to postion %d  = %d\n",n1,shift,n1>>shift);

}
void xor_op(){
	int n1,n2;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("Enter the number 2 : ");
	scanf("%d",&n2);
	// 0 1 =1 why means one is false another one is true then the condtion is true else its false
	printf("The and num1 ^(xor-op) num2 is = %d\n",n1^n2);

}

void do_while_loop(){
	int i=0;
	do{   // first enter inside and execute the statements after that it will check the condition
		  // so it's called as exit level loop // it execute atleast once condtion true or false
		printf("One time it print : \n");
	}
	while(i>0);  // it's mandatory to use while ended with the semicolon
	do_while_loop1(); // calling another function
}

void do_while_loop1(){
	int i=0;
	do{
		printf("%d \n",i);
		i++;
	}
	while(i<10);
}

// 2-D array concepts
void sum_of_individual_array(){
	int arr[3][3];
	int sr,sc;
	for(int i=0;i<3;i++){
		printf("Enter the %d rom arrays here : \n",i+1);
		for(int j=0;j<3;j++){
			printf("Enter the %d array %d : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		sr=0,sc=0;
		for(int j=0;j<3;j++){
			sr=sr+arr[i][j];
			sc=sc+arr[j][i];
		}
		printf("Sum of Rows : %d\n",sr);
    	printf("Sum of Column : %d\n",sc);
	}
	
}

void sum_of_matrix(){
	int arr1[2][3]={{1,2,3},{1,1,1}};
	int arr2[2][3]={{1,0,1},{1,1,1}};
	int arr3[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
    }
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}

void mul_2Matrics(){
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	for(int i=0;i<3;i++){
		printf("Enter the %d row values : \n",i+1);
		for(int j=0;j<3;j++){
			printf("Enter array values %d : ",j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("2 Array Values \n");
	for(int i=0;i<3;i++){
		printf("Enter the %d row values : \n",i+1);
		for(int j=0;j<3;j++){
			printf("Enter array values %d : ",j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr3[i][j]=0;
			for(int k=0;k<3;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr3[i][j]);
			
		}
		printf("\n");
	}

}

void mul_2Matrics1(){
	int arr1[2][2]={{2,1},{2,3}};
	int arr2[2][2]={{2,3},{5,2}};
	int arr3[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			arr3[i][j]=0;
			for(int k=0;k<2;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}

void pointers(){
	int a=10,b=9;
	int *p=&a,*q=&b;
	
	printf("a = %d\n",a);
	printf("a = %d\n",*p);
	printf("a = %d\n",*(&a));
	printf("a = %d\n",*(p));
	
	printf("Address of a \n");
	printf("a = %d\n",&a);
	printf("a = %d\n",p);
	
	int c=*q;
	printf("c = %d\n",c);
	
	*p=20;
	printf("a = %d\n",a);
	printf("a = %d\n",*p);
	
	printf("address of a \n");
	printf("a = %d\n",p);
	
	*q=19;
	printf("b = %d\n",b);
	q=&b;
	printf("b = %d\n",*(q));
	
	printf("Pointers adreess : \n");
	printf("p = %d\n",&p);
	
}

void pointers1(){
	int a=10,b=9;
	int *p,*q;
	
	p=&a; //assogn the value address of a to p
	q=p;  // this is ilegal that we can assign the p value to q because p in the pointer //assign a address to q
//	q=*p; // this is ilegal that we can't assign the value of *p(a) to q pointer
	*q=*p; // this is legal that we can assign the *q(address of a) to *p(value of a)
	
	
	printf("Value of a is : \n");
	printf("a = %d\n",a); // a value
	printf("a = %d\n",*p); //
	printf("a = %d\n",*q);
	printf("a = %d\n",*q);
}

void pointers2(){
	int a=100;
	int *p=&a;
	int **q=&p;
	
	printf("The values of a \n");
	printf("a = %d\n",a);
	printf("a = %d\n",*p);
	printf("a = %d\n",*(*q));
	
	printf("Way of modifying the a \n");
	*p=200;
	
	printf("update a = %d\n",*p);
	
	printf("Another Way of modifying the a \n");
	**q=250;
	printf("update a = %d\n",**q);
	
	a=300;
	printf("a = %d\n",**q);
	
	**q=a; // this is ok that we can assign the direct value to **q // same as **q=300;
	
//	**q=&a; // this is ilegal it's wrong that we are assigning the address of a to value of **q so its wrong
	*p=350;

	printf("*q=p;,**q=*p; are same both\n");
	*q=p;//350 // this is also wrong because we can assign this to pointer address
	**q=*p; //
	printf("%d\n",**q);
	
	printf("Address of values : \n");
	printf("a = %d\n",&a);
	printf("a(p) = %d\n",p); // this is the address of a because pointer p is holding the value of a
	printf("p = %d\n",&p);
	printf("p(q) = %d\n",q);
	printf("q = %d\n",&q);
	int ***r=&q;
	printf("q = %d\n",r);
}

void pointers3(){
	int arr[5]={0,1,-1,10,1};
	int *p=arr; // this will take the base address of array[0]
	// no need to wite this int *ptr=&arr; // because array is alredy a constant pointer so we can't give

	printf("By using pointer accesiing value \n");
//	for(int i=0;i<5;i++){
//		printf("arr %d = %d\n",i,*p++);
//	}

	p=p+2;
	printf("%d\n",*p);
	
	p=&arr[0];
	printf("%d\n",*p);
	
	p=&arr[2];
	printf("%d\n",*p);
	
	p=p+1;
	*p=2;
	printf("%d\n",*p);
	printf("%d\n",arr[3]);
	
	int *p2;
	p2=&arr[1];

}

void pointers4(){
	int arr[]={1,8,-1,5,6,7};
//    This below to declaration is same 
	int *p=&arr[0];
	int *q=arr;
	
	printf("This below both the value is same \n");
	printf("p = %d\n",*p);
	printf("q = %d\n",*q);
	
	p=&arr[0];
	q=&arr[3];
	int d=q-p;
	printf("size difference between q to p is : %d\n",d);
	
	p=&arr[0];
	q=&arr[3];
    d=p-q;
	printf("size difference between p to q is : %d\n",d);
	
	q=q-2;
	printf("%d\n",*q);
}

void pointers5(){
	int a[]={10,11,-1,56,67,5,4};
	int *p,*q;
	p=a;
	printf("%d\n",*p);
	printf("%d %d %d\n",(*p)++,*p++,*++p);
	q=p+3;
	printf("%d\n",*q-3);
	printf("%d\n",*--p+5);
	printf("%d\n",*p+*q);
	printf("%d\n",a[1]);
}

void pointers6(){
	int a[]={10,11,-1,56,67,7,5,4};
	int *p,*q;
	p=a;
	q=&a[0]+3;
	printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
	
	printf("%d\n",*p);
	printf("%d\n",(*p)++);
	printf("%d\n",(*p)++);
	q--;
	printf("%d\n",(*(q+2))--);
	printf("%d\n",*(p+2)-2);
	printf("    %d   \n",*p);
	printf("%d\n",*(p++ -2)-1); // in this it contains a garbage value
	printf("%d\n",*(p++ -2)-1);
}

void pointers7(){
	const int a=-11;
	const int *p=&a;
	printf("%d\n",a);
}
void string1(){
	char name[5];
	printf("Enter the name : ");
	scanf("%s",name); // without & can also we use it
	printf("the string is = %s\n",name);
}

void string2(){
	char name[5];
	printf("Enter the name : ");
	scanf("%s",name); // without & can also we use it
	printf("the string is = %s\n",name); // it though declare the size then also it can acess the entire string and print it
}

void string3(){
	char name[5];
	printf("Enter the name : ");
	gets(name); // we can use this also
	printf("the string is = %s\n",name); // it though declare the size then also it can acess the entire string and print it
}

// difference between gets and scanf
void string4(){
	char name1[5];
	char name2[5];
	printf("Enter the name : ");
	gets(name1); // we can use this also // here can't directle select how much characater we want because it take only one argument
	printf("the string is = %s\n",name1); // it though declare the size then also it can acess the entire string and print it
	
	printf("Enter the name2 : ");
	scanf("%3s",name2); // you here directle select how much character you want in output
	printf("The string2 is = %s\n",name2);
}

// difference between puts and printf
void string5(){
	char name1[5];
	char name2[5];
	printf("Enter the name : ");
	gets(name1); //
	puts(name1); //  we can use this also // here can't directle select how much characater we want because it take only one argumenta

	printf("Enter the name2 : ");
	scanf("%s",name2); 
	printf("The string2 is = %2s\n",name2); //// you here directle select how much character you want in output
}

void string6(){
	char name1[10];
	printf("Enter the name : ");
	scanf("%s",name1);
	printf("%s\n",&name1); // you can give & also ok it will print the string
	printf("%s\n",&name1[2]); // it will print the character string index of 2 to end of string (till null pointer)
	
}

// *****************************************Code Vault Channels Video****************************************************

// strings Examples
// string declaration uses and how many ways we can declare


// example 1
// here we can modify the the string
void string101(){
	char name[]="Hello!";
	printf("%s\n",name);
	name[0]='h';
	printf("%s\n",name);
}

// example 2
// here we can't modify the the string
// even there is no error then also it will not modify the string and show some warnings
void string102(){
	char *name="Hello!";
	printf("%s\n",name);
	name[0]='h';
	printf("%s\n",name);
}

//// example 3
//// here we can't modify the the string
//// it's a error
//
//void string103(){
//	const static char *name="Hello";
//	printf("%s\n",name);
//	name[0]='h'; // it's a read only so we can't modify
//	printf("%s\n",name);
//}

// example 4
// here we can modify the the string
// even there is no error then also it will not modify the string and show some warnings
// this example is same as above example 2
void string104(){
	
	char *name=(char*)malloc(10*sizeof(char));
	strcpy(name,"Hello");
	printf("%s\n",name);
	name[0]='h'; // it's a read only so we can't modify
	printf("%s\n",name);
}




int main(){
//	input_char();
//	and_op();
//	or_op();
//	not_op();
//	left_shift();
//	right_shift();
//	xor_op();
//	do_while_loop();
//	sum_of_individual_array();
//	sum_of_matrix();
//	mul_2Matrics();
//	mul_2Matrics1();
//	pointers();
//	pointers1();
//	pointers2();
//	pointers3();
//	pointers4();
//	pointers5();
//	pointers6();
//	pointers7();
//	string1();
//	string2();
//	string3();
//	string4();
//	string5();
//	string6();

// *****************************************Code Vault Channels Video****************************************************
 //string101();
// string102();
 //string103();
 string104();
}
