#include<stdio.h>
int main(){
    int i,j,a;
    char a='A';
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<i;j++){
            printf("%c",a);
            a++;
        }
    }
}