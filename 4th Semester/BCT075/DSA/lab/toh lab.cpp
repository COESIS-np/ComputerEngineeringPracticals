#include<stdio.h>
#include<conio.h>
int step=0;
void ToH(int n, int T0, int T1, int T2){
	if(n==1){
		getch;
		step++;
		printf("\nSTEP:%d\t  Moved top ring from\tTower %d\t  to\tTower %d .    ",step,T0+1,T2+1);
		return;
	}
	ToH(n-1,T0,T2,T1);
	getch();
	step++;
	printf("\nSTEP:%d\t  Moved top ring from\tTower %d\t  to\tTower %d .       ",step,T0+1,T2+1);
	ToH(n-1,T1,T0,T2);
}

int main(){
	
	printf("Give no. of rings for tower of hanoi");
	printf("\tThink before giving larger value ");
	int no;
	scanf("%d",&no);
	printf("\n\t\t\tSOURCE:: Tower:1, DESTINATION::Tower:3 \n");
	ToH(no,0,1,2);
	printf("\n\nfinished!!!!!!!");
	getch();
	return 0;
}
