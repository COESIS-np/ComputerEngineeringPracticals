/*Program to creating simple car shape.
*/

#include<graphics.h>
#include<conio.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");
	//bg
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(1, 1, 15);
	
	//windows
 	int pts1[] = {145,210, 160,165, 215,165, 215,210, 145,210};
 	int pts2[] = {225,210, 225,165, 250,165, 295,210, 225,210};
 	setfillstyle(SOLID_FILL, BLACK);
 	drawpoly(5, pts1);
 	drawpoly(5, pts2);
 	floodfill(155, 205, 15);
 	floodfill(235, 205, 15);

	//knob and wheels
	setfillstyle(SOLID_FILL, BLACK);
	circle(210, 230, 5);
	floodfill(210, 230, 15);
	circle(230, 230, 5);
	floodfill(230, 230, 15);
	circle(145, 300, 20);
	floodfill(145, 300, 15);
	circle(305, 300, 20);
	floodfill(305, 300, 15);
	
	//frame
 	int pts[] = {90,300, 110,215, 140,215, 155,160, 255,160, 310,215, 325,215, 350,230, 365,250, 370,270, 370,300, 90,300};
 	setfillstyle(SOLID_FILL, YELLOW);
 	drawpoly(12, pts);
 	floodfill(95, 295, 15);

	setcolor(BLACK);
	line(140,215, 310,215);
	line(220,215, 220,300);


	getch();

	closegraph();
}
