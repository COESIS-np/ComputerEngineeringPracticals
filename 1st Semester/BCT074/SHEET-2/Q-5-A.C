#include <stdio.h>
#include <conio.h>

void main()
{
	int roll,std;
	float sub1,sub2,sub3,avg;
	char sec;
	char name[20];
	clrscr();

	printf("Give me the name: ");
	gets(name);
	printf("\nGive me the Roll No.:");
	scanf("%d",&roll);
	printf("\nSubject-1:");
	scanf("%f",&sub1);
	printf("\nSubject-2:");
	scanf("%f",&sub2);
	printf("\nSubject-3:");
	scanf("%f",&sub3);

	avg = (sub1+sub2+sub3)/3;

	clrscr();
	//displaying the result
	printf("\n| Name            | Roll | Subject-1 | Subject-2 | Subject-3 | Average |");
	printf("\n|----------------------------------------------------------------------|");
	printf("\n|%-20s| %5d| %10.2f|%10.2f|%10.2f| %8.2f|",name,roll,sub1,sub2,sub3,avg);
	printf("\n|----------------------------------------------------------------------|");
	getch();
}