#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<a;i++){
        for(j=0;j<i;j++){
            if(j%2==0 && i%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}