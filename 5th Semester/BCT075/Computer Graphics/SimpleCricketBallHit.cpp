/*
	Computer graphics simple animation project.
	Sudip Neupane
	SEC075BCT016
	--> BALLING
	--> HIT BY BAT
	--> BALL TO BOUNDRY 
	--> (parabolic projection trajectry)

*/

#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>


void drawBall(int x, int y, int r){
	setcolor(15);
	circle(x,y,r);
	setfillstyle(SOLID_FILL, 15);
	floodfill(x,y,15);
}

void drawPitch(){
	setcolor(12);
	for(int i = 0; i<75;i++){
		line(55-0.5*i,680+i, 850-0.5*i, 680+i);
	}
	//white line//white line
	setcolor(15);
	for(int i = 0; i<5;i++){
		line(95+i,665, 58+i, 770);
		line(815+i,665, 771+i, 770);
	}
	//blue //blue
	setcolor(BLUE);
	for(int i = 0; i < 3; i++){
		line(36+i,657, 36+i, 727);
		line(41+i,647, 41+i, 717);
		line(46+i,637, 46+i, 707);
		
		line(822+i,657, 822+i, 727);
		line(827+i,647, 827+i, 717);
		line(832+i,637, 832+i, 707);
	}
}

void drawGround(){
	setcolor(8);
	ellipse(300,600,0,360,getmaxx()-301,599);
	setfillstyle(SOLID_FILL, 10);
	floodfill(300,600,8);
	setfillstyle(SOLID_FILL, 8);
	floodfill(800,2,10);
	
}

void drawBat(int angle){
	int xf = 60, yf = 565;
	int xt[8] = {55,65,65,80,80,40,40,55};
	int yt[8] = {540,540,590,590,690,690,590,590};
	float x[8],y[8];
	
	float t = angle*pi/180//  -- to radian
	
	for(int i = 0; i<8; i++){
		x[i] = xf + (xt[i]-xf)*cos(t) - (yt[i]-yf)*sin(t);
		y[i] = yf + (xt[i]-xf)*sin(t) + (yt[i]-yf)*cos(t);
	}
	
	int points[] = {x[0],y[0], x[1],y[1], x[2],y[2], x[3],y[3], x[4],y[4], x[5],y[5], x[6],y[6], x[7],y[7], x[0],y[0]};
	setcolor(BROWN);
	drawpoly(9,points);
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(xf,yf, BROWN);
}

void drawSix(){
	for(int i = 0; i<=60; i++){
		delay(250);
		setcolor(i%15);
		outtextxy(450,250,"6 SIX");
	}
//	settextstyle(int font, int direction, int charsize);
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\Dev-Cpp\\lib");
	
	settextstyle(BOLD_FONT, 0, 1);
	
	setcolor(15);
	outtextxy(5,5,"MAXIMIZE WINDOW AND PRESS <SPACE>");
	getch();
	
	drawGround();
	drawPitch();
	drawBat(-10);
	
	/*  BALLING  *///
//	(1005,500) --(hroz)--> (1000,500) --(st line)--> (700,700) --(parabolic) (140,600)


// move ball slightly horizontal and apply parabolic trajectry

	for(int i = 0; i<=5; i++){
		drawBall(1005-i, 500, 20);
		delay(0);
	}
	
	setcolor(12);
	outtextxy(1000,540,"PRESS <SPACE> TO BALL");
	getch();
 
 	drawGround();
	drawPitch();
	drawBat(-5);
	
////parabolic trajectry equation: y = a*x^2 + b;	
//from points (1000, 500) --> (700, 700)

	for(int i = 0; i <= 300; i++){
		int x = 1000 - i;
		int y = 1/1200.0*x*x - 25/12.0*x + 1750;
		drawBall(x,y, 20-0.0166667*i);
		delay(0);
	}
	
//	cleardevice();
	drawGround();
	drawPitch();
	drawBat(-5);
////parabolic trajectry equation: y = a*x^2 + b;
//from points (700,700) --> (150,600)
	
	for(int i = 0; i <= 550; i++){
		int x = 700 - i;
		int y = 1/4675.0*x*x + 111300/187.0;
		drawBall(x,y, 15-i/110.0);
		delay(0);
	}
	
//slight horizontal
//from points (150,600) --> (140,600)

	for(int i = 0; i<=10; i++){
		drawBall(150-i, 600, 10);
		delay(0);
	}

	drawGround();
	drawPitch();
	drawBall(140,600,10);
	drawBat(0);
	
	setcolor(15);
	outtextxy(400,710,"PRESS <SPACE> TO BAT");
	getch();
	
	drawGround();
	drawPitch();
	drawBall(140,600,10);
	
//batting batting batting batting
	for(int i = 0; i<=11; i++){
		delay(200);
		drawBat(-i*5);
	}
	drawGround();
	drawPitch();
	drawBall(140,600,10);
	drawBat(-65);
	
/////******************AFTER HITTING BY BAT)
	drawBall(140,600,10);
	delay(300);
	for(int i = 0; i <= 860; i++){
		int x = 140 + i;
		int y = 13/7920.0*x*x - 26/11.0*x + 88975/99.0;//y = a*x^2 + b
		drawBall(x,y,10);
		delay(0);
	}

//	cleardevice();
	drawGround();
	drawPitch();
	drawBat(-65);
	
//bounce after boundry
	for(int i = 0; i <= 150; i++){
		int x = 1000 + i;
		int y = 0.0261333*x*x - 56.18667*x + 30230.333;//y = a*x^2 + b
		drawBall(x,y,10);
		delay(0);
	}
	
//	cleardevice();
	drawGround();
	drawPitch();
	drawBat(-65);
	drawBall(1150,177,10);
	
	settextstyle(BOLD_FONT, 0, 50);
	
	drawSix();
		
	getch();
	getch();
	closegraph();
}
//project paramateres linker
//-lbgi -lgdi32 -luser32
