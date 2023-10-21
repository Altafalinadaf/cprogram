#include<stdio.h>
#include<string.h>
int main(){
	char str1[10];
	char str2[20];
	int res;
	
//	strcpy(str1,"khaleel");
//	strcpy(str2,"khaleel");


    //user defined input
    printf("Enter the str1 name : ");
    scanf("%s",&str1);
    
    printf("Enter the str2 name : ");
    scanf("%s",&str2);
	
	res=strcoll(str1,str2);
	
	printf("%d",res);
	
	if(res<0){
		printf("string1 is less than string2");
	}
	else if(res>0){
		printf("String2 is less the string 1");
		
	}
	else{
		printf("The string1 and string2 is equal ");
	}
	return 0;
}


//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main() {
//    char str1[10];
//    char str2[20];
//    int res;
//
//    // User-defined input
//    printf("Enter the str1 name : ");
//    scanf("%s", str1);
//
//    printf("Enter the str2 name : ");
//    scanf("%s", str2);
//
//    // Convert strings to lowercase before comparison
//    for (int i = 0; str1[i]; i++) {
//        str1[i] = tolower(str1[i]);
//    }
//    for (int i = 0; str2[i]; i++) {
//        str2[i] = tolower(str2[i]);
//    }
//
//    res = strcmp(str1, str2);
//
//    printf("%d\n", res);
//
//    if (res < 0) {
//        printf("string1 is less than string2\n");
//    } else if (res > 0) {
//        printf("string2 is less than string1\n");
//    } else {
//        printf("The string1 and string2 are equal\n");
//    }
//    
//    return 0;
//}


/* A C program to demonstrate working of memcpy */
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//	char str1[] = "Geekgtggts";
//	char str2[] = "Quiz";
//	
//	char str3[] = "Geeks777771";
//	char str4[] = "Quiz";
//
//	puts("str1 before memcpy ");
//	puts(str1);
//	puts("str3 before strcpy ");
//	puts(str3);
//
//	/* Copies contents of str2 to str1 */
//	memcpy(str1, str2,sizeof(str2));
//	
//	strcpy(str3,str4);
//
//	puts("\nstr1 after memcpy ");
//	puts(str1);
//	puts("\nstr3 after strcpy ");
//	puts(str3);
//	
//
//	return 0;
//}


//// without using inbuilt function accessing the memcopy function
//int main(){
//	char str1[]="Hi"; // str1
//	char str2[]="hi"; //str2 
//	
//	int i=0; //0
//	for(i=0;str2[i]!='\0';i++){
//		str1[i]=str2[i];
//	}
//	str1[i]='\0';
//	printf("The str1 is : %s",str1);
//}
//



// without using inbuilt function accessing the strcoll  function

//int main(){
//	char str1="khaleel";
//	char str2="khaleel";
//	printf("Enter how many character you want : ");
//	int n;
//	scanf("%d",&n);
//	
//	
//	return 0;
//	return 0;
//}
