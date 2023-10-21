#include<stdio.h>
/*

*
* *
* * *
* * * *
* * * * *

*/


int Right_Half_Pyramid1(){
	for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
			if(row>=col){
				printf("* ");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

int Right_Half_Pyramid(){
	for(int row=0;row<5;row++){
		for(int col=0;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
}

int Right_Half_Pyramid_numbers(){
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",j+1);
		}
		printf("\n");
	}
}

int Right_Half_Pyramid_numbers1(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i>=j){
				printf("%d ",j+1);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int Right_Half_Pyramid_characters(){
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
}

int Right_Half_Pyramid_characters1(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i>=j){
				printf("%c ",'A'+j);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

// 2 ) programs
/*

        *
      * *
    * * *
  * * * *
* * * * *

*/

int Left_Half_Pyramid(){
	for(int i=0;i<5;i++){
		for(int j=0;j<2*(5-i)-2;j++){
			printf(" ");
		//	printf("%d",j<2*(5-i));
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

int Left_Half_Pyramid1(){
	for(int i=0;i<5;i++){
		for(int k=0;k<2*(5-i)-2;k++){
			printf(" ");
		}
		for(int j=0;j<5;j++){
			if(i>=j){
				printf("* ");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
/*
     *
    **
   ***
  ****
 *****
 
 */

int pattern3()
{
    for(int i=5;i>0;i--){
        for(int k=0;k<6;k++){
            if(i<=k){
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

* * * * *
  * * * *
    * * *
      * *
        *
        
*/

int pattern()
{
    for(int i=0;i<5;i++){
        for(int k=0;k<i;k++){
            printf("  ");
        }
        for(int j=0;j<5-i;j++){
            printf("*");

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
int pattern2()
{
    for(int i=5;i>0;i--){
        for(int k=0;k<5;k++){
            if(i<=k){
                printf(" ");
            }
            else{
                printf(" *");
            }
        }

        printf("\n");
    }
}

int pattern21(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

// Program 5
/*


*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *


*/
int pattern4()
{

    for(int i=0;i<5;i++){
        for(int l=0;l<=i;l++){
            printf("* ");
        }
       for(int j=0;j<2*(5-i)-2;j++){
           printf("  ");
       }
       for(int k=0;k<=i;k++){
           printf(" *");
       }
       printf("\n");
    }
}

int pattern5(){

	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("* ");
		}
		for(int j=0;j<2*(5-i)-2;j++){
			printf("  ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

// 10) program
/*
	 *
	* *
   * * *
  * * * *
 * * * * *
 
 */
 
 
 
 int pattern10(){
 	for(int i=0;i<5;i++){
 		for(int j=0;j<5-i;j++){
 			printf(" ");
		}
		 
		for(int k=0;k<=i;k++){
		 	printf("* ");
		}
		printf("\n");
	}
 }
 
 // 11) program
 
 /*
 
 * * * * *
  * * * *
   * * *
	* *
	 *
 */
 
int pattern11(){
	for(int i=5;i>=0;i--){
		for(int j=0;j<5-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}

// 6) program 6

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

int pattern6(){
	for(int i=9-1;i>=0;i-=2){
		for(int j=0;j<9-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf(" *");
		}
		printf("\n");
	}
	
	for(int i=2;i<9;i+=2){
		for(int j=0;j<9-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf(" *");
		}
		printf("\n");
	}
}

/*

 *****
  ****
   ***
    **
     *
     *
    **
   ***
  ****
 *****
 
 */
int pattern7(){
	for(int i=5-1;i>=0;i--){
		for(int j=0;j<5-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("*");
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
        *
      * *
    * * *
  * * * *
* * * * *

*/

int pattern8(){
	for(int i=5-1;i>=0;i--){
		for(int j=0;j<2*(5-i)-2;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<2*(5-i)-2;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

// 7) Program
/*

*****
*****
*****
*****
*****

*/
int pattern9(){
	for(int i=5-1;i>=0;i--){
		for(int j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
	}
}

// 8) program
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

int pattern81(){
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(int i=5-1;i>=0;i--){
		for(int k=0;k<2*(5-i)-2;k++){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
// 9) program
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


int pattern91(){
	for(int i=0;i<5;i++){
		for(int j=0;j<2*(5-i)-2;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=4;i>=0;i--){
		
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	
}

// 10) program

/*
      *
     * *
    * * *
   * * * *
  * * * * *
  
*/

int pattern101(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf(" *");
		}
		printf("\n");
	}
}

// 11 ) program

/*

 * * * * *
  * * * *
   * * *
    * *
     *

*/

int pattern111(){
	for(int i=5-1;i>=0;i--){
		for(int j=0;j<5-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

// 12) program

/*

 *****
  *****
   *****
    *****
     *****
*/

int pattern12(){
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf(" ");
		}
		for(int k=0;k<5;k++){
			printf("*");
		}
		printf("\n");
	}
}

// 13) program
/*
     *****
    *****
   *****
  *****
 *****
 
*/
int pattern13(){
	for(int i=4;i>=0;i--){
	    for(int j=0;j<=i;j++){
	     	printf(" ");
	    }
	    for(int k=0;k<5;k++){
		    printf("*");
    	}
    	printf("\n");
    }
}

// 14) program

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

int pattern14(){
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(int i=4;i>=0;i--){
		for(int j=0;j<2*(5-i)-2;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

// 15) program
/*

         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/

int pattern15(){
	for(int i=0;i<9;i+=2){
		for(int j=0;j<9-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(int i=7-1;i>=0;i-=2){
		for(int j=0;j<9-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

//int pattern16(){
//
//	for(int i=0;i<5;i++){
//
//		for(int j=0;j<5-i-1;j++){
//			printf("   ");
//		}
//		for(int k=-i;k<=0;k++){
//			printf("%d ",k);
//		}
//		printf("\n");
//	}
//}


//int pattern16(){
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5-i-1;j++){
//			printf("   ");
//		}
//		for(int k=-i;k<=0;k++){
//			printf("%d ",k);
//		}
//		printf("\n");
//	}
//}

// 16) Program

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
int pattern116() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }

        // Print numbers in the current row
        for (int j = -i; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    for(int i=5-2;i>=0;i--){
        for(int j=0;j<n-i-1;j++){
            printf("   ");
        }

        for(int j=-i;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


// program

/*
or double space
    X
    X
X X X X X
	X
	X
                         
                         
 // single space
  X
  X
XXXXX
  X
  X
  
*/

int pattern102(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==3 || j==3){
				printf("X ");
			}
			else{
				printf("  "); // 2 space for single space
			}
		}
		printf("\n");
	}
}

// program
/*

0 0 X 0 0
0 0 X 0 0
X X X X X
0 0 X 0 0
0 0 X 0 0

*/
int pattern103(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==3||j==3){
				printf("X ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}

// program
/*
0 X X X X
X 0 X X X
X X 0 X X
X X X 0 X
X X X X 0
*/
int pattern104(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==j){
				printf("0 ");
			}
			else{
				printf("X ");
			}
		}
		printf("\n");
	}
}


// program
/*
X - - - -
- X - - -
- - X - -
- - - X -
- - - - X
*/
int pattern105(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==j){
				printf("X ");
			}
			else{
				printf("- ");
			}
		}
		printf("\n");
	}
}
// program
/*
X       X
  X   X
    X
  X   X
X       X
*/
int pattern106(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if((i==j)||(i+j==6)){
				printf("X ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

// program
/*
X 0 0 0 X
0 X 0 X 0
0 0 X 0 0
0 X 0 X 0
X 0 0 0 X
*/

int pattern107(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if((i==j) || (i+j==6)){
				printf("X ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}

// program
/*

* * * * *
*       *
*       *
*       *
* * * * *

*/
int pattern108(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

// program
/*
* * * * *
* 0 0 0 *
* 0 0 0 *
* 0 0 0 *
* * * * *
*/
int pattern109(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5){
				printf("* ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}

#include<stdlib.h>

// program

/*
*
* *
* * *
* * * *
* * *
* *
*
*/

// abs() function which belongs to the stdlib.h library
// it is a absolute funtion which will return the positive value
// it convert the negative value into positive value

int pattern110(){
	int n=3;
	for(int i=3;i>=-3;i--){
		for(int j=3;j>=abs(i);j--){
			printf("* ");
		}
		printf("\n");
	}
}

// program
/*
for(int i=3;i>=-3;i--){
		for(int j=1;j<=abs(i);j++){
			printf("");
		}
		for(int k=3;k>=abs(i);k--){
			printf(" *");
		}
		printf("\n");
	}

 *
 * *
 * * *
 * * * *
 * * *
 * *
 *


for(int i=3;i>=-3;i--){
		for(int j=1;j<=abs(i);j++){
			printf(" ");
		}
		for(int k=3;k>=abs(i);k--){
			printf(" *");
		}
		printf("\n");
	}


    *
   * *
  * * *
 * * * *
  * * *
   * *
    *
    
    
    for(int i=3;i>=-3;i--){
		for(int j=1;j<=abs(i);j++){
			printf(" ");
		}
		for(int k=3;k>=abs(i);k--){
			printf("*");
		}
		printf("\n");
	}
	
   *
  **
 ***
****
 ***
  **
   *
*/


int pattern112(){
	for(int i=3;i>=-3;i--){
		for(int j=1;j<=abs(i);j++){
			printf(" ");
		}
		for(int k=3;k>=abs(i);k--){
			printf("*");
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

int pattern113(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	for(int i=5-1;i>=1;i--){
		for(int k=1;k<=i;k++){
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
	for(int i=1;i<=9;i+=2){
		for(int j=1;j<=i;j+=2){
			printf("%d ",i);
			
		}
		printf("\n");
	}
	for(int i=8;i>=2;i-=2){
		for(int j=1;j<=i;j+=2){
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
	int k=1;
	for(int i=1;i<=6;i++){
	    if(i==3|| i==5){
			k++;
		}
		for(int j=1;j<=i;j++){
			
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
	for(int i=1;i<=5;i++){
		for(int k=1;k<=2*(6-i)-2;k++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){

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
	//Right_Half_Pyramid();
	//Right_Half_Pyramid1();
	//Right_Half_Pyramid_numbers();
	//Right_Half_Pyramid_numbers1();
	//Right_Half_Pyramid_characters();
	//Right_Half_Pyramid_characters1();
	//Left_Half_Pyramid();
	//Left_Half_Pyramid1();
//	pattern();
//	pattern2();
//	pattern21();
//  pattern3();
//  pattern4();
//	pattern5();
//	pattern10();
//	pattern11();
//	pattern6();
//	pattern7();
//	pattern8();
//	pattern9();
//	pattern81();
//	pattern91();
//	pattern101();
//	pattern111();
//	pattern12();
//	pattern13();
//	pattern14();
//	pattern15();
//	pattern16();
//	pattern116();
//	pattern102();
//	pattern103();
//	pattern104();
//	pattern105();
//	pattern106();
//	pattern107();
//	pattern108();
//	pattern109();
//	pattern110();
//	pattern112();
//	pattern113();
//	pattern18();
//	pattern19();
//	pattern20();
	
	return 0;
}

