#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c;
	int *pa, *pb,*pc;
	int **tpa, **tpb;
	int ***tp;
	
	a=2,b=4,c=6;
	pa = &a,pb = &b, pc = &c;
	tpa = &pa,tpb = &pb;
	tp = &tpa;
	
	printf("\n\na = %d\t%u",a,&a);
	printf("\nb = %d\t%u",b,&b);
	printf("\nc = %d\t%u",c,&c);

	printf("\n\npa = %u\t%u",pa,&pa);
	printf("\npb = %u\t%u",pb,&pb);
	printf("\npc = %u\t%u",pc,&pc);

	printf("\n\n*tpa = %u",*tpa);
	printf("\n**tpa = %u",*tpa);
	printf("\n*tp = %u",*tp);
	printf("\n***tp = %u",***tp);

	getch();
	return 0;
}
