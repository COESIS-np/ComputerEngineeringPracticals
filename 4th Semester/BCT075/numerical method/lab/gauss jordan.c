#include<stdio.h>
float a[10][10], x[10];
int n;

void printmatrix(){
	int o,p;
	printf("\nMatrix becames: \n");
	for(o=0;o<n;o++){
		for(p=0;p<=n;p++){
			printf("%f\t",a[o][p]);
			if(p==n-1)
				printf(":  ");
		}
		printf("\n");
	}
}
int main(){
	int i,j,k,l;
	printf("Give order of matrix");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n;j++){
			printf("a[%d][%d] : ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printmatrix();
	//row operation
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j!=i){
				float c=a[j][i]/a[i][i];
				for(k=0;k<=n;k++){
					a[j][k]=a[j][k]-c*a[i][k];
				}
			}
		}
		printmatrix();	
	}
	printf("\nThe final result is: ");
	for(i=0;i<n;i++){
		x[i]=a[i][n]/a[i][i];
		printf("\nX[%d] : %f",i+1,x[i]);
	}
	return 0;
}

