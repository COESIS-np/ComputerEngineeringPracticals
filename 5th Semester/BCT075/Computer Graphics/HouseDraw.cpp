/*
TASK 2: Write a Program to Create a house, shape using different graphical objects.
*/


#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Dev-Cpp\\lbi");
		
	//roof
 	int pts2[] = {50, 30, 355, 30, 390, 65, 80, 65, 50, 30};
 	setfillstyle(BKSLASH_FILL, 12);
 	drawpoly(5, pts2);
 	floodfill(83, 60, 15);
	
	//door
	setfillstyle(SOLID_FILL, LIGHTBLUE);
 	rectangle(205,180,265,270);
 	floodfill(207, 183, 15);
 	
 	//back door
 	int pts1[] = {40, 170, 60, 175, 60, 260, 40, 255, 40, 170};
 	drawpoly(5, pts1);
 	floodfill(50,175, 15);
 	
 	//holes
 	setfillstyle(HATCH_FILL, BROWN);
 	circle(140, 130, 15);
 	circle(330, 130, 15);
 	circle(50, 110, 10);
 	floodfill(140, 130, 15);
 	floodfill(330, 130, 15);
 	floodfill(50, 110, 15);
 	
 	//front
 	int pts[] = {20, 50, 50, 30, 80, 65, 390, 65,390, 270, 80, 270, 20, 255, 20, 50};
 	setfillstyle(SOLID_FILL, LIGHTGRAY);
 	drawpoly(8, pts);
 	floodfill(30, 55, 15);
 	
 	line(80,65, 80,270);
 	
 	getch();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
