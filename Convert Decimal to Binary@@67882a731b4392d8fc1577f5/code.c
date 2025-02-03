#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    for(b=31;b>=0;b--){
        if(a&(1<<b))
         flag=1;
        if(flag)
        printf("%d",(n&(1<<b))?1:0);
        if(!flag)
        printf("0");
    }
    return 0;
}