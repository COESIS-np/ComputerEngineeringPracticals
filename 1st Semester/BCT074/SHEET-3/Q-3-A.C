#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int a,b,c;
	float disc,x1,x2,real,img;
	
	clrscr();

	printf("For the quadration:\n");
	printf("Give me a: ");
	scanf("%d",&a);
	printf("\nGive me b: ");
	scanf("%d",&b);
	printf("\nGive me c: ");
	scanf("%d",&c);

	disc = b*b-(4*a*c);

	if (disc>0)
	{
		x1 = (-b - sqrt(disc))/(2*a);
		x2 = (-b + sqrt(disc))/(2*a);
		printf("The roots are real and unequal.\n");
		printf("x1=%f and x2=%f\n",x1,x2 );
	}
	else if (disc==0)
	{
		x1 = x2 = (-b/(2*a));
		printf("The roots are real and equal.\n");
		printf("x1=%6.2f and x2=%6.2f\n",x1,x2 );
	}
	else
	{
		real = -b / (2*a);
		img = sqrt(abs(disc))/(2*a);
		printf("The roots are imaginary.\n");
		printf("x1=%f + %fi\n",real,img );
		printf("x1=%f - %fi\n",real,img );
	}
	getch();
}