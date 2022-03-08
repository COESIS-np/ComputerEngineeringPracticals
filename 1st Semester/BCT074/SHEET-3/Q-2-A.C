#include <stdio.h>
#include <conio.h>

void main()
{
	char vowel;
	clrscr();
	printf("Give me the vowel\n");
	vowel = getchar();
	switch (vowel){
		case 'a':
		case 'A':
			printf("A for Apple");
		break;
		case 'e':
		case 'E':
			printf("E for Elephant\n");
		break;
		case 'i':
		case 'I':
			printf("I for Ingredient\n");
		break;
		case 'o':
		case 'O':
			printf("O for Orange\n");
		break;
		case 'u':
		case 'U':
			printf("U for umbrella\n");
		break;
		default:
			printf("It is not a vowel.\n");
		break;
	}
	getch();
}