#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    while(a!=0){
        count++;
        a=a>>1;
    }
    printf("%d",count);
    return 0;
}