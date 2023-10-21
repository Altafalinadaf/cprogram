#include<stdio.h>
#include <string.h>

//void array_struct() {
//    struct sln_gec {
//        char name[10];
//        float salary;
//        float height;
//        float weight;
//        char color[10];
//    };
//
//    struct sln_gec visal;
//    strcpy(visal.name, "Vishal R");
//    visal.salary = 100000;
//    visal.height = 5.6;
//    visal.weight = 55;
//    strcpy(visal.color, "fair");
//
//    struct sln_gec interms[9];
//
//    int size = sizeof(interms) / sizeof(interms[0]);
//
//    for (int i = 0; i < size; i++) {
//        strcpy(interms[i].name, "Vishal R");
//        interms[i].salary = 100000;
//        interms[i].height = 5.6;
//        interms[i].weight = 55;
//        strcpy(interms[i].color, "fair");
//    }
//
//    for (int i = 0; i < size; i++) {
//        printf("Details for interms[%d]:\n", i);
//        printf("Name: %s\n", interms[i].name);
//        printf("Salary: %.2f\n", interms[i].salary);
//        printf("Height: %.2f\n", interms[i].height);
//        printf("Weight: %.2f\n", interms[i].weight);
//        printf("Color: %s\n", interms[i].color);
//        printf("\n");
//    }
//}
//
//int main() {
//   array_struct();
//   
//   printf("HI");
//   return 0;   
//}

// Example 1
// WAP to store information of 10 employees and to display information of an
//employee depending upon the employee number input from the user.

void emp_list(){
	struct Employee{
		int id;
		char name[10];
		float sal;
		char des[10];
 	};
 	int n;
 	printf("Enter the number of Employee : \n");
 	scanf("%d",&n);
	struct Employee emp[n];
	
	for(int i=0;i<n;i++){
		printf("Enter the %d Employee Details : \n",i+1);
		printf("Enter the Id : \n");
		scanf("%d",&emp[i].id);
		printf("Enter the Name : \n");
		scanf("%s",&emp[i].name);
		printf("Enter the Salary : \n");
		scanf("%f",&emp[i].sal);
		printf("Enter the Job : \n");
		scanf("%s",&emp[i].des);
		printf("****************************************\n");
	}
	
	int n2;
	printf("Enter the number which employee details you want from %d employees : ",n);
	scanf("%d",&n2);
//	for(int i=0;i<n;i++){
//		printf("Here is the %d Employee Details : \n",i+1);
		
		printf("The Employee Id is : %d\n",emp[n2-1].id);
	
		printf("The Employee Name is : %s\n",emp[n2-1].name);
	
		printf("The Employee Salary is : %f\n",emp[n2-1].sal);
	
		printf("The Employee Job is : %s\n",emp[n2-1].des);
		
		printf("****************************************\n");
	
//	}
}


// this is example 2
//. WAP to accept and print a student's result using a structure.

void student_result(){
	struct student{
		char name[10];
		int java;
		int cpp;
		int c;
		int python;
		
	};
	int n;
	printf("Enter the number of student you want to add : \n");
	scanf("%d",&n);
	struct student stu[n];
	
	for(int i=0;i<n;i++){
		printf("Enter the %d Information here \n",i+1);
		printf("Enter the name of Student : \n");
		scanf("%s",&stu[i].name);
		printf("Enter the Java Marks : \n");
		scanf("%d",&stu[i].java);
		printf("Enter the c++ Marks : \n");
		scanf("%d",&stu[i].cpp);
		printf("Enter the c Marks : \n");
		scanf("%d",&stu[i].c);
		printf("Enter the python Marks : \n");
		scanf("%d",&stu[i].python);
		printf("****************************************\n");
	}
	
	for(int i=0;i<n;i++){
		printf("Here is Information of the %d Student : \n",i+1);
		
		printf("Enter the name of Student : %s\n",&stu[i].name);
	
		printf("The Java Marks : %d\n",stu[i].java);

		printf("Enter the c++ Marks : %d\n",stu[i].cpp);

		printf("Enter the c Marks : %d\n",stu[i].c);

		printf("Enter the python Marks : %d\n",stu[i].python);
		
		printf("****************************************\n");

	}
}






// this is example of 3
//WAP that uses a function that takes two date (day, month, year) structure
//objects as arguments and returns the structure with later date.

struct Date {
    int day;
    int month;
    int year;
};

struct Date compare_dates(struct Date date1, struct Date date2) {
    if (date1.year > date2.year) {
        return date1;
    } else if (date1.year < date2.year) {
        return date2;
    } else {
        if (date1.month > date2.month) {
            return date1;
        } else if (date1.month < date2.month) {
            return date2;
        } else {
            if (date1.day > date2.day) {
                return date1;
            } else {
                return date2;
            }
        }
    }
}

void two_dates() {
    struct Date date1, date2, result;

    printf("Enter day for date 1: ");
    scanf("%d", &date1.day);
    printf("Enter month for date 1: ");
    scanf("%d", &date1.month);
    printf("Enter year for date 1: ");
    scanf("%d", &date1.year);

    printf("Enter day for date 2: ");
    scanf("%d", &date2.day);
    printf("Enter month for date 2: ");
    scanf("%d", &date2.month);
    printf("Enter year for date 2: ");
    scanf("%d", &date2.year);

    result = compare_dates(date1, date2);

    printf("The later date is: %d-%d-%d\n", result.day, result.month, result.year);

}

//void add_points(){
//	struct points{
//		int p1;
//		int p2
//	};
//}



int main(){
//	student_result();
	emp_list();
//    two_dates();
}


