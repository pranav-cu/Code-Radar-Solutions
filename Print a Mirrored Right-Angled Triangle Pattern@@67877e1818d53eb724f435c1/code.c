#include <stdio.h>
int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<a;j++){
            if(j==0 || j==a-2) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}