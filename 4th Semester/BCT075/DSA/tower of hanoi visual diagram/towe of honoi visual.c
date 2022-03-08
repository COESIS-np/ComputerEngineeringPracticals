/*  ######Created by Sulphuric.Sudip ####

		Started on:- 24 sep, 2020
*/

#include<stdio.h>
#include<windows.h>
#include<conio.h>

HANDLE hConsole;

//function for cursor ppsitiom
void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//function for color change
void changeColor(int desiredColor){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor);
}

int tow[3][100];
int top[3];
int no;
int step=0;
void push(int i,char ring){
	top[i]++;
	tow[i][top[i]]=ring;
}
int pop(int i){
	int ring;
	ring=tow[i][top[i]];
	top[i]--;
	return ring;
}
void showring(){
	system("cls");
	int i,j;
	changeColor(15);gotoxy(17,5+no+4);printf("SOURCE");
	gotoxy(96,5+no+4);printf("DESTINATION");
	for(i=0;i<3;i++){
		if(i==0)
			changeColor(10);
		if(i==1)
			changeColor(11);
		if(i==2)
			changeColor(14);
		gotoxy(20*(2*i+1)-4,5+no+2);printf("_________");
		gotoxy(20*(2*i+1)-3,5+no+3);printf("TOWER:%d",i+1);
		for(j=0;j<=top[i];j++){
			gotoxy(20*(2*i+1)-1,5+no-j);printf("--%d--",tow[i][j]);	
		}
	}
}
void ToH(int n, int T0, int T1, int T2){
	if(n==1){
		getch();
		push(T2,pop(T0));//pop top ring of tower 0 and push to tower 2;
		showring();
		step++;
		gotoxy(30,0);changeColor(15);printf("STEP:%d\tMoved Ring --%d-- from Tower:%d to Tower:%d .    ",step,n,T0+1,T2+1);
		return;
	}
	ToH(n-1,T0,T2,T1);
	getch();
	push(T2,pop(T0));
	showring();
	step++;
	changeColor(15);gotoxy(30,0);printf("STEP:%d\tMoved Ring --%d-- from Tower:%d to Tower:%d .       ",step,n,T0+1,T2+1);
	ToH(n-1,T1,T0,T2);
}

int main(){
	
	//for Full SCREEN
	hConsole = CreateFile("CONOUT$", GENERIC_WRITE | GENERIC_READ,
				FILE_SHARE_READ | FILE_SHARE_WRITE,
				0L, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0L);
	COORD screen_size={155,200};
	SetConsoleScreenBufferSize(hConsole, screen_size);

	int i;
	for(i=0;i<3;i++){
		top[i]=-1;
	}
	gotoxy(20,1);changeColor(15);printf("*****Tower OF Hanoi******STEP BY STEP VISUAL ILLUSTRATION ******");
	gotoxy(2,5);changeColor(11);printf("Give no. of rings for tower of hanoi");
	changeColor(12);printf("\tThink before giving larger value ");
	scanf("%d",&no);
	changeColor(10);printf("Ring --1-- is the smallest while Ring --%d-- is the largest.\t\t press space now to continue and  after every step\n",no);
	getch();
	changeColor(11);
	//adding ring to source tower
	for(i=0;i<no;i++){
		top[0]++;
		tow[0][top[0]]=no-i;
	}
	showring();
	ToH(no,0,1,2);
	printf("\n\nfinished!!!!!!!\a");
	getch();
	return 0;
}
