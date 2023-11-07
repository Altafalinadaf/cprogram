#include<stdio.h>
#include<stdlib.h>
#define S 1 

struct input{
	int row;
//	int col;
}p2;

// user Input asking
struct input userInput(){
	struct input p;
//	int row,col;
	printf("Enter size of row : ");
	scanf("%d",&p.row);
	
//	printf("Enter the column : ");
//	scanf("%d",&p.col);
	return p;
}

/*
*
* *
* * *
* * * *
* * * * *
*/

void pattern1(){
	p2=userInput();
	int i,j;
	for(i=1;i<=p2.row;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

/*
         *
       * *
     * * *
   * * * *
 * * * * *
 
 */

void pattern2(){
	p2=userInput();
	int i,j,k;
	for(i=1;i<=p2.row;i++){
		for(j=1;j<=2*(p2.row-i+2)-2;j++){  // p2.row-i
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}

void pattern3(){
	p2=userInput();
	int i,j;
	for(i=1;i<=p2.row;i++){
		for(j=1;j<=p2.row-i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
}

void pattern4(){
	p2=userInput();
	int i,j,k;
	for(int i=p2.row;i>=1;i--){
		for(j=1;j<=2*(p2.row-i+1)-2;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

/*
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
*/

/*
void pattern5(){
	p2=userInput();
	int i,j,k,l;
	
	for(i=1;i<=p2.row;i++){
		for(k=1;k<=i;k++){
			printf("* ");
		}
		for(j=1;j<=2*(p2.row-i+1)-2;j++){
			printf("  ");
		}
		for(l=1;l<=i;l++){
			printf("* ");
		}
		printf("\n");
	}
}
*/

/*
*       *
**     **
***   ***
**** ****
*********
*/

int pattern5(){
	p2=userInput();
	int col;
	printf("Enter size of col : ");
	scanf("%d",&col);
	int i,j;
	for(i=1;i<=p2.row;i++){
		for(j=1;j<=col;j++){
			if(i>=j || i+j>=10){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

void pattern6(){
	p2=userInput();
	int i,j,k;
	for(i=p2.row;i>=2;i-=2){
		for(j=1;j<=p2.row-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=p2.row;i+=2){
		for(j=1;j<=p2.row-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

void pattern7(){
	p2=userInput();
	int i,j;
	for(i=1;i<=p2.row;i++){
		for(j=1;j<=p2.row;j++){
			printf("* ");
		}
		printf("\n");
	}
}
/*

*
* *
* * *
* * * *
* * * * *
  * * * *
    * * *
      * *
        *

*/

void pattern8(){
	p2=userInput();
	int i,j,k;
	for(i=1;i<p2.row;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=p2.row;i>=1;i--){
		for(j=1;j<=2*(p2.row-i+1)-2;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
/*
        *
      * *
    * * *
  * * * *
* * * * *
* * * *
* * *
* *
*

*/

void pattern9(){
	p2=userInput();
	int i,j,k;
	for(i=1;i<p2.row;i++){
		for(j=1;j<=2*(p2.row-i+1)-2;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=p2.row;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
/*
    *
   * *
  * * *
 * * * *
* * * * *

*/

void pattern10(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i++){
		for(j=S;j<=p2.row-i;j++){
			printf(" ");
		}
		for(k=S;k<=i;k++){
			printf("* ");
        }
        printf("\n");
	}
}
/*
* * * * *
 * * * *
  * * *
   * *
    *
*/

void pattern11(){
	p2=userInput();
	int i,j,k;
	for(i=p2.row;i>=S;i--){
		for(j=S;j<=p2.row-i;j++){
			printf(" ");
		}
		for(k=S;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
/*
* * * * *
 * * * * *
  * * * * *
   * * * * *
    * * * * *
*/
void pattern12(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i++){
		for(j=S;j<i;j++){
			printf(" ");
		}
		for(k=S;k<=p2.row;k++){
			printf("* ");
		}
		printf("\n");
	}
}
/*
 * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
*/
void pattern13(){
	p2=userInput();
	int i,j,k;
	for(i=p2.row;i>=1;i--){
		for(j=S;j<i;j++){
			printf(" ");
		}
		for(k=S;k<=p2.row;k++){
			printf("* ");
		}
		printf("\n");
	}
}
/*
         *
         * *
         * * *
         * * * *
         * * * * *
* * * * *
  * * * *
    * * *
      * *
        *
*/
void pattern14(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i++){
		for(j=S;j<=p2.row+4;j++){
			printf(" ");
		}
		for(k=S;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=p2.row;i>=1;i--){
		for(j=1;j<=2*(p2.row-i+S)-2;j++){
			printf(" ");
		}
		for(k=S;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

/*
    *
  * * *
* * * * *
  * * *
    *
*/

int pattern15(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i+=2){
		for(j=S;j<=p2.row-i;j++){
			printf(" ");
		}
		for(k=S;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}

	for(i=p2.row-S-1;i>=S;i-=2){
		for(j=S;j<=p2.row-i;j++){
			printf(" ");
		}
		for(k=S;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
/*
            0
         -1 0 1
      -2 -1 0 1 2
   -3 -2 -1 0 1 2 3
-4 -3 -2 -1 0 1 2 3 4
   -3 -2 -1 0 1 2 3
      -2 -1 0 1 2
         -1 0 1
            0
*/

int pattern16() {
    p2=userInput();
    int i,j,k;
    for (i=S-1; i<p2.row;i++) {
        for (j=S-1;j<p2.row-i-1; j++) {
            printf("   ");
        }

        for (k=-i;k<=i;k++) {
            printf("%d ",k);
        }
        printf("\n");
    }

    for(i=p2.row-2;i>=S-1;i--){
        for(j=S-1;j<p2.row-i-S;j++){
            printf("   ");
        }

        for(k=-i;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

}

// 17 ) program

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

int pattern17(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i++){
		for(j=S;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	for(i=p2.row-1;i>=S;i--){
		for(k=S;k<=i;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
}


// program 18
/*
1
3 3
5 5 5
7 7 7 7
9 9 9 9 9
8 8 8 8
6 6 6
4 4
2
*/

int pattern18(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i+=2){
		for(j=S;j<=i;j+=2){
			printf("%d ",i);

		}
		printf("\n");
	}
	for(i=p2.row-S;i>=S+1;i-=2){
		for(j=1;j<=i;j+=2){
			printf("%d ",i);
		}
		printf("\n");
	}
}

// 19) program

/*
1
* *
2 2 2
* * * *
3 3 3 3 3
* * * * * *
*/

int pattern19(){
	p2=userInput();
	int k=1;
	int i,j;
	for(i=S;i<=p2.row;i++){
	    if(i==3|| i==5){
			k++;
		}
		for(j=S;j<=i;j++){

			if(i==1 || i==3 || i==5){

				printf("%d ",k);

			}
			else{
				printf("* ");
			}
		}

		printf("\n");
	}
}

// 20 ) program
/*

        A
      b b
    C C c
  d d d d
E E E E E

*/
int pattern20(){
	p2=userInput();
	int i,j,k;
	for(i=S;i<=p2.row;i++){
		for(k=S;k<=2*(6-i)-2;k++){
			printf(" ");
		}
		for(j=S;j<=i;j++){

			if(i==1 || i==3 || i==5){

				printf("%c ",64+i);

			}
			else{
				printf("%c ",96+i);
			}
		}
		printf("\n");
	}
}

int main(){
	int n;
//	printf("Patterns\nChoose any one \n1.\n*\n* *\n* * *\n* * * *\n* * * * *\n");
	printf("Enter which program you want\n1.Patter1\n2.Pattern2\n3.Pattern3\n"
	"4.Pattern4\n5.Pattern5\n6.Pattern6\n7.Pattern7\n8.Pattern8\n9.Pattern9\n10.Pattern10\n"
	"11.Pattern11\n12.Pattern12\n13.Pattern13\n14.Pattern14\n15.Pattern15\n16.Pattern\n"
	"17.Pattern17\n18.Pattern18\n19.Pattern19\n20.Pattern20\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			pattern1();
			break;
		case 2:
			pattern2();
        	break;
		case 3:
			pattern3();
			break;
		case 4:
			pattern4();
			break;
		case 5:
			pattern5();
			break;
		case 6:
			pattern6();
			break;
		case 7:
			pattern7();
			break;
		case 8:
			pattern8();
			break;
		case 9:
			pattern9();
			break;
		case 10:
			pattern10();
			break;
		case 11:
			pattern11();
			break;
		case 12:
			pattern12();
			break;
		case 13:
			pattern13();
			break;
		case 14:
			pattern14();
			break;
		case 15:
			pattern15();
			break;
		case 16:
			pattern16();
			break;
		case 17:
			pattern17();
			break;
		case 18:
			pattern18();
			break;
		case 19:
			pattern19();
			break;
		case 20:
			pattern20();
			break;
			
		default:
			printf("Invalid Option \n");
			
	}
}
