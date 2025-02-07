#include<stdio.h>
int main() {
    int a,b;
    char k;
    scanf("%d %d %c",&a,&b,&k);
    switch(k){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("Error");
    }
    return 0;
}