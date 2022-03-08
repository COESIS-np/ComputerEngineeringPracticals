#include <stdio.h>
#include <conio.h>

int main()
{
	int *p,*q;
	int a=9,b=6;
	p=&a;
	q=&b;
	printf("address of a =%u",&a );
	printf("\nAdderss of b = %u",&b);
	printf("\nAddress of p=%u",&p);
	printf("\nAddress of q=%u",&q);
	printf("\nValue of p = %u",p);
	printf("\nValue of q=%u",q);
	printf("\nsum of a and b = %d",a+b);
	printf("\n *p+*q=%d",*p+*q);
	//getch();
	return 0;
}
