#include<stdio.h>
int a1;
static int b1;
extern int e8;
int main(){
	int a;
	static int b;
	auto int c;
	auto int c1;
	register int d;
	register int d1;
	extern int e;
	
//	printf("%d\n",a);
//	printf("%d\n",b);
	printf("%d\n",e8);
//	printf("%d\n",c1);
//	printf("%d\n",d);
//	printf("%d\n",d1);
//   	printf("%d\n",a1);
//	printf("%d\n",b1);	
	return 0;
}
