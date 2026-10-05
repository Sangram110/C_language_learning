#include <stdio.h>
int main (){
    int number;
    long long factorial = 1;  
    printf("Input a number to calculate its factorial: ");
    scanf("%d",&number);
    if (number > 20) {
    printf("Number too large for long long.\n");
    return 0;
}  
else if (number < 0) {
    printf("Factorial is not defined for negative numbers.\n");
    return 0;
}
else {
    for (int i=1; i<=number; ++i){
        factorial *= i;
    }
    printf("The factorial of %d is %lld\n", number, factorial);
    return 0;
}
}