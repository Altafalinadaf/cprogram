#include<stdio.h>

void struct_array(){
	struct Employee{
		char name[20];
		int empid;
		float salary;
	};
	int n;
	printf("Enter the number of value : \n");
	scanf("%d",&n);
	struct Employee emp[n];
	for(int i=0;i<n;i++){
		printf("Enter the Emp name : ");
		scanf("%s",&emp[i].name);
		printf("Enter Emp ID : ");
		scanf("%d",&emp[i].empid);
		printf("Enter the Emp Salary : ");
		scanf("%f",&emp[i].salary);
		printf("*******************************\n");
	}
	
	for(int i=0;i<n;i++){
		printf("Here is the details of Employee \n");
		printf("Emp name : %s\n",emp[i].name);
		printf("Emp id : %d\n",emp[i].empid);
		printf("Emp salary : %f\n",emp[i].salary);
		printf("*******************************\n");
	}
}

int main(){
	struct_array();
	return 0;
}
