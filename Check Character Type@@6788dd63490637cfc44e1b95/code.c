#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')  printf("Vowel");
    else printf("Consonant");
    if(!(a>='a') && !(a<='z')  && !(a>='A') && !(a<='Z')) printf("Special Character");
    return 0;
}