#include <stdio.h>

int main() {
    int i,j,n=3,a[n][n],b[n][n];
    printf("Enter the elements of the matrix 3x3:");
    for ( i=0;i<n;i++){
        for( j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
// rotation of matrix by 90 degrees clockwise 
    for ( i=0;i<n;i++){
        for( j=0;j<n;j++){
            b[i][j]=a[2-j][i];
        }
    }
    printf("THE MATRIX AFTER ROTATION \n");
    for ( i=0;i<n;i++){
        for( j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}