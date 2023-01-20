#include <stdio.h>

//      VOID pointer has no associated datatype. 
//      Hence, cannot be dereferenced as the complier does not know how many Bytes to read.
//      POINTER Arithematic CANNOT be performed on void pointers.
//      Usuage:In C, malloc/calloc returns null pointers, void* can be used here. 
//             In C++, the return must be typecast to a specific datatype. [check this]

int main(){
    int a=10;
    int *p=&a; //Integer pointer, pointer arithematic can be performed.

    int *p0=p+1; //Pointer Arithematic for Integer
    printf("Address pointed by p = %d \n",p);
    printf("Address pointed by p0 through pointer arithematic = %d \n",p0);

    //Generic or Void Pointer
    void* d=p;
    printf("Address pointed by the void pointer =%d \n",d); //only address can be read. Value cannot.


    
}