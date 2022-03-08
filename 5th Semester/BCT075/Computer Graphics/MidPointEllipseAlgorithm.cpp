/*

Write a user defined function and draw an ellipse using Mid-Point ellipse algorithm.

*/

#include<graphics.h>

void symmetryPlot(int x, int y, int xc, int yc){
	putpixel(xc+x,yc+y, 9); //(x,y)
	putpixel(xc-x,yc+y, 10); //(-x,y)
	putpixel(xc-x,yc-y, 12); //(-x,-y)
	putpixel(xc+x,yc-y, 15); //(x,-y)
}

void midPointEllipse(int xc, int yc, int rx, int ry){
	int x = 0, y = ry;
	
	//region 1
	float pr = ry*ry - rx*rx*ry + 0.25*rx*rx;
	while(ry*ry*x < rx*rx*y){
		delay(10);
		if(pr<=0){
			x = x + 1;
			y = y;
			pr = pr + 2*ry*ry*x + ry*ry;
		}else{
			x = x + 1;
			y = y - 1;
			pr = pr + (2*ry*ry*x - 2*rx*rx*y) + ry*ry;
		}
		symmetryPlot(x,y,xc,yc);
	}	
	//region 2
	while(y != 0){
		delay(0);
		if(pr<=0){
			x = x + 1;
			y = y - 1;
			pr = pr + (2*ry*ry*x - 2*rx*rx*y) + rx*rx;
		}else{
			x = x;
			y = y - 1;
			pr = pr - 2*rx*rx*y + rx*rx;
		}
		symmetryPlot(x,y,xc,yc);
	}		
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");
	
	midPointEllipse(300,300,150,250);
	midPointEllipse(300,300,250,150);
	
	getch();

	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
