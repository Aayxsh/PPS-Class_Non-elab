//Write a c program to print the address of a normal variable, pointer varible along with its value.
/* to find: adress  of norml variable
        pointer variable with its value*/


#include<stdio.h>
int main(){
int  i = 90;
printf("i =%p\n",&i);
int *ptr = &i;
printf("&ptr = %p\n",&ptr);
printf("*ptr = %d\n",*ptr);
}
