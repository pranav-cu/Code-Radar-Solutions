#include<stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=a-1;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}