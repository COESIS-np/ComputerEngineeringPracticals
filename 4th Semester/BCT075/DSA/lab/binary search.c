#include <stdio.h>

void binary_search(int D[], int first, int last, int num){
	int mid=(first+last)/2;
	if(first>last){
		printf("\nValue not found\n");
		return;
	}
	if( D[mid] == num){
		printf("\nvalue found at index: %d\n",mid);
		return;
	}
   else if( num < D[mid] )
      binary_search(D,first, mid-1,num);
   else
      binary_search(D,mid+1,last, num);
}

int main(){
	int n=12;
	int data[12]={2,15,25,35,39,41,49,57,63,71,89,97};
	int num,first=0,last=n-1;
start:
	printf("\nGive number to search\n");
	scanf("%d",&num);
	binary_search(data,first,last,num);
	printf("\nGive 1 to search next:\n");
	int t=0;
	scanf("%d",&t);
	if(t==1)
		goto start;
	return 0;
}
