#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Input marks for Subject A\n");
    scanf("%d", &a);
    printf("Input marks for Subject B\n");
    scanf("%d", &b);
    printf("Input marks for Subject C\n");
    scanf("%d", &c);

    int m = 100;
    // m is maximum marks obtainaible

float percentage = (a + b + c) * 100.0f / (m * 3);

if (a<0||a>100){
    printf("Invalid Score");
}
else if (b<0||b>100){
    printf("Invalid Score");
}
else if (c<0||c>100){
    printf("Invalid Score");
}
else if (percentage>90.00){
    printf("Your grade is A+");
}
else if (percentage>80.00){
    printf("your Grade is B");
}
else if (percentage>70.00){
    printf("Your grade is c");
}
else{
    printf("Not eligible");
}
}