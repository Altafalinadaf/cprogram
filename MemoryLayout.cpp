#include<stdio.h>


/*
-dynamic memory allocation :
dynamic memory allocation is the process of allocation of the memory space at the run time 
we use the dynamic memory allocation to reduce the westage of the memory and it is the optimal way of memory allocation 


in memory layout we have 4 segments
1)code or text segment
2)variable (static and global)
  in this this we have further 2 parts 
  i)data segments
  ii)bss segments
  i)data segment is used to store the initialized data  // ex=int a=10; // here we declare and initialized so it store in data segments 
  ii)bss segment is used to to store non initialized data ex=int a; // here we just declare so its store in bss segments 
3)stack=its a LIFO of data structure and it's size increase based on the program increase 
4)heap = heap is a tree based data structure and its size increase when we allocate memory dynamically
// to use heap data structure we have to create a pointer in our main function that will point to the some memory block in a heap
*/

int c=10; 
int d;

int add(int a,int b){
	int d=a+b;
	printf("The value of c is : %d\n",c);
	return d;	
}
int main(){

	int a=10;
	printf("the value of a is : %d\n",a);
	
	int b=add(2,3);
	printf("The value of b is : %d\n",b);
}
