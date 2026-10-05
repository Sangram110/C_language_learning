#include <stdio.h>

float conversion(float celsius){
    return (celsius * 9/5) + 32;
}

int main (){
    float celsius;
    printf("Input temperature in celsius to convert to fahrenheit: ");
    scanf("%f",&celsius);
    float fahrenheit = conversion(celsius);
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}