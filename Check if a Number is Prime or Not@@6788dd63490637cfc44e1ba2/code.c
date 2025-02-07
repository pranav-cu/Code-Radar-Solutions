#include <stdio.h>
int main() {
    int a,b,c=1;
    scanf("%d",&a);
    if(n<=1) c=0;
    for (b=2;b<a;b++){
        if(a%b==0) c=0;
        break;
    }
    if(c) printf("Prime");
    else printf("Not Prime");
    return 0;
}