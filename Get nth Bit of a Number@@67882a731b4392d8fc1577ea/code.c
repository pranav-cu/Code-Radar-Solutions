#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if ((1&(a>>b))==1)  printf("0");
    else printf("1");
    return 0;
}