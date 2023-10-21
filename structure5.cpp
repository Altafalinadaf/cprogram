//#include<stdio.h>
//#include<string.h>
//
//struct emp{
//	int id;
//	char name[10];
//	float sal;
//};
//
//void print(struct emp* e2){
//	e2->id=21;`
//	strcpy(e2->name,"Ali");
//	e2->sal=5888;
//
//	printf("id = %d \n",e2->id);
//	printf("Name = %s \n",e2->name);
//	printf("sal = %f \n",e2->sal);
//}
//
//int main(){
//	
//	struct emp e3;
//	print(&e3);
//
////	struct emp e1;
////	struct emp* e2=&e1;
////	e2->id=21;
////	strcpy(e2->name,"Ali");
////	e2->sal=5888;
////	
////	printf("id = %d \n",e2->id);
////	printf("Name = %s \n",e2->name);
////	printf("sal = %f \n",e2->sal);
//}


// anotehr program
/*
	struct emp e1;
	e1.id=89;
	e1.sal=9000;
	e1.grade='A';

//	printf("%d\n%d\n%c",e1.id,e1.sal,e1.grade);
*/

/*
#include<stdio.h>

struct emp{
	int id;
	int sal;
	char grade;
};


int main(){
   struct emp e1[2];
   for(int i=0;i<2;i++){
   	printf("Etner the id : ");
   	scanf("%d",&e1[i].id);
   	printf("Enter the sal : ");
   	scanf("%d",&e1[i].sal);
   	printf("Enter the grade : ");
   	scanf(" %c",&e1[i].grade);
   }
   for(int i=0;i<2;i++){
   	printf("id %d\n",e1[i].id);
   	printf("sal %d\n",e1[i].sal);
   	printf("grade %d\n",e1[i].grade);
   }
}
*/


/*

#include<stdio.h>
#include<stdlib.h>

struct emp{
	int id;
	int sal;
	char name[10];
};

int main(){
	int n;
	printf("Enter the number of employee : ");
	scanf("%d",&n);
	struct emp* e1=(emp*)malloc(n*sizeof(emp));
	
	for(int i=0;i<n;i++){
		printf("Enter the id : ");
		scanf("%d",&e1[i].id); //   used this only for one variable initialization ..// scanf("%d",&e1->id);
		printf("Enter the sal : ");
		scanf("%d",&e1[i].sal);
		printf("Enter the grade : ");
		scanf("%s",&e1[i].name);
	}
	
	for(int i=0;i<n;i++){
		printf("id = %d\n",e1[i].id);
		printf("sal = %d\n",e1[i].sal);
		printf("name = %s\n",e1[i].name);
	}
}


*/

//#include<stdio.h>
//#include<stdlib.h>
//
//struct emp{
//	int id;
//	int sal;
//	char name[10];
//};
//
//int main(){
//	int n;
//	printf("Enter the number of employee : ");
//	scanf("%d",&n);
//	struct emp** e1=(emp**)malloc(n*sizeof(emp*));
//
//	for(int i=0;i<n;i++){
//		e1[i]=(emp*)malloc(n*sizeof(emp));
//		printf("Enter the id : ");
//		scanf("%d",&e1[i]->id);
//		printf("Enter the sal : ");
//		scanf("%d",&e1[i]->sal);
//		printf("Enter the grade : ");
//		scanf("%s",&e1[i]->name);
//	}
//
//	for(int i=0;i<n;i++){
//		printf("id = %d\n",e1[i]->id);
//		printf("sal = %d\n",e1[i]->sal);
//		printf("name = %s\n",e1[i]->name);
//	}
//}
