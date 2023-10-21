#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);  // true 
    printf("%d == %d is %d \n", a, c, a == c);  // false 
     printf("%d > %d is %d \n", a, b, a > b);   //  a= 5; b = 5 ;5 > 5; flase 
	     
     
    printf("%d > %d is %d \n", a, c, a > c);  // a = 5 ; c = 10 ;  5 > 10 ==> flase 
    printf("%d < %d is %d \n", a, b, a < b); // a = 5 ; b = 5 ; 5< 5 => false 
    printf("%d < %d is %d \n", a, c, a < c); // 
    printf("%d != %d is %d \n", a, b,c);
    printf("%d < %d is %d \n", a, c, a < c); 
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);
   

    return 0;
}
	
