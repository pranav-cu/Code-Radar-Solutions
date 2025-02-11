#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        char b='A';
        for(k=0;k<i;k++){
            printf("%c ",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}