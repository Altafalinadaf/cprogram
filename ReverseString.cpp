#include <stdio.h>
#include <string.h>



int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    int length = strlen(input); //hello

    for (int i = 0; i < length / 2; i++) {
        char temp = input[i];
        input[i] = input[length - 1 - i];
        input[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", input);

    return 0;
}

