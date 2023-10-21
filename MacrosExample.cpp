#include<stdio.h>
#define X 30


// Macros redefined
int main(){
	printf("%d\n",X);
	
	#undef X
	#define X 100
	printf("%d",X);
}
