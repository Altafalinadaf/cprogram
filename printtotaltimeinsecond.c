#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	// WAP to print the total seconds in a given time (hrs, min, sec’s).
	// h = (sec/3600); 
   //  m = (sec -(3600*h))/60;
   //  s = (sec -(3600*h)-(m*60));
   int h,m,s,sec;
   
   printf("Enter the second : ");
   scanf(" %d",&sec);
   h = (sec/3600); 
   m = (sec -(3600*h))/60;
   s = (sec -(3600*h)-(m*60));
   printf("H:M:S - %d:%d:%d\n",h,m,s);
   
   
	return 0;
}
