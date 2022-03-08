/*
Write a Program to draw point, line, rectangle, circle, ellipse and triangle.
*/

#include<graphics.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");

	putpixel(20, 50, RED);
	line (25,60,100,60);
	rectangle(100,100,200,250);
	circle (300, 300, 50);
	ellipse(400,400,0,360,25,50);
	//for polygon
	int triangle[] = {100, 100, 200, 20, 300, 150, 100, 100};
	drawpoly(3+1, triangle);

	getch();

	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
