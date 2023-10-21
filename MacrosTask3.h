#include<stdio.h>
#include<string.h>
#define Prime(i,n) n%i==0

#define charValidation(ch) (!((ch>='A' && ch<='F') || (ch>='a' && ch<='f') ||(ch>='0' && ch<='9')))
#define colValidation(i) (i==2 || i==5 || i==8 || i==11 || i==14)
#define Print printf("The IP address is Valid ")

// Example 1
int prime(){
	int n,i,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(Prime(i,n)){
			count++;
		}
	}
	if(count==2){
		printf("Prime Number\n");
	}
	else{
		printf("Not Prime\n");
	}
}



int iPAddress()
{
   char str[100];
   printf("enter the vaild IP Address : ");
   scanf("%s",str);
   bool flag=1;

   if(strlen(str)!=17){
       flag=0;
   }
   else{
       for(int i=0;str[i]!='\0';i++){
           char ch=str[i];
           if(colValidation(i)){
               if(!(ch==':')){
                   flag=0;
                   break;
               }
            }
            else if(charValidation(ch)){
			  flag=0;
              break;
            }
        }
   }
   if(flag==1){
   	Print;
   }
   else{
	printf("The IP address is not Valid");
   }
    return 0;
}


