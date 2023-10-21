#include <stdio.h>
#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
////
//int main()
//{
//	float myFloatNum = 3.5;
//	double myDoubleNum = 19.99;
//	
//	printf("%f\n", myFloatNum); // Outputs 3.500000
//	printf("%lf", myDoubleNum); // Outputs 19.990000
//	
//}
int main()
{
	float myFloatNum = 3.5;
	double myDoubleNum = 19.99;

	printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
	printf("%.1f\n", myFloatNum); // Only show 1 digit
	printf("%.2f\n", myFloatNum); // Only show 2 digits
	printf("%.4f", myFloatNum);   // Only show 4 digits		
	
} 
////
//int main()
// {
// 
//	/*………Declaration part…………*/
//	char c;
//	int x, y;
//	float f1, f2;
//	double d1, d2;
//	unsigned p;
//	/*…………Assigning while declaring………*/
//	int a = 4321;
//	long int l = 5432167;
//	/*……………Assignment Part ………………*/
//	c = 'A';
//	x = 867;
//	f1 = 4.3214;
//	d1 = 8.5467342;
//	f2 = 20.000;
//	d2 = 3.0;
//	/*………Displaying Values……………………*/
//	printf("c = %c \n", c);
//	printf("x = %d and y = %d \n", x, y);
//	printf("l = %ld \n", l);
//	printf("d1 = %07lf \n", d1);
//	printf("p = %u \n", p);
// 	return 0;
// } 
//int main() 
//{
// // the maximum value allowed in the int is 32,767
// short int x = 40;
// printf("%d",x);
// return 0;
//}
