#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char empname[20];
    int id;
    int sal;
};

struct Company {
    int id;
    char cmpname[20];
    char address[100];
    struct Employee emp;
};

// here the printing details of emp and comp
void disp_Values(struct Company *ptr,int n){
	for(int i=0;i<n;i++){
		Company *temp=&ptr[i];
		printf("Here is the details of %d\n",i+1);
		printf("Emp name : %s\n",temp->emp.empname);
		printf("Emp ID : %d\n",temp->emp.id);
		printf("Emp sal : %d\n",temp->emp.sal);
		printf("Comp Emp ID : %d\n",temp->id);
		printf("Company name : %s\n",temp->cmpname);
		printf("Company address : %s\n",temp->address);
		printf("************************************\n");
	}	
}

// here intializing the values of comp
void intialiazingComplValues(struct Company *ptr, int n) {
	for(int i=0;i<n;i++){
		Company *temp=&ptr[i];
		printf("Enter here details of Company %d\n",i+1);
		printf("Enter the Emp ID : ");
		scanf("%d",&temp->id);
		printf("Enter the Company name : ");
		scanf("%s",&temp->cmpname);
		printf("Enter the Company address : ");
		scanf("%s",&temp->address);
	}
}

// here intializing the values of emp
void intialiazingEmpValues(struct Company *ptr, int n) {
    for (int i = 0; i < n; i++) {
       Company *temp=&ptr[i];
       printf("Enter here the details of Employee %d\n",i+1);
       printf("Enter the Emp name : ");
       scanf("%s",&temp->emp.empname);
       printf("Enter the Emp ID : ");
       scanf("%d",&temp->emp.id);
       printf("Enter the Emp salary : ");
       scanf("%d",&temp->emp.sal);
       intialiazingComplValues(temp,1);
       printf("************************************\n");      
    }
}

int main() {
    int n;
    printf("Enter the number of Employee : \n");
    scanf("%d", &n);
    
    // we are creating structure array 
    struct Company *cmp = (struct Company*)malloc(n * sizeof(struct Company));
 
    // intialiazing the values of emp and comp 
    intialiazingEmpValues(cmp, n);
    
    // printing the values of emp and comp
    disp_Values(cmp,n);
    
    // Don't forget to free the allocated memory when done
    free(cmp);
    
    return 0;
}

