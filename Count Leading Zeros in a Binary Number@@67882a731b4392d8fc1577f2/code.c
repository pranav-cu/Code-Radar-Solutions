#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    while(a!=0){
        b++;
        a=a>>1;
    }
    printf("%d",b);
    return 0;
}