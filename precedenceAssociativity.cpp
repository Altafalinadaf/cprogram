#include<stdio.h>

// Precedence and associativity
void check(){

	//int x=10+2-2/2*2; // 10+2-1*2  // 10+2-2 // 10

   //int x=2*2/2*12*2/2*3; // 2*1*12*1*3 // 2*12*3 // 72

   int x=2>>1+1;
	printf("%d ",x);

	// more example on each

	printf("the value of a is : %d\n",10); // the value of a is : 10

	printf("The value of a is : %d\n",(10+20)); // the value of a is : 30

	printf("The value of a is : %d\n",~-8);// 7 // negative to positive and -1 // -8 = +8-1=7

	printf("The value of a is : %d\n",~8); // -9 // positive to negative and -1 // 8 = -8-1=-9

//	printf("The value of a is : %d\n",10++); // error - lvalue is required as increment operand;

//	printf("the value a is : %d",10--); // same error as ++

	printf("the a size is : %d\n",sizeof(10));  // size is 4

	printf("the b size is : %d\n",sizeof(10.8)); // size is 8

	printf("the a condition is : %d\n",10||10); // 1

	printf("the b condition is : %d\n",1&&10); // 1 // 0&&10->0


	// the example of the comma operators
	printf("the comma operator : %d\n",10,20,30); // 10 // only takes the first value

	printf("the comma operator2 : %d\n",(10,20,90)); // 90 // this will only take the last value

	// other examples

}

int example2(){
	int x=10;
	x+=(x++)+(++x)+x; 
	// x = x + (x++) + (++x) +x
	// x = x + (10++) + (++10) +x
	// x = x + (10) + (12) + x
	// x = 12 + 10 + 12 + 12
	// 46
	printf("%d",x);  //  46
}

int example3(){
	int a=10,b=2,x=0;
	x=a+b*a+10/2*a;
	// x = 10+2*10+10/2*10
	// x = 10 + 20 + 5*10
	// x = 10 + 20 + 50
	// x = 80
	printf("x=a+b*a+10/2*a is : %d\n",x); // 80
}

int example4(){
	unsigned short var='B'; // ascii value of b is : 66 // update var 1. 68 2. 69
	var+=2; // 1. var = 66+2= 68
	var++; //  2. var = 68++= 68
	
	//            69 ascii is E value is 69
	printf("var : %c , %d ", var,var);
}

int example5(){
	char var=10;
	//printf("var is = %d",++var++); //we can't perform like this it through an error
	// error = lvalue required as increment operand
}

int example6(){
	int x=(20 || 40 ) && (10); // both are non zero values
	printf("x= %d",x);
}

int example7(){
	/*
	int x;
	x= (printf("iuuAA"));//||printf("BB"));//it will return the number of chars//5 char in print
	printf("%d",x);
	printf("\n");

	x= (printf("AA")&&printf("BB")); // 2 && 2 = true return 1
	printf("%d",x);
	
	*********************
	output
	iuuAA5
    AABB1
	*/
	
	int x;
	x=(printf("AA")||printf("BB"));//2||2=true return 1 but evaluate 1st printf bcoz of ||(or)
	printf("%d",x);
	printf("\n");

	x= (printf("AA")&&printf("BB")); // 2 && 2 = true return 1 and evaluate 2 printf statements
	printf("%d",x);
}

int example8(){
   int a=3,b=2;
   a=a==b==0; // associativity is left to right so the answer is 1 // a=3==2==0 // a=0==0 // 1
   printf("%d,%d",a,b); // 1, 2
}


int example9(){
   int intVar=20,x;
   x= ++intVar,intVar++,++intVar;  // = operator precedence in higher than the ,(comma) operator
   printf("Value of intVar=%d, x=%d",intVar,x);
}

int example10(){
	char val=250;
    int	 ans;
    ans= val+ !val + ~val + ++val;
    printf("%d",ans);
    
	/*
	ans = -5 + !-5 + ~-5 + -5
    = -5 + !-5 + 4 - 5
    = -5 + 0 + 4 -5
    = -6
   */
}

int example11(){
	float a;
   //(int)a= 10; //lvalue required as left operand of assignement
   printf("value of a=%d",a);
   return 0;
   
   //(int)a will return an integer constant value and 10 is also an integer value,
   // and constant value can not assign in constant value.
   
}

int example12(){
	int i=-1,j=-1,k=0,l=2,m;
	m=i++&&j++&&k++||l++; // ++ Operator has precedence over &&, || operator,
	printf("%d %d %d %d %d",i,j,k,l,m); // 0 0 1 3 1
}

int example13(){
	int var;
	var=- -10;
	printf("value of var= %d\n",var);
	var=+ +10;
	printf("value of var= %d\n",var);
}

void example14(int i)
{
    if (i > 5) // 1>5-false // 2>5-false // 3>5-false // 4>5-false // 5>5-false //6>5=true
    return ;
    printf("%d ", i); // 1 2 3 4 5
    return example14((i++, i)); // 1 2 3 4 5
}

int example15(){
   int a = 1; // 0
   int b = 1; // 0
   int c = a || --b; // 1 || --1 = 1
   int d = a-- && --b; // 1 &&  0 = 0
   printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d); // 0 0 1 0
   return 0;
   
   /*
   Since a is 1, the expression --b
    is not executed because
    of the short-circuit property
    of logical or operator
    So c becomes 1, a and b remain 1
   int c = a || --b;

    The post decrement operator --
    returns the old value in current expression
    and then updates the value. So the
    value of expression a-- is 1.  Since the
    first operand of logical and is 1,
    shortcircuiting doesn't happen here.  So
    the expression --b is executed and --b
    returns 0 because it is pre-increment.
    The values of a and b become 0, and
    the value of d also becomes 0.
   int d = a-- && --b;
   */
}

int example16(){
	int i = 5;
    int l = i / -4;  // 5/-4 = -1
    int k = i % -4; // 5%-4 = 1
    printf("%d %d\n", l, k); // -1 1
    return 0;
}

int example17(){
	int x = 4 *5 / 2 + 9;
	printf("x value is : %d\n",x);
}

int example18(){
	int a = 5; 
    int b = ++a + a++ + --a;  
    printf("Value of b is %d", b);
}

int example19(){
	int a = 20, b = 15, c = 5;
    int d;
    d = a == (b + c); // a == (20) // 20 == 20 = 1
    printf("%d", d); // 1
}

int example20(){
	int k = 8;
    int x = 0 == 1 && k++; //  in first evaluation it got flase then it will not increment k++
    printf("%d %d\n", x, k); // 0 8
}

int example21(){
	char a = 'a';
    //int x = (a % 10)++; // we cannot perform operation like this it's error
    //printf("%d\n", x);
}

int example22(){
// 	1 < 2 ? return 1: return 2; // error
	
}

int example23(){
	unsigned int x = -5; // -5	signed int x = -5; // -5
    printf("%d", x);
}

int example24(){
	int x = 2, y = 1;
    x *= x + y; // multiplication work left to right // x=2*2+1; // 2*3 // 6
    printf("%d\n", x);
    return 0;
}
int main(){
//	check();
//	example2();
//	example3();
//	example4();
//	example5();
//	example6();
//	example7();
//	example8();
//	example9();
//	example10();
//	example11();
	example12();
//	example13();
//	example14(1);
//	example15();
//	example16();
//	example17();
//	example18();
//	example19();
//	example20();
//	example21();
//	example22();
//	example23();
//	example24();

// recursive examples
//   example14(1);
	return 0;
}
