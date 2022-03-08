#include <stdio.h>
#include <conio.h>
void swap(int *,int *);
void main()
{

    int a=9,b=7,*p,*q;
    p=&a,q=&b;
    printf("Value before swapping:");
    printf("\na=%d b=%d",a,b);
    swap(q,p);
    printf("\nValue after swapping:");
    printf("\na=%d b=%d",a,b);


}
void swap(int*x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;


}
