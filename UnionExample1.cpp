#include<stdio.h>
#include<string.h>
// this for struct union is similar to struct
//struct student{
//	int id;
//	int marks;
//	char fav_char;
//	char name[20];
//};

union student{
	int id;
	int marks;
	char fav_char;
	char name[20];
	double a;
	int b;
};

int main(){
//	struct student ali;
//	ali.id=31;
//	ali.marks=74;
//	ali.fav_char='S';
//	strcpy(ali.name,"AS");
// this print statement is for struct 7
//	printf("The student id is : %d\n",ali.id);
//	printf("The stuednt marks is : %d\n",ali.marks);
//	printf("The student fav char is : %c\n",ali.fav_char);
//	printf("The student name is : %s\n",ali.name);

	union student ali;

	ali.marks=74;
	ali.fav_char='S';
	strcpy(ali.name,"AS"); // this value is safe because it's a last value rest all are not contains the proper value
	ali.a=205.0;
 	ali.id=31;
 	ali.b=200;
	
	printf("a = %f\n",ali.a);
	printf("The student id is : %d\n",ali.id);
	printf("a = %d\n",ali.b);

	printf("The stuednt marks is : %d\n",ali.marks);
	printf("The student fav char is : %c\n",ali.fav_char);
	printf("The student name is : %s\n",ali.name);

	return 0;
}
