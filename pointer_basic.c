#include <stdio.h>

int main(){
    int a =10;
    int *p; //declaration. POINTER IS STRONGLY DECLARED. Because the compiler has to know how many bytes to access during derefrencing.
    p=&a; //initialisation. accessing the address is done using the & symbol (Ampersand)

    printf("Value of a %d \n",a);
    printf("Address of a %d \n", &a);
    printf("Address pointed to by the pointer variable %d \n", p );

    //Dereferencing a pointer variable
    printf("Accessing value %d \n",*p); 

    //Modifying the value using pointer dereferencing
    *p=20;
    printf("Modified value of a %d \n",a);
    
    return 0;
}