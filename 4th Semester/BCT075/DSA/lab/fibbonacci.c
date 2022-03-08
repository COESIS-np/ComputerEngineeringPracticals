#include<stdio.h>
int fibboncci(int n){
	if(n==0)
		return 0;
	else if(n==1){
		return 1;
	}else
		return fibboncci(n-1)+fibboncci(n-2);
}
int main(){
	int n,i;
	printf("Display fibbonacci series upto term: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d ",fibboncci(i));
	}
}
