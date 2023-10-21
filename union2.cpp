#include<stdio.h>

union emp{
	int id;
	int c;
	int d;
	float flt;
	double dble;

}s2;

int main(){
	s2.id=10002;
	
	s2.c=20;
	
	s2.d=300;
	
//	s2.flt=3000;
//	
//	s2.dble=2000;

	printf("interger = %d\n",s2.id);
//	printf("float = %f\n",s2.flt);
//	printf("double = %lf\n",s2.dble);
	printf("interger 2 = %d\n",s2.c);
	
	printf("interger 2 = %d",s2.d);
	
}
