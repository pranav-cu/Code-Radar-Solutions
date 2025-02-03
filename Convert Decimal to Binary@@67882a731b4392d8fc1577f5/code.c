#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    for(b=0;b<=31;b++){
        if(a&(1<<b))
         c=1;
        if(c)
        printf("%d",(a&(1<<b))?1:0);
    }
    return 0;
}