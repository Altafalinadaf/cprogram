#include <stdio.h>
//void solve() {
//    int a[] = {1, 2, 3, 4, 5};
//    int sum = 0;
//    for(int i = 0; i < 5; i++) {
//        if(i % 2 == 0) {
//            sum += *(a + i);
//        }
//        else {
//            sum -= *(a + i);
//        }
//    }
//    printf("%d", sum);
//}
//int main() {
//	solve();
//	return 0;
//}

//#include <stdio.h>
//void solve() {
//    int first = 10, second = 20;
//    int third = first + second;
//    {
//        int third = second - first;
//        printf("%d ", third);
//    }
//    printf("%d", third);
//}
//int main() {
//	solve();
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	for(int i=0;i<2;i++){
//		printf("%d\n",i);
//		for(int i=0;i<2;i++){
//			printf("%d",i);
//			return 0;
//		}
//	}
//}


//#include <stdio.h>
//int c=10; // 
//void solve() {
//    int a = 3; //4//5//6//7
//    int res = a++ + ++a + a++ + ++a; //3+5+5+7
//    printf("%d", res);
//}
//int main() {
//	solve();
//	
//	printf("\n%d",c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    static int var[5]; // 5w
//    int count=0; // 0
//     
//    var[++count]=++count; 
//    printf("%d\n",count);
//    for(count=0;count<5;count++)
//        printf("%d ",var[count]);
//     
//    return 0;
//}

//#include<stdio.h>
//int main(){
//	int a=~-14;
//	printf("%d",a);
//	return 0;
//}

//int main(){
//	int m=10;
//	/*
//	printf() returns total number of printed characters,
//	 the statement int x=printf("%d ",m) will print 10 (10 and one space) and return 3. Thus output will be 10 3 [10<space>3].
//	 */
//	int x=printf("%d  ",m); //10
//	printf("%d",x); //2
//}

//int main(){
//	char a=2*2+2;
//	printf("%d",a);
//}

//int main(){
//	char a='ABCAAAAAAAVBBAVB'; // it will print the ascii value of the last character // it give warning but it will print ouput of last char
//	printf("%d",a);
//}


//int main(){
//	char str1[]={'H','E','L','L','O'};
//	char str2[]={'H','E','L','L','O','\0'};
//	char str3[]="HELLO";
//	
//	printf("%s\n",str1);
//	printf("%s\n",str2);
//	printf("%s\n",str3);
//	
//	
//	/*
//	Hello
//    Hello
//    Hello
//    Here, str1 is not terminated with NULL and other string variables str2 and str3 are terminated with NULL.
//    */
//}


//int main(){
//	int (x)=10;
//	printf("x=%d\n",x);
//	return 0;
//	/*
//	Such kind of declaration form int (x)=10; is also acceptable in C/C++ programming language, compiler will not return any error.
//	*/
//}


//int main(){
//	int a=(10,20,30,60);
//	printf("a=%d\n",a);
//	/*
//	In the declaration statement int a=(10,20); value 10, 20 are placed within the brackets ( ), thus (10,20) will be evaluated first.
//	Comma operator has left to right associativity, then result will be (20), thus output of the program will be x= 20.
//	*/
//}


//int main(){
//	printf("incldehelp.com\rOk\n");
//	printf("includehelp.com\b\b\bOk\n");
//	/*
//	OKcludehelp.com
//    includehelp.Okm
//
//	/r is an escape sequence which means carriage return.
//	Carriage return takes back the cursor to the leftmost side in a line.
//
//	Thus in the statement printf("includehelp.com\rOK\n");
//
//	First "includehelp" is printed ( not still displayed) then cursor moves to leftmost position ("i" here)
//	and starts printing "OK" which results in overwriting of first two characters of "includehelp".
//	Thus the final output is "OKcludehelp.com" and then cursor moves to next line due to character feed \n.
//
//	In the second statement /b escape character is used which is equivalent to backspacing the cursor.
//	 Overwrite also took place here due to three backspaces.
//
//	N.B: The output is platform dependent.
//	*/
//}

//int main(){
//	char a=65;
//    unsigned char b=290;
//	printf("%c\n",a);
//	printf("%d\n",b); // 34
//	int c=290-255;
//	printf("c = %d",c); //35-1 =34
//	/*
//	290 is beyond the range of unsigned char. Its corresponding value printed is:
//	 (290 % (UINT_MAX +1) where UINT_MAX represents highest (maximum) value of UNIT type of variable.
//
//Here it's character type and thus UINT_MAX=255
//
//Thus it prints 290 % (UINT_MAX +1)=34
//*/
//}

//int main(){
//	int i=3,*j,k;
//	j=&i;
//	printf("%d",i**j*i+*j);  //3*3*3+3
//	return 0;
//}

int main(){
	int a=5;
	volatile int b=5;
	int c=5;
	
	printf("%d %d %d\n",++a,++a,++a);  // here first used and increment and the last incremented value will be print all value will be same
	// it ++ ++ ++ the value all and print the same value 3 time // 8 8 8 because it a preincrement
   
	printf("%d %d %d\n",++b,++b,++b); //   it's goes right to left so value is :  8 7 6
	// here the volatile value process is : used it and assign used it and assign used it and assign
	
	 printf("%d %d %d\n",c++,c++,c++); // it's goes right to left so value is // 7 6 5
	return 0;
}

//#include<stdio.h>
//#include<stdio.h>
//int main(void){
//	printf("Hello World");
//	return/*hello*/ 5;
//}
