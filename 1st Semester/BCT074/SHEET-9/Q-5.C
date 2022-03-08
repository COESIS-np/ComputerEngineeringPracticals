#include <stdio.h>
#include <conio.h>

void pal(int *,int);
void main()
{
    int i,a;
    for(i=1000;i<=3000;i++)
    {
        pal(&a,i);
        if(a)
            printf("%d\t",i);
    }
    getch();

}
void pal(int *ad_of_a, int n)
{
    int temp=n,rem,rev=0;
    do{
           rem=n%10;
    rev=rev*10+rem;
    n=n/10;



    }while(n!=0);
    if(rev==temp)
        *ad_of_a=1;
    else
        *ad_of_a=0;


}
