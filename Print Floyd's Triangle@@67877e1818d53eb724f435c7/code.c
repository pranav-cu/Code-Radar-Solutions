#include<stdio.h>
int main(){
    int i,j,a,b;
    b=1;
    scanf("%d",&a);
    for(i=1;i<a;i++){
        for(j=0;j<i;j++){
            printf("%d ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}