#include <stdio.h>

int main(){
    int i,n,j,s;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=(n+1)/2;i>0;i--){
        for (j=(n+1)/2;j>i;j--){
            printf(" ");
        }
        for(s=0;s<2*i-1;s++){
            printf("*");
        }
        printf("\n");
        
    }
        for (i=1;i<=(n-1)/2;i++){
        for (j=(n-1)/2;j>i;j--){
            printf(" ");
        }
        for(s=0;s<2*i+1;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}