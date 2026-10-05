// a pointer in c language is variable that stores the memory adress of another variable 
// a pointer is declared using the * operator before the pointer name 
// the & operator is used to get the memory address of a variable 


#include <stdio.h>  
int main(void){
    int* pc; // used * to declare a pointer variable 
    int c;
    c=22;
    printf("The adress of c is: %p\n", (void *)&c); // used to get the memory address of c 
    printf("The value of c is: %d\n", c);
    pc = &c; // used to assign the memory address of c to the pointer variable pc  
    printf("The adress of pc is: %p\n", (void *)pc); // used to get the memory address of pc 
    printf("The value of pc is: %d\n", *pc); // used to get the value of the variable that pc points to 
    return 0;
}