#include<stdio.h>
// pass by value

struct emp2{
	char name[100];
	int id;
	int sal;
};
struct emp2 e1(struct emp2 e2){
	printf("Enter the name : ");
	scanf("%s",&e2.name);
	printf("Enter id : ");
	scanf("%d",&e2.id);
	printf("Enter sal : ");
	scanf("%d",&e2.sal);
//	displayStruct(e2);
	return e2;
}
void displayStruct(){
	struct emp2 e3;
	e3=e1(e3);
	printf("%s\n%d\n%d\n",e3.name,e3.id,e3.sal);
}



struct emp3{
	char name[100];
	int id;
	int sal;
};

// pass by reference

void displayStruct2(struct emp3 *e2){
	printf("%s\n%d\n%d\n",e2->name,e2->id,e2->sal);
}

int structure3(){
	struct emp3 e2;
	printf("Enter the name : ");
	scanf("%s",&e2.name);
	printf("Enter id : ");
	scanf("%d",&e2.id);
	printf("Enter sal : ");
	scanf("%d",&e2.sal);
	displayStruct2(&e2);
}

