#include <stdio.h>
int main() {
    int a,b,c;
    float d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=((float)a+b+c)/3;
    printf("%.2f",d);
    return 0;
}