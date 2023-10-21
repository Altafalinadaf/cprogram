#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sum=0,res,num;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num>9){
		sum=0;
		while(num>0){
			res=num%10;
			sum +=res;
			num=num/10;
		}
		num=sum;
	}
	printf("The single digit value is %d\n",sum);
	
	return 0;
}
