#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<i+1;j++){
            if(j%2==0 && i%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}