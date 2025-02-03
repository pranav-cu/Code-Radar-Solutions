#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')  printf("Vowel");
    else if(((a>='a') && (a<='z')) || ((a>='A') && (a<='Z'))) printf("Consonant");
    else printf("Special Character");
    if (a>=0 ) printf("Digit");
    return 0;
}