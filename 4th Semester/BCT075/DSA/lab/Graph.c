#include<stdio.h>
#include<stdlib.h>

struct Graph{
	int V;
	int E;
	int Adj[10][10];
};

int i,visited[10];

struct Graph *graphRepOfMatrix(){
	int i,j,k;
	struct Graph *G=(struct Graph *)malloc(sizeof(struct Graph));
	if(!G){
		printf("Memory Error");
		return;
	}
	printf("No. of Vertices and No of Edges: ");
	scanf("%d%d",&G->V,&G->E);
//	G->Adj=malloc(sizeof(G->V*G->V));
	for(i=0;i<G->V;i++){
		for(j=0;j<G->V;j++){
			G->Adj[i][j]=0;
		}
	}
	printf("\nGive Edge Pairs: (eg.: 1 3)\n");
	for(k=0;k<G->E;k++){
		scanf("%d%d",&i,&j);
		G->Adj[i-1][j-1]=1;
		G->Adj[j-1][i-1]=1;
	}
	return G;
}

void printAdjMax(struct Graph *G){
	int i,j;
	printf("\nMatrix representation of graph is:\n");
	for(i=0;i<G->V;i++){
		for(j=0;j<G->V;j++){
			printf("%d ",G->Adj[i][j]);
		}
		printf("\n");
	}
}

void dfTraversal(struct Graph *G,int s){
	int i;
	visited[s]=1;
	printf(" %d->",s+1);
	for(i=0;i<G->V;i++){
		if(G->Adj[s][i]==1&&visited[i]==0)
			dfTraversal(G,i);
	}
	
}

int main(){
	struct Graph *G=NULL;
	G = graphRepOfMatrix();
	printAdjMax(G);
	int i;
	for(i=0;i<G->V;i++){
		visited[i]=0;
	}
	printf("\nGive Source Vertex to traverse: ");
	scanf("%d",&i);
	printf("\n\tDEpth First Traversal is : \n\t");
	dfTraversal(G,i-1);
	getch();
	return 0;
}
