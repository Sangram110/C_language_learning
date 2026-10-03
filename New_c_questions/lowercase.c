#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 97 && c <=122) {
        printf("The character is a lowercase letter.");
    } else {
        printf("The character is not a lowercase letter.");
    }
    return 0;
}