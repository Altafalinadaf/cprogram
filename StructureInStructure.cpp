#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct Student{
	char name[10];
	int cls;
	char grade;
	char sub[20];
};
struct subject{
	int java;
	int cpp;
	int c;
	struct Student std;
};	

int main(){
	printf("This is the example of Nested Structure ")
    struct subject sub;
	strcpy(sub.std.name,"Ali");
	sub.std.cls=17;
	sub.std.grade='A';
	strcpy(sub.std.sub,"Java is Everything");
    sub.java=99;
    sub.cpp=60;
    sub.c=80;
    
    
    printf("Stdent name : %s\n",sub.std.name);
    printf("Student cls : %d\n",sub.std.cls);
    printf("Student grade : %c\n",sub.std.grade);
    printf("Student sub : %s\n",sub.std.sub);
    printf("Java : %d\n",sub.java);
    printf("Java : %d\n",sub.cpp);
    printf("Java : %d\n",sub.c);
    
	return 0;
}

