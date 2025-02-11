#include<stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<a;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}