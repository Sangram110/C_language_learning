#include<stdio.h>

int main (){
    int a;
    printf("Add your grades \n");
    scanf("%d" , &a);

    if(a>=90){
        printf("Your score is A\n");
    }
    else if (a>=80 , a<90){
        printf("your score is B\n");
    }
    else if (a>=70 , a<80){
        printf("your score is B\n");
    }
    else if (a>=60 , a<70){
        printf("your score is B\n");
    }
    else if (a>=50 , a<60){
        printf("your score is B\n");
    }
    else if (a<50){
        printf("you've failed the exam\n");
    }
    
}