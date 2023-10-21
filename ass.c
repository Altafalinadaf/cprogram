#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i=3,j=2,k=0,m;
	m = ++i && ++j && ++k; 
	printf("%d %d %d %d", i , j, k,m);
	return 0;
}
