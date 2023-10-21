#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//WAP to input two numbers from the keyboard and print their average. 
	//avg = sum of all observations / Total number of observations
	int x,y,average,sum;
	printf("Enter any two numbers : ");
	scanf("%d %d",&x,&y);
	sum = x+y;
	average=sum/2;
	printf("the sum of average is %d and %d is=%d\n",x,y,average);
	
	return 0;
}
