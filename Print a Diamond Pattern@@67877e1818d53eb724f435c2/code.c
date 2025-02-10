#include <stdio.h>
int main() {
    int i,j,k,l,m,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<a-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
        for(l=a-1;l>0;l--){
            printf(" ");
        }
        for(m=a-1;m>0;m--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}