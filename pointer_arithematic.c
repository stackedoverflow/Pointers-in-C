#include <stdio.h> //CHECK IMPORTANT SECTION at the very end.

int main(){
    int a=1025;
    int *p= &a; //declaring and initialising the pointer variable

    //Pointer Arithematic. Possible arithematic: addition,subtraction

    int size_int= sizeof(a);
    printf("The size of the integer datatype = %d Byte \n",size_int);

    //Since size_int=4Bytes, when p0=p+1 is performed, p0 points to p+4bytes 
    int *p0=p+1;
    printf("Address pointed by the p pointer = %d \n",p);
    printf("Address pointed by the p0 pointer after pointer arithematic = %d \n",p0);

    //What value is p0 pointing to??
    printf("Value at address %d being pointed by the p0 pointer is = %d \n",p0,*p0); //Garbage Value at *p0

    //Char Pointer Arithematic 
    char w='q';
    char *c=&w;

    int size_char=sizeof(w);
    printf("Size of char datatype = %d Byte \n",size_char);

    char *d=c-1;

    //Since size_char=1Byte, pointer d should point to [(address of c)-1]
    printf("Address pointed by the pointer c is %d \n",c);
    printf("Address pointed by the pointer d is %d \n",d);

    return 0;
}

/*  IMPORTANT
When performing pointer arithematic of addition and subtraction, observe the following:
When address of the original pointer is positive:
    p  =1342175652 then 
    p0 =1342175656 similarly     [For int *p0=p+1]
    p1 =1342175648               [For int *p1=p-1]

However, if the address of the original pointer is negative:
    p  =-597690212  then 
    p0 =-597690208 similarly     [For int *p0=p+1]
    p1 =-597690216               [For int *p1=p-1]

Pointer Arithematic always follows integer arithematic
*/