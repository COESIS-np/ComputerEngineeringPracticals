#include<graphics.h>

void drawBall(int x, int y){
	setcolor(15);
	circle(x,y,20);
	setfillstyle(SOLID_FILL, 15);
	floodfill(x,y,15);
}

void drawBasket(){
	ellipse(1100,400,0, 360,30,10);
	ellipse(1100,400,0, 360,31,11);
	rectangle(1130,340,1170,415);
	setfillstyle(SOLID_FILL,15);
	floodfill(1150,360,15);
	rectangle(1170,395,1250,405);
	floodfill(1180,400,15);
	
	line(1075,407,1080,450);
	line(1125,407,1120,450);
	
	for(int i=0;i<5;i++){
		line(1080+10*i,410,1080,410+10*i);
		line(1120-10*i,410,1120,410+10*i);
	}
	for(int i=0;i<4;i++){
		line(1120,410+10*i,1080+10*i,450);
		line(1080,410+10*i,1120-10*i,450);
	}
	line(0,700,1300,700);
}


int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");
	
	outtextxy(10,10,"MAXIMIZE WINDOW AND PRESS <SPACE>");
	drawBall(50,50);
	drawBasket();
	getch();
	cleardevice();
	
	for(int i=50;i<200;i++){
		drawBall(i,i*22/5.0-170);
		drawBasket();
		delay(20);
		cleardevice();
	}
	//moving ball in parabolic function 
	int i = 0;
	for(i=200;i<1200;i++){
		drawBall(i,i*i*13/6000.0-63/20.0*i+3730/3.0);
		drawBasket();
		delay(20);
		cleardevice();
	}
	drawBall(i,i*i*13/6000.0-63/20.0*i+3730/3.0);
	drawBasket();
	getch();

	closegraph();
}

//project paramateres linker
//-lbgi -lgdi32 -luser32
