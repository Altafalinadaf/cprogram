#include<stdio.h>
int main(){
	int i=3,j=2,k=0,m;
    m = ++i && ++j && ++k; // i =8 i=4 j=3 k=1   
	printf("%d %d %d %d", i , j, k,m);
	return 0;
}
