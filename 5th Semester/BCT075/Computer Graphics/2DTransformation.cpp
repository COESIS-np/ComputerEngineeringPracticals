/*
	LAB 6 tasks; translate, scale, rotate and shearing
*/
#include<graphics.h>
#include<math.h>
#include<conio.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");

//orginal rect
	int x1 = 100, y1 = 100, x2 = 250, y2 = 170;
	setcolor(6);
	rectangle(x1,y1,x2,y2);
	outtextxy(350, 70, "ORIGINAL RECTANGLE ");
	delay(2000);

//1. translate both axis by factor 20
	int tx = 20, ty = 20;
	setcolor(15);
	rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
	outtextxy(350, 90, "TRANSLATED RECTANGLE ");
	delay(2000);

//2. Scale it with sx = 2 and sy = 3 about its center
	int sx = 2, sy = 3;
	int xf = 0.5*(x1+x2), yf = 0.5*(y1+y2);

	int x = x1*sx + xf*(1-sx);
	int y = y1*sy + yf*(1-sy);
	int x0 = x2*sx + xf*(1-sx);
	int y0 = y2*sy + yf*(1-sy);

	setcolor(4);
	rectangle(x, y, x0, y0);	
	outtextxy(350, 110, "SCALED RECTANGLE ");
	delay(2000);

//3. Rotate it by 45deg about x1,y1.
	float a = 45.0;
	float t = a*0.01744444444; //a*pi/180  -- to radian
	xf = x1, yf = y1;

	float x11 = xf + (x1-xf)*cos(t) - (y1-yf)*sin(t);
	float y11 = yf + (x1-xf)*sin(t) + (y1-yf)*cos(t);

	float x12 = xf + (x2-xf)*cos(t) - (y1-yf)*sin(t);
	float y12 = yf + (x2-xf)*sin(t) + (y1-yf)*cos(t);

	float x13 = xf + (x2-xf)*cos(t) - (y2-yf)*sin(t);
	float y13 = yf + (x2-xf)*sin(t) + (y2-yf)*cos(t);

	float x14 = xf + (x1-xf)*cos(t) - (y2-yf)*sin(t);
	float y14 = yf + (x1-xf)*sin(t) + (y2-yf)*cos(t);

	setcolor(3);
	int pt[] = {x11,y11, x12,y12, x13,y13, x14,y14, x11,y11};
	drawpoly(5, pt);
	outtextxy(350, 130, "ROTATED RECTANGLE ");
	delay(2000);

//4. Perform X-shear and y-Shear with the factor of 2 with ref x1, y1
	float shx = 2, shy = 1.5;

	x11 = x1 + shx*(y1-yf);
	y11 = (x1-xf)*shy + y1;

	x12 = x2 + shx*(y1-yf);
	y12 = (x2-xf)*shy + y1;

	x13 = x2 + shx*(y2-yf);
	y13 = (x2-xf)*shy + y2;

	x14 = x1 + shx*(y2-yf);
	y14 = (x1-xf)*shy + y2;

	setcolor(5);
	int pt1[] = {x11,y11, x12,y12, x13,y13, x14,y14, x11,y11};
	drawpoly(5, pt1);
	outtextxy(350, 150, "SHEARED RECTANGLE ");

	getch();

	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
