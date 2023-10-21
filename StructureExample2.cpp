#include<stdio.h>
#include <string.h>

void array_struct() {
    struct sln_gec {
        char name[10];
        float salary;
        float height;
        float weight;
        char color[10];
    };

    struct sln_gec visal;
    strcpy(visal.name, "Vishal R");
    visal.salary = 100000;
    visal.height = 5.6;
    visal.weight = 55;
    strcpy(visal.color, "fair");
    
    
    printf("Enter the employee you want : \n");
    int n;
    scanf("%d",&n);

    struct sln_gec interms[n];

    int size = sizeof(interms) / sizeof(interms[0]);
    
    // declaring the values of Struct like this 

//    for (int i = 0; i < size; i++) {
//        strcpy(interms[i].name, "Vishal R");
//        interms[i].salary = 100000;
//        interms[i].height = 5.6;
//        interms[i].weight = 55;
//        strcpy(interms[i].color, "fair");
//    }

    // asking the value from the users
    
    for(int i=0;i<size;i++){
    	printf("Enter the Employee%d name :  ",i+1);
    	scanf("%s",&interms[i].name);
        printf("Salary employee %d : ",i+1);
        scanf("%f",&interms[i].salary);
        printf("Height emplloyee %d : ",i+1);
        scanf("%f",&interms[i].height);
        printf("Weight employee %d : ",i+1);
        scanf("%f",&interms[i].weight);
        printf("Color employee %d: ",i+1);
        scanf("%s",&interms[i].color);
       
	}
    for (int i = 0; i < size; i++) {
        printf("Details for Employee : %d\n", i+1);
        printf("Name: %s\n", interms[i].name);
        printf("Salary: %.2f\n", interms[i].salary);
        printf("Height: %.2f\n", interms[i].height);
        printf("Weight: %.2f\n", interms[i].weight);
        printf("Color: %s\n", interms[i].color);
        printf("**************************************\n");
    }
}

int main() {
   array_struct();
   //return 0;   
}
