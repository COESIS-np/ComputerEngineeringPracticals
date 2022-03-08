#include<stdio.h>
#define f(x) 1/(1+x)
int main(){
	int n;
    float a=0,b=1,h;//limit
    printf("NO of steps: ");
    scanf("%d",&n);
    h=(b-a)/n;
    float sum,intg;
    sum=f(a)+f(b);
    int i;
    //trapezoidal
    for(i=1;i<n;i++){
     	sum=sum+2*f(a+i*h);
    }
    intg=(h/2)*sum;
    printf("\n\nIntegration by trapezoidal :: %f",intg);
           
    //simpson 1/3 rule
    sum=f(a)+f(b);
    for(i=1; i<n; i++){
        if (i%2==0)
            sum=sum+2*f(a+i*h);
        else
            sum=sum+4*f(a+i*h);
    }
    intg=(h/3)*sum;
    printf("\nIntegration by simpson 1/3 :: %f",intg);
            
    //simpson 3/8 rule
    sum=f(a)+f(b);
    for(i=1;i<n;i++){
        if (i%3==0)
            sum=sum+2*f(a+i*h);
        else
          	sum=sum+3*f(a+i*h);
    }
    intg=(3*h/8)*sum;
    printf("\nIntegration by simpson 3/8 :: %f",intg);
    return 0;
}
