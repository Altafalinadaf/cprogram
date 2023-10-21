#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//  WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9 
	//  celsius = (fahrenheit - 32) * 5 / 9 
	double fahrenheit,celsius;
	printf("Enter the fahrenheit : ");
	scanf("%d",&fahrenheit);
	celsius=(fahrenheit -32)*5/9;
	printf("The  fahrenheit in celsius- %d %d =%d\n",fahrenheit,celsius);
	
	return 0;
}
