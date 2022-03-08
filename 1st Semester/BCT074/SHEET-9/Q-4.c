#include <stdio.h>
#include <conio.h>

void calc(float , float , float * ,float *);

void main()
{

  float l,b, area,per;
  printf("Enter length:");
  scanf("%f",&l);
    printf("Enter breadth:");
  scanf("%f",&b);
  calc(l,b,&area,&per);
  printf("Area=%f",area);
  printf("\nPerimeter=%f",per);
  getch();


}
void calc(float l,float b, float *ar,float *pe)
{

    *ar=l*b;
    *pe=2*(l+b);
}
