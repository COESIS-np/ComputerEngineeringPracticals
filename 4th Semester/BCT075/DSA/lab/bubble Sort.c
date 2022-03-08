#include<stdio.h>
void bubbleSort(int D[], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(D[j]>D[j+1]){
				int temp=D[j];
				D[j]=D[j+1];
				D[j+1]=temp;
			}	
		}
	}
	printf("\n\nAfter Sorting :\n");
	for(i=0;i<n;i++)
		printf("%d, ",D[i]);
}
int main(){
	int n=10,i;
	int data[10]={523,467,24,07,124,76,25,68,23,1};
	printf("Before Sorting :\n");
	for(i=0;i<n;i++)
		printf("%d, ",data[i]);
	bubbleSort(data,n);
	return 0;
}
