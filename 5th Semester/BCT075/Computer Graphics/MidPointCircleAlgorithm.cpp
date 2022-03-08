/*
	MIDPOINT CIRCLE
*/

#include<graphics.h>

void symmetryPlot(int x, int y, int xc, int yc){
	putpixel(xc+x,yc+y, 9); //(x,y)
	putpixel(xc+y,yc+x, 10); //(y,x)
	putpixel(xc+y,yc-x, 12); //(y,-x)
	putpixel(xc+x,yc-y, 15); //(x,-y)
	putpixel(xc-x,yc-y, 12); //(-x,-y)
	putpixel(xc-y,yc-x, 9); //(-y,-x)
	putpixel(xc-y,yc+x, 15); //(-y,x)
	putpixel(xc-x,yc+y, 4); //(-x,y)
}

void midPointCircle(int xc, int yc, int r){
	float pr = 5.0/4.0-r;
	int x = 0, y = r;
	symmetryPlot(x,y,xc,yc);
			
	while(x<=y){
		delay(20);
		x = x + 1;
		if(pr<0){
			y = y;
			pr = pr + 2*x + 1;
		}else{
			y = y - 1;
			pr = pr + 2*(x - y) + 1;
		}
		symmetryPlot(x,y,xc,yc);
	}		
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");
	
	midPointCircle(225,225,1);
	midPointCircle(225,225,10);
	midPointCircle(225,225,25);
	midPointCircle(225,225,50);
	midPointCircle(225,225,90);
	midPointCircle(225,225,140);
	midPointCircle(225,225,200);

	getch();

	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
