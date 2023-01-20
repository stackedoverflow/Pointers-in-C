#include <stdio.h>

int main(){
    int a=1025; // 0b 00000000 00000000 00000100 00000001
    int *p=&a; //declaration and initialisation

    printf("Address pointed to by the pointer variable p is = %d \n", p);

    //byte0 stores = 0x01  stored at address 200 (for example)
    //byte1 stores = 0x04  stored at address 201
    //byte2 stores = 0x00  stored at address 202
    //byte3 stores = 0x00  stored at address 203

    //How to access the byte1 using pointer?

    //Integer pointer arithematic cannot be used as +1 will result in +4 of pointer p.
    //From the above example int* p0 =p+1 will result in p0 pointing to address 204
    int* p0=p+1;
    printf("Integer pointer arithematic will result in accesing %d \n",p0);

    //Therefore to access the address 201, use char*
    char *c=(char*)p+1; //Typecasting of an integer poitner to char pointer: char *c= (char*)p
    printf("Address pointed by the char pointer is %d \n",c);
    printf("Value accessed by the char pointer = %d \n",*c); //Output = 4 because byte1=0x04 = 4(decimal)

    return 0;
}