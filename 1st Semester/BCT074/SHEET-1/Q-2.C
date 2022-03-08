#include<stdio.h>
#include<conio.h>

void main(){
	int num = 7;
	float fnum = 9.36932;
	char ch = 'D';
	char str[20] = "oblivion";
	clrscr();
	printf("%f - Integer Number\n",num);
	printf("\n%f - Float Number\n",fnum);
	printf("\n%c - Character\n\n%s - String\n",ch,str);
	printf("\n%d - Integer value of character\n",ch);
	printf("\n%c - Second Character of string\n",str[1]);
	printf("\nFormatted value of Float number is %.2f\n",fnum);
	printf("\n%c - Converted to Uppercase Character\n",str[4]-32);
	getch();

}