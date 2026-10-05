#include <stdio.h>

int main (){
    int n=8;
    int sum = 0;
    for (int i=1; i<=10 ; i++){
        int result = n*i;
        sum += result;
        printf("%d * %d = %d\n", n, i, result);
    }
    printf("The sum of the multiplication table of %d is %d\n", n, sum);
    return 0;
}