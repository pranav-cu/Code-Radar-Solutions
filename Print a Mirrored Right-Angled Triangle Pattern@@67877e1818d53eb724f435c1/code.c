#include <stdio.h>
int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(j=0;j<a;j++){
            if(j==a-1 || j>=i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}