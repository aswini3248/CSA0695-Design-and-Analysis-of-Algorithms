#include<stdio.h>
int main(){
	int a[10][10],b[10][10],mul[10][10],i,j,k,m,n;
	printf("enter the number of rows and columns: ");
	scanf("%d %d",&m,&n);
	printf("enter the first matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiplication of two matrices is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mul[i][j]=0;
			for(k=0;k<n;k++){
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
