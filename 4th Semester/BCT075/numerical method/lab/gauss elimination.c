#include<stdio.h>

int main(){
	int n,i,j,k;
	printf("Give order of matrix");
	scanf("%d",&n);
	float a[n][n+1], x[n],sum;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n;j++){
			printf("a[%d][%d] : ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	for(j=0;j<=n-2;j++){
		for(i=j+1;i<=n-1;i++){
			float c=a[i][j]/a[j][j];
			for(k=0;k<=n;k++){
				a[i][k]=a[i][k]-c*a[j][k];
			}
		}
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(k=n-2;k>=0;k--){
		sum=0;
		for(j=k+1;j<=n-1;j++){
			sum+=a[k][j]*x[j];
		}
		x[k]=(a[k][n]-sum)/a[k][k];
	}
	for(i=0;i<n;i++){
		printf("\nX[%d] : %f",i+1,x[i]);
	}
	return 0;
}

