#include <stdio.h>

float PercentageCalculator(){
	int sub;
	printf("Enter the how many subject : ");
    scanf("%d",&sub);	
    int totalMarks=sub*100;
    int arr[sub];
    for(int i=0;i<sub;i++){
    	printf("Enter the sub %d marks : ",i+1);
    	scanf("%d",&arr[i]);
	}
	int obtainMarks=0;
	for(int i=0;i<sub;i++){
		obtainMarks=obtainMarks+arr[i];
	}
 
    float percentage = ((float)obtainMarks/totalMarks)*100;
   // printf("%.2f%%\n",percentage);
   return percentage;
    
}
void Students_Array(){
	struct student{
		char name[10];
		float subject;
		char number[10];
		int cls;
	};
	int n;
	printf("Enter how many student details you want to add : \n");
    scanf("%d",&n);
    struct student student[n];
    
    for(int i=0;i<n;i++){
    	printf("Enter the student name : ");
    	scanf("%s",&student[i].name);
	    student[i].subject = PercentageCalculator();	
		printf("Enter the Phone number of the student : ");
		scanf("%s",&student[i].number);
		printf("Enter the Standard : ");
		scanf("%d",&student[i].cls);
	}
	
	for(int i=0;i<n;i++){
		printf("Here is the details of %d student \n",i+1);
		printf("The name of student is : %s\n",student[i].name);
		printf("The phone number of student : %s\n",student[i].number);
		printf("The class of the student is : %d\n",student[i].cls);
		printf("The percentage of the student is : %.2f%%\n",student[i].subject);
		printf("****************************************************");
	}
	
}
int main()
{
 Students_Array();	
 return 0;
}
