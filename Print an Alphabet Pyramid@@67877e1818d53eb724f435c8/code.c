#include<stdio.h>
int main(){
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        char b='A';
        for(j=1;j<a-i;j++){
            printf(" ");
        }
        for(k=1;k<(2*i-1);k++){
            printf("%c",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}