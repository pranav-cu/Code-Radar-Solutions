#include <stdio.h>
int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<a;j++){
            if(i==0 || i==a-1 || j==0 || j==a-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}