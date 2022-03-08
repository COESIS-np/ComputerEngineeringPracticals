#include <stdio.h>
int hash[10];
int n=10;
mod=10;

void printHashTable(){
	int i;
 	printf("\n_____________________________________________________________\n");
 	for(i=0;i<n;i++)
 		printf(" %d |",hash[i]);
	printf("\n_____________________________________________________________\n");
}
void linear_probe(int pos,int num){
	while(hash[pos]!=-1){
		pos=(pos+1)%n;
	}
	hash[pos]=num;
}
 void hashing(int num){
 	int pos=num%mod;
 	if(hash[pos]==-1){
 		hash[pos]=num;
 	}
 	else
 		linear_probe(pos,num);
	printHashTable();
 }
 int search(int num){
 	int pos=num%mod;
 	if(hash[pos]==num)
 		return 1;
 	else{
 		while(hash[pos]!=-1){
 			pos=(pos+1)%mod;
 			if(hash[pos]==num){
 				return 1;
 			}
 		}
 		return 0;
 	}
 }
 int main(){
 	int i,num;
 	for( i=0;i<n;i++){
 		hash[i]=-1;
 	}
 	for(i=0;i<n-1;i++){
 		printf("\nGive element to store:\n");
 		scanf("%d",&num);
 		if(search(num)==1){
 			printf("\n\tDUPLICATE DATA NOT ALLOWED\a");
 			i--;
		}else
 			hashing(num);
 	}
 	printf("\n\n\tInsertion Finish");
 srch:
 	printf("\n-------------------------------------------------------\nSearch: ");
 	scanf("%d",&num);
 	i=0;
 	if(num!=-1)
	 	i=search(num);
 	if(i==1)
 		printf("\n\tDATA Found :)");
 	else
 		printf("\tDATA NOT FOUND :(");
 	printf("\n\t\t\t\tSEARCH AGAIN(1/0)" );
 	i=0;
 	scanf("%d",&i);
 	if(i==1)
 		goto srch;
 	return 0;
 }
