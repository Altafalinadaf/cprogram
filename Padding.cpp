// Structure Padding, Unions and Bitfields

#include<stdio.h>
// #pragma pack(1) by using this we can avoid the structure padding

struct emp{
	int id; // 4
	char sec; // 1
	float sal; // 4
	// 4 + 1 + 4 = 9
};

struct emp2{
	char sec; // size is 1
}e2;

struct emp3{
	int a; // 4 bytes
	char b; // 1 byte + 3 bytes padding
	long double c; // 16 bytes
}e3;





// union padding
union emp4{
//	int a;
	char b;
	char c;
}e4;

// another example to show the union padding

union emp5{
	struct emp6{
		char a; // 1byte char + 3bytes padding
		int b; // 4 bytes
	}e6; // 8 bytes size
	
	struct emp7{
		char a; // 1 byte
		char b; // 1 byte
		char str[3]; // 3 byte
	}e7; // 5 bytes

	struct emp8{
		short int a;
		short int b;
		short int c;
		
	}e8; // 6 bytes
}e5;

// Bit fields

struct emp9{
	int a:2;
	int b:2;
	int c:1; //1111
	int d:27; //
}e9; // total is 32 stored in 4 bytes

int main(){

	struct emp e1;
	printf("the size of structure is a : %d\n",sizeof(e1));
	// struct pading
	// int(4bytes) + char (1bytes) + padding(3bytes) + float (4bytes) = 12
	
	printf("the size emp2 is : %d\n",sizeof(e2));//if the there is one datatype than it gives the datatype is directly
	
	printf("size of emp3 is : %lu\n",sizeof(e3));
	
	// union padding
	printf("size of union emp4 is %d\n",sizeof(e4));
	printf("size of union emp5 is %d\n",sizeof(e5)); // 8 bytes
	
	// bit fields
	struct emp9 e9{12,34,54,64};
	printf("size of emp9 is : %d\n",sizeof(e9));
	
}
