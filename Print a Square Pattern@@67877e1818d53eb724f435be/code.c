#include <stdio.h>
int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<(2*a-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}