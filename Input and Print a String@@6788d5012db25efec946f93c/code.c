#include <stdio.h>
#include <string.h>
int main() {
    char a[];
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
    return 0;
}