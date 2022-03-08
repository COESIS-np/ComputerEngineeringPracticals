/*
		1. Write a user defined function ‘BRESENHAM_LINE ()’ using Bresenham algorithm.
		2. Draw lines moving from left to right with positive slope and negative slope using
		BRESENHAM_LINE () function.
		
*/

#include<graphics.h>
#include<math.h>

int round(float x){
	return floor(x + 0.5);
}

void BRESENHAM_LINE(int x0, int y0, int x1, int y1, int color){
	int iy = 1, ix = 1;
	if(x0>x1)
		ix = -1;
	if(y0>y1)
		iy = -1;
	float dx, dy, pr, m;
	dx = fabs(x1-x0), dy = fabs(y1 - y0);
	m = dx/dy;
	putpixel(x0,y0,color);
	int x = x0, y = y0;
	int k = 0;
	if(m>1){
		pr = 2*dy - dx;
		while(k < dx){
			if(pr<0){
				x = x + ix, y = y;
				pr = pr + 2*dy;
			}else{
				x = x + ix, y = y + iy;
				pr = pr + 2*dy - 2*dx;
			}
			putpixel(x, y, color);
			k++;
		}
	}else{
		pr = 2*dx - dy;
		while(k < dy){
			if(pr<0){
				x = x, y = y + iy;
				pr = pr + 2*dx;
			}else{
				x = x + ix, y = y + iy;
				pr = pr + 2*dx - 2*dy;
			}
			putpixel(x, y, color);
			k++;	
		}
	}
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");

//left --> right
	BRESENHAM_LINE(10,10, 300,250, 15);
	BRESENHAM_LINE(10,300, 200,10, 12);
	
//right --> left
	BRESENHAM_LINE(600,600, 300,20, 5);
	BRESENHAM_LINE(600,40, 300,600, 6);
	
	getch();

	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
