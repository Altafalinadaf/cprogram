#include<stdio.h>

void bitwise_swap(int *a,int *b){
	*a=*a^*b; //01+10=11=3
	*b=*a^*b; //11+10=01=1
	*a=*a^*b; //011+001=010
}

int main(){
	int a=1;
	int b=2;
	printf("a = %d b = %d\n",a,b);
    bitwise_swap(&a,&b);
	printf("after swap\na = %d b = %d\n",a,b);

	return 0;
}
