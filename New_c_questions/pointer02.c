#include <stdio.h>
// make a void fucntion because we are not trying to return the value just write it in the main fucntion
void sum (int a , int b, int* result){
    *result = a + b;
}

void average (float a, float b, float* result){
    *result = (a + b) / 2.0;
}


int main(){
    int a =10;  
    int b =20;
    
    int result_sum;    // using this variable to store the result of sum function 
    float result_average;  // using this variable to store the result of average function

    sum(a, b, &result_sum);
    average(a, b, &result_average);

    printf("Sum: %d\n", result_sum);
    printf("Average: %.2f\n", result_average);

    return 0;
}