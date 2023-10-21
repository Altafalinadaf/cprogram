#include<stdio.h>
////int a=10; // 13 12 12 10
//
////static int a=10; // 13 12 12 10
//
//// extern int a=10;  // 13 12 12 10
//
//volatile int a=10; // 13 12 12 10
//
//int main(){
////	int a=10; // 13 12 14 10
//	 
//	printf("%d %d %d %d\n",a++,a++,++a,a++);
//}

int sum=0;
////30
////30

////static int sum;
//// Only sum = 0
//// 30
//// Only sum = 30
//// 60
//// Only sum = 60
//// 90
//int add(){
//	static int sum=0;
//	printf("Only sum = %d\n",sum);
//	int a=20;
//	int b=10;
//	sum=a+b+sum;
//	printf("%d\n",sum);
//}
//int main(){
//	add();
//	add();
//	add();
//}




//int main(){
//	int a=10;
//    static int b=a;
//	printf("%d\n",a);
//	printf("%d\n",b);
//}

// decimal to binary number

//int main(){
//	int n;
//	printf("Enter the number : ");
//	scanf("%d",&n);
//	
//	int binaryDigit[32];
//	int i=0;
//	while(n>0){
//		binaryDigit[i]=n%2;
//		n/=2;
//		i++;
//	}
//	
//	// we need to reverse the loop in order to get the binaryformat
//	for(int j=i-1;j>=0;j--){
//		printf("%d",binaryDigit[j]);
//	}
//}

//// convert string binary to decimal
//
//int main(){
//	char str[10];
//	printf("Enter the binary number : ");
//	scanf("%s",str);
//	
//	int len=0;
//	while(str[len]!='\0'){
//		len++;
//	}
//	
//	//printf("%d",len);
//	int digit=0;
//	int bit=0;
//	for(int i=len-1;i>=0;i--){ // 1010 = 4 =
//		if(str[i]=='1'){ // 1 == 1
//			digit+=1<<bit;
//			printf("%d\n",digit); // 0=0+1<1
//		//	printf("%d\n",bit);
//		}
//		bit++;
//	}
//	
//	
//}
//#define getName(var) #var
//
//int add(){
//	return 10*34;
//}
//
//int add2(){
//	static int a=add();
//	printf("%d",a);
//}
//int main(){
//	int ag=10;
//	printf("%s",getName(a));
//}

#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[10];
    char sen[1000];

    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%s",sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}


