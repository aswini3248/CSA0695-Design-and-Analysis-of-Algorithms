#include<stdio.h>
int main(){
	int n,i,j,a[100],t;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("the %d element is: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("the original array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nthe sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
