#include<stdio.h>
#include<windows.h>

void changeColor(int desiredColor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor);
}

int main(){
	int i;
	for(i=0;i<15;i++){
		changeColor(i);
		printf("%d. THIS IS COLOR\n",i);
	}
}
