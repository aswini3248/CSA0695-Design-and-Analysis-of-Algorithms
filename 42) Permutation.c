#include<stdio.h>
#define N 10
void print(int *num, int n){
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
int main(){
    int num[N];
    int *ptr;
    int temp;
    int i, n, j;
    printf("Enter array size: ");
        scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);
    printf("All possible combinations are:\n");
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    return 0;
}
