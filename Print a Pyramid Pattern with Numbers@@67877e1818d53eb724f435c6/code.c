#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<=a-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i-1);k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}