#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if ( (1&(a>>b)) ==1)  printf("1");
    else printf("0");
    return 0;
}