#include <stdio.h>

int* sum (int a , int b ){
    int c;
    c = a + b;
    int* ptr =&sum;
    printf("The sum of %d and %d is: %d\n", a,b,c);
    return ptr;
    
}

float* average (float a , float b){
    float c;
    c = (a+b)/2.0;
    float* ptr =&average;
    printf("The average of %.2f and %.2f is: %.2f\n", a,b,c);
    return ptr;
}

int main (){
    int a = 10;
    int b = 20;

    float* ptr2;
    int* ptr1;

    ptr1 = sum(a,b);
    ptr2 = average(a,b);
       

    printf("The adress of average function is: %u and sum is %u\n", ptr1 , ptr2); 
}