#include <stdio.h>
int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}