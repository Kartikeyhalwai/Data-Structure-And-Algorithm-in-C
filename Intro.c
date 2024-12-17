#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a = 5;
    int *ptr;
    ptr = &a;

    printf("\n Address of the variable a: %d", &a);
    printf("\n Value of the variable ptr: %d", ptr);

    printf("\n");
    printf("\n");

    printf("\n Dereferencing the pointer variable *ptr : %d", *ptr);
    *ptr = 7;
    printf("\n The value of a after dereferencing is: %d", a);
}