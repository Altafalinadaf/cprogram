#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//WAP to calculate the area of a circle.
	//Area of circle A = Pi * r * r
	float pi = 3.14;
    int radius;
    printf("Enter The Radius of Cicle:");
    scanf("%d",&radius);
    printf("The radius of the circle is %d\n" , radius);
    float area = (float)(pi* radius * radius);
    printf("The area of the given circle is %f", area);
    return 0;

}
