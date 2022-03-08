/*
MAN
*/

#include<graphics.h>
#include<conio.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");

	//body
 	int pts[] = {300,200, 400,200, 400,210, 450,270, 480,265, 480,285, 450,290, 400,230, 400,360, 300,360, 300,230, 250,290, 220,285, 220,265, 250,270, 300,210, 300,200};
 	setfillstyle(SOLID_FILL, YELLOW);
 	drawpoly(17, pts);
 	floodfill(310, 220, 15);
	
	//legs
	rectangle(315,360, 335,520);
	rectangle(365,360, 385,520);
	floodfill(320, 370, 15);
	floodfill(370, 370, 15);
	
	//shoes
	rectangle(300,520, 337,537);
	rectangle(363,520, 400,537);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(305, 525, 15);
	floodfill(365, 525, 15);
	
	//hands
	rectangle(180,260, 220,290);
	rectangle(480,260, 520,290);
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(190, 265, 15);
	floodfill(485, 265, 15);
	
	//eye & nose
	circle(335, 100, 5);
	circle(365, 100, 5);
	circle(350, 135, 5);
	
	//head
	circle(350, 115, 45);
	floodfill(350, 115, 15);
	
	//neck
	rectangle(330,160, 370,200);
	floodfill(335, 165, 15);
	
	getch();

	closegraph();
}
