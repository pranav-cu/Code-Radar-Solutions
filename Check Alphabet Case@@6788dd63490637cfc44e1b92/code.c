#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a>=A && a<=Z) printf("Uppercase");
    else if (a!=char) printf("Not an alphabet");
    else printf("Lowercase");
    return 0;
}