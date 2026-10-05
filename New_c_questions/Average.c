#include <stdio.h>

float calculate_average(int n[5]){
    float sum =0.0;
    for(int i=0; i<5; i++){
        sum += n[i];
    }
    return sum/5;
}
int main (){
    int n[5];
    printf("Input 5 numbers to calculate their average: ");
    scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
    float average = calculate_average(n);
    printf("The average of the 5 numbers is: %.2f\n", average);
    return 0;
}