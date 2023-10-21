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

   struct sln_gec interms[9];

   int size = sizeof(interms) / sizeof(interms[0]);

   for (int i = 0; i < size; i++) {
       strcpy(interms[i].name, "Vishal R");
       interms[i].salary = 100000;
       interms[i].height = 5.6;
       interms[i].weight = 55;
       strcpy(interms[i].color, "fair");
   }

   for (int i = 0; i < size; i++) {
       printf("Details for interms[%d]:\n", i);
       printf("Name: %s\n", interms[i].name);
       printf("Salary: %.2f\n", interms[i].salary);
       printf("Height: %.2f\n", interms[i].height);
       printf("Weight: %.2f\n", interms[i].weight);
       printf("Color: %s\n", interms[i].color);
       printf("\n");
   }
}

int main() {
   array_struct();
   printf("HI");
   return 0;
}
