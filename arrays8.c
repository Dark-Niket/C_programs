#include <stdio.h>

int main() {
    int i,j,n,k;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}