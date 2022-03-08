#include<stdio.h>

void printData(int D[],int n){
	int j;
	printf("\n");
	for(j=0;j<n;j++)
		printf("%d  ", D[j]);
}
void straightInsertionSort(int D[],int n){
	printf("\n\nMid Steps:");
	int temp,selected,i;
	for(i=1;i<n;i++){
		temp=D[i];
		selected=i;
		while(selected>0&&D[selected-1]>temp){
			D[selected]=D[selected-1];
			selected--;
		}
		D[selected]=temp;
		printData(D,n);
	}
	printf("\n\nData After Sorting:\n");
	printData(D,n);
}
int main(){
	int n=15, i, j;
	int data[15]={32,34,12,96,54,74,26,054,34,62,94,12,67,43,65};
	printf("Data before Sorting:\n");
	printData(data,n);
	straightInsertionSort(data,n);
	return 0;
}
