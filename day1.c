#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	int x=2,y;
//	y= x>5 ? 3 : 5;
//	printf("the value of y=%d\n",y);
//	return 0;

//
//	int a=5,b=4,c,g;
//	a > b ? g=a : (g=b);
//	printf("the value of g=%d\n",g);
//	return 0;
	
//	int b=0,c=0,a=5;
//    a<=20?b:(c=30);
//	printf("Value b=%d c=%d\n",b,c);
//	return 0;
	
//	int sum=0;
//	int num;
//	int result;
//	printf("Enter the 4 digit number : ");
//	scanf("%d",&num);
//	result=num%10;
//	sum +=result;
//  num=num/1000;
//  sum =num+sum;
//  printf("the result is %d\n",sum);
//  return 0;

//    unsigned int a=5,b;
//    b=~a;
//    printf("%u",b);
//    return 0;
      
     int a,b;
     printf("Enter the 1st number : ");
     scanf("%d",&a);
     printf("Enter the 2nd number : ");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("The Swapping value of a is %d\n",a);
     printf("The Swapping value of b is %d",b);
     return 0;
}
