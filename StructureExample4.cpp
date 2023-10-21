////#include <stdio.h>
////#include<stdlib.h>
////float PercentageCalculator(){
////	int sub;
////	printf("Enter the how many subject : ");
////    scanf("%d",&sub);	
////    int totalMarks=sub*100;
////    int arr[sub];
////    for(int i=0;i<sub;i++){
////    	printf("Enter the sub %d marks : ",i+1);
////    	scanf("%d",&arr[i]);
////	}
////	int obtainMarks=0;
////	for(int i=0;i<sub;i++){
////		obtainMarks=obtainMarks+arr[i];
////	}
//// 
////    float percentage = ((float)obtainMarks/totalMarks)*100;
////   // printf("%.2f%%\n",percentage);
////   return percentage;
////    
////}
////void Students_Array(){
////	struct students{
////		char name[10];
////		float subject;
////		char number[10];
////		int cls;
////	};
////	int n;
////	printf("Enter how many student details you want to add : \n");
////    scanf("%d",&n);
////    struct students *student=(students*)malloc(n*sizeof(students));
////
////    for(int i=0;i<n;i++){
////    	students *currentStudent = &student[i];
////    	printf("Enter the student name : ");
////    	scanf("%s",&currentStudent->name);
////	    currentStudent->subject = PercentageCalculator();	
////		printf("Enter the Phone number of the student : ");
////		scanf("%s",&currentStudent->number);
////		printf("Enter the Standard : ");
////		scanf("%d",&currentStudent->cls);
////	}
////	
////	for(int i=0;i<n;i++){
////		students *currentStudent = &student[i]; // Get a pointer to the current student
////		printf("Here is the details of %d student \n",i+1);
////		printf("The name of student is : %s\n",currentStudent->name);
////		printf("The phone number of student : %s\n",currentStudent->number);
////		printf("The class of the student is : %d\n",currentStudent->cls);
////		printf("The percentage of the student is : %.2f%%\n",currentStudent->subject);
////		printf("****************************************************");
////	}
////	
////}
////int main()
////{
//// Students_Array();	
//// return 0;
////}
//
//
//
//// Example of Employee 
//#include<stdio.h>
//#include<stdlib.h>
//
//
//struct Employee {
//	char empname[10];
//	int empid;
//	int sal;
//	char company[20];
//};
//
//
//int main(){
//	int n;
//    printf("Enter the number of employee you want : ");
//    scanf("%d",&n);
//
//	// without sturct keyword also we can initialise
//    struct Employee *emp=(Employee*)malloc(n*sizeof(emp));
//    for(int i=0;i<n;i++){
//     	Employee *temp=&emp[i];
//    	printf("Enter the %d Employee Details : \n",i+1);
//    	printf("Enter the Emp name : ");
//    	scanf("%s",&temp->empname);
//    	printf("Enter the Emp id : ");
//    	scanf("%d",&temp->empid);
//    	printf("Enter the Emp salary : ");
//    	scanf("%d",&temp->sal);
//    	printf("Enter the company name : ");
//    	scanf("%s",&temp->company);
//    	printf("********************************\n");
//    	
//	}
//	
//	for(int i=0;i<n;i++){
//		Employee *temp=&emp[i];
//		printf("Here is the Details of Employee %d \n",i+1);
//		printf("Emp name : %s\n",temp->empname);
//		printf("Emp id : %d\n",temp->empid);
//		printf("Emp salary : %d\n",temp->sal);
//		printf("Emp company name : %s\n",temp->company);
//		printf("********************************\n");
//	}
//	return 0;
//}


#include <stdio.h>
#include<string.h>
#include<stdlib.h>


void array(){
    struct emp{
        int id;
        int sal;
        char name[10];
    };

    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);



    emp *e1=(emp*)malloc(n*sizeof(emp));

    for(int i=0;i<n;i++){
        scanf("%d",&e1[i].id);
        scanf("%d",&e1[i].sal);
        scanf("%s",&e1[i].name);
    }

    for(int i=0;i<n;i++){
        printf("%d\n",e1[i].id);
        printf("%d\n",e1[i].sal);
        printf("%s\n",e1[i].name);
    }
}


int main()
{
    array();

    return 0;
}
