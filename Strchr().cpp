#include <stdio.h>
char *myfunction(const char *str, char character) {
	
    while (*str != '\0') {
    	printf("%s*****\n",*str);
    	printf("%u\n",character);
        if (*str == character) {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[20];
    char ch;
    char *result;
    int a=12;
    int b=90;
     int *const ptr=&a;
    *ptr=22;
    
	int const *ptr1=&a;
	ptr1=&b;
	// const int *ptr1=&a;
	

//    printf("Enter a string:\n");
//    scanf("%s", str);
//
//    printf("Enter a character to search:\n");
//    scanf(" %c", &ch);

  //  printf("%u",&result);

   // result = myfunction(str, ch);

    if (result) {
        printf("found at index: %d\n", result - str);
        //printf("%u %u %u %d",&result,&str,&str[2],str[2]);
    } else {
        printf("not found\n");
    }

    return 0;
}

