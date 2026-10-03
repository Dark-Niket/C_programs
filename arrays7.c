#include <stdio.h>

int main() {
    int i,j,n=3,a[n][n],b[n][n],result[n][n];
    printf("Enter the elements of the matrix A 3x3:");
    for ( i=0;i<n;i++){
        for( j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix B 3x3:");
    for ( i=0;i<n;i++){
        for( j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                result[i][j]=0;
            for(int k = 0 ; k<n;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("THE MATRIX AFTER MULTIPLICATION \n");
    for ( i=0;i<n;i++){
        for( j=0;j<n;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}