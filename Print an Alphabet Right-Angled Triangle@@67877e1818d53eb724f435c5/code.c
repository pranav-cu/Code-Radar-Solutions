#include<stdio.h>
int main(){
    int i,j,a;
    char c='A';
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<i;j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}