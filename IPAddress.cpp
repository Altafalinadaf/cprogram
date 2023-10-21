
#include <stdio.h>
#include<stdbool.h>
#include<string.h>
/*


#include <stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
   char str[100];
   printf("enter the vaild IP Address : ");
   scanf("%s",str);
   bool flag=1;

   if(strlen(str)!=17){
       printf("The IP address is not Valid ");
       return 0;
   }
   else{
       // this is for the : colon validation
       for(int i=0;str[i]!='\0';i++){
           char ch=str[i];
           if(i==2 || i==5 || i==8 || i==11 || i==14){
               if(!(str[i]==':')){
                   printf("The IP address is not valid ");
                   return 0;
               }
             //  printf("The IP address is not Valid ");
             //  return 0;
           }
        //   else if((ch>='A' && ch<='F') || (ch>='a' && ch<='f') ||(ch>='0' && ch<='9')){
        //       printf("The IP address is Valid ");
        //       return 0;
        //   }
        //   else{
        //       printf("The IP address is not Valid ");
        //       return 0;
        //   }

       }
       // this is for the character validation
      for(int i=0;str[i]!='\0';i++){
          char ch=str[i];
          if((ch>='A' && ch<='F') || (ch>='a' && ch<='f') ||(ch>='0' && ch<='9') || ch==':'){
              flag=1;
          }
      }
      // this is for checking the each character with the : colon
      // every 2 character we must used the : else it's not valid
      for(int i=0;str[i]!='\0';i++){
          char ch=str[i];
          // 45:45:45:65:45:65
           if(i==2 || i==5 || i==8 || i==11 || i==14){
               continue;
           }
           else{
             if(!((ch>='A' && ch<='F') || (ch>='a' && ch<='f') ||(ch>='0' && ch<='9') )){
             	flag=0;
             	break;
              //printf("The IP address is not Valid ");
              //return 0;
			  //printf("%c\n",ch);
             }
           }
      }
   }
   if(flag==1){
	printf("The IP address is Valid ");
   }
   else{
	printf("The IP address is not Valid");
   }
    return 0;
}
*/

#define charValidation(ch) (!((ch>='A' && ch<='F') || (ch>='a' && ch<='f') ||(ch>='0' && ch<='9')))
#define colValidation(i) (i==2 || i==5 || i==8 || i==11 || i==14)
#define Print printf("The IP address is Valid ")
int main()
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
