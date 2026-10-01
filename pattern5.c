#include <stdio.h>

int main(){
    int i,n,j,s;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for (j=n;j>i;j--){
            printf(" ");
        }
        for(s=0;s<2*i-1;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}