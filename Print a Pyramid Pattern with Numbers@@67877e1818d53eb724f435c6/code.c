#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<=a-i;j++){
            printf("%d",j);
        }
        for(k=1;k<(2*i-1);k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}