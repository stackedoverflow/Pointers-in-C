#include <stdio.h>

//Refer: GFG Difference between const int*, const int* cont and int const*  
//       Youtube: Pointers-freecodecamp/mycodeschool

int main (){
    int a = 10;
    int* p=&a; //pointer to integer variable. read form right to left (Bjarne Stroustrup)

    int* *q=&p; //q is a pointer to pointer of an integer

    int* **r=&q; //r is a pointer to pointer to pointer of an integer.
    printf("p = Pointer to an integer = %d address \n",p);
    printf("q = Pointer to a pointer of an integer = %d address \n",q);
    printf("r = Pointer to pointer to pointer of an integer = %d address \n",r);

    /*Visualise

    variable            address             value
        a               200                   10
        p               215                   200   //Since p points to integer a
        q               240                   215   //Since q=pointer to pointer of an integer
        r               255                   240   //Since r=pointer of a pointer of a pointer of an integer
    */

    /*Deferencing Pointer to pointers
                    *p value of a
                    *q value of p
                    *r value of q

                    **q value of a
                    **r value of p

                    ***r value of a
    */

   printf("Dereferencing *p = %d \n",*p);
   printf("Dereferencing *q = %d \n",*q);
   printf("Dereferencing *r = %d \n",*r);
   printf("\nDereferencing **q = %d \n",*(*q));
   printf("Dereferencing **r =%d \n",*(*r));
   printf("\n Dereferencing ***r =%d \n",*(*(*r)));

   return 0;
}