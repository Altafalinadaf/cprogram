#include<stdio.h>
#include<stdlib.h>
#define Bit 1
#define Bit2(n,Bit) n&Bit
#define MSB(bits,Bit) 1<<(bits-Bit)
#define NTHBIT(num,nthNumber)  num>>nthNumber
#define SetBit(Bit,nthBitPosition,num) (Bit<<nthBitPosition)|num
#define ClearBit(Bit,nthBitPosition,n) (Bit<<nthBitPosition)^n
#define ToggleBit(bit,pos,Bit,n) (Bit<<pos-Bit)^n
#define HighBit(n,i,Bit)   (n>>i)&Bit
#define HighBit1(Bit,i,n) Bit<<i&n
#define LowBit(Bit,i,n)  (Bit<<i)&n
#define LowBit13(i,Bit,n) (i<<Bit)&n
#define LowBit1(n,i,Bit) (n>>i)&Bit
#define TrailingZero(Bit,i,n) (1<<i)&n
#define LeadingZero(Bit,i,n) (1<<i)&n
#define Flip(n) ~(n)
#define CountBit(Bit,i,n) (1<<i)&n



//.swapping using bitwise operator
void bitwise_swap(){
	int a=1;
	int b=2;
	printf("%d %d\n",a,b);
	a=a^b; //01+10=11=3
	b=a^b; //11+10=01=1
	a=a^b; //011+001=010
	printf("a = %d b = %d\n",a,b);
}

void add(int *p,int *q){
	int sum=*p+*q;
	printf("The sum of a + b is = %d \n",sum);
}

void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}


// 1. Write a C program to check Least Significant Bit (LSB) of a number is set or not.
void LSB(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if (Bit2(Bit,n)) {
        printf("The least significant bit is set (LSB = 1).\n");
    } else {
        printf("The least significant bit is not set (LSB = 0).\n");
    }
}

// 2. Write a C program to check Most Significant Bit (MSB) of a number is set or not.
// #define MSB(bits,Bit) 1<<(bits-Bit)
void MSB1(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int bits=sizeof(int)*8;
	int msb=MSB(bits,Bit);
	if(n&msb){
		printf("MSB is set to 1\n");
	}
	else{
		printf("MSB is Set to 0\n");
	}
}


// 3. Write a C program to get nth bit of a number.
// #define NTHBIT(num,nthNumber)  num>>nthNumber
void NthBit(){
	int num;
	printf("Enter the numeber : ");
	scanf("%d",&num);

	int nthNumber;
	printf("Enter the nth position : ");
	scanf("%d",&nthNumber);

	if((NTHBIT(num,nthNumber))&Bit){
		printf("number %d in this the position of %d bit is 1\n",num,nthNumber);
	}
	else{
		printf("number %d in this the position of %d bit is 0 \n",num,nthNumber);
	}
}

//4. Write a C program to set nth bit of a number.

// #define SetBit(Bit,nthBitPosition,num) (Bit<<nthBitPosition)|num
void setNthBit(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	int nthBitPosition;
	printf("Enter the position : ");
	scanf("%d",&nthBitPosition);
	int setNthBit=SetBit(Bit,nthBitPosition,num);
	printf("Before setting the nth bit : %d\n",num);
	printf("After setting the nth bit : %d\n",setNthBit);
}


// 5. Write a C program to clear nth bit of a number

void clearNthBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	int nthBitPosition;
	printf("Enter the position to clear : ");
	scanf("%d",&nthBitPosition);

	int newClearNthBit=ClearBit(Bit,nthBitPosition,n);

	printf("Before cleaning the nth Bit : %d\n",n);
	printf("After cleaning the nth Bit : %d\n",newClearNthBit);
}

void toggleBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos;
	printf("Enter the pos : ");
	scanf("%d",&pos);
//	pos=pos-1;
	int bit=ToggleBit(bit,pos,Bit,n); // 1 0 1 0
						// 0 1 0 0
	printf("The new value is : %d\n",bit);

}


void highBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=32;i>=0;i--){
		if(HighBit(n,i,Bit)){
			pos=i;
			break;
		}
	}
	printf("The High index of 1 bit is : %d",pos+1);
}


void highBit1(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=32;i>=0;i--){
		if(HighBit1(Bit,i,n)){  // #define HighBit1(Bit,i,n) Bit<<i)&n
			pos=i;
			break;
		}
	}
	printf("The high index of 1 bit is : %d",pos+1);
}

void lowBit2(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=32;i>=0;i--){
		if(LowBit(Bit,i,n)){
			pos=i;
		}
	}
	printf("The low index of 1 bit is : %d",pos+1);
}


void lowBit13(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=0;i<=32;i++){
		if(LowBit13(i,Bit,n)){
			pos=i;
			break;
		}
	}
	printf("The low index of 1 bit is : %d",pos+1);
}


void lowBit1(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int pos=0;
	for(int i=0;i<=32;i++){
		if(LowBit1(n,i,Bit)){
			pos=i;
			break;
		}
	}
	printf("The low index of 1 bit is : %d",pos+1);
}


// 9. Write a C program to count trailing zeros in a binary number.

void trailingZero(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	int count=0;
	for(int i=0;i<32;i++){
		if(TrailingZero(Bit,i,n)){
			break;
		}
		else{
			count++;
		}
	}
	printf("Count of trailing zeros in number : %d",count);
}
#define mul(a,b) a*b

void show(){
	printf("Redult : %d",mul(2,3));
}

// 10. Write a C program to count leading zeros in a binary number

void leadingZero(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int binBit,count=0;
	printf("For how many bit you want : ");
	scanf("%d",&binBit);
	
	for(int i=binBit-1;i>=0;i--){
		if(LeadingZero(Bit,i,n)){
			break;
		}
		else{
			count++;
		}
	}
	printf("The count of Leading count is : %d\n",count);
}

// 11. Write a C program to flip bits of a binary number using bitwise operator.

void flipBin(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The flip value is : %d",Flip(n));
}

// 12. Write a C program to count total zeros and ones in a binary number.

void countBit(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int temp=n;
	int count0=0,count1=0;
	
	for(int i=0;i<32;i++){
		if(CountBit(Bit,i,n)){
			count1++;
		}
		else{
			count0++;
		}
	}
	printf("The number 1 count is : %d\n",count1);
	printf("The number 0 count is : %d\n",count0);
}

// 13. Write a C program to rotate bits of a given number.

// 15. Write a C program to swap two numbers using bitwise operator.

void swap(){
	int a,b;
	printf("Enter the a and b value : ");
	scanf("%d%d",&a,&b);
	printf("a and b value is\na = %d\nb = %d\n",a,b);
	
	printf("a and b value is\na = %d\nb = %d\n",Swap(a,b));
}

// 16. Write a C program to check whether a number is even or odd using bitwise operator.

void evenOdd(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	
}

int main(){
	//lowBit1();
//	show();
//	LSB();
//	 MSB1();
//	 NthBit();
//	 setNthBit();
//	 clearNthBit();
//	 toggleBit();
//	 highBit();
//	 lowBit2();
//	 lowBit13();
//	 lowBit1();
//	 trailingZero();
//	 leadingZero();
//	 flipBin();
//	 countBit();
	 swap();

}
