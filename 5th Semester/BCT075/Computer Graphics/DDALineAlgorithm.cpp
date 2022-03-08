/*
Write an user defined function ‘DDA_line’ using
		DDA line drawing algorithm.
Draw a cube shape using ‘DDA_line’ function.

*/

#include<graphics.h>
#include<conio.h>
#include<math.h>

int round(float x){
	return floor(x + 0.5);
}

void DDA_Line(int x1, int y1, int x2, int y2, int color){
	int k = 0, dx, dy, step;
	float xi, yi;
	putpixel(x1, y1, color);
	dx = x2 - x1; dy = y2 - y1;
	if(fabs(dx) > fabs(dy))
		step = fabs(dx);
	else
		step = fabs(dy);
		
	xi = dx/(float)step, yi = dy/(float)step;
	float x = (float)x1 , y = (float)y1;
	while(k < step){
		x = x + xi;
		y = y + yi;
		delay(0);
		putpixel(round(x), round(y), color);
		k++;
	}
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");
	
//cube

	DDA_Line(200,200, 600,200, 10);
	DDA_Line(600,200, 600,600, 10);
	DDA_Line(600,600, 200,600, 10);
	DDA_Line(200,600, 200,200, 10);
	
	DDA_Line(300,100, 700,100, 9);
	DDA_Line(700,100, 700,500, 9);
	DDA_Line(700,500, 300,500, 9);
	DDA_Line(300,500, 300,100, 9);	
	
	DDA_Line(200,200, 300,100, 11);
	DDA_Line(700,100, 600,200, 11);
	DDA_Line(600,600, 700,500, 11);
	DDA_Line(300,500, 200,600, 11);
	
	getch();

	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
