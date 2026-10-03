#include <stdio.h>

int main (){
    int i=0;
    int n=1;
    printf("Input a natural number: ");
    scanf("%d",&i);
    do{
        printf("The natural number is %d\n", n);
        n++;
    }
    while(n <= i);
    return 0;
}