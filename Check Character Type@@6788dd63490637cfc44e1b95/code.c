#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')  printf("Vowel");
    else printf("Consonant");
    else if(a>'0') printf("Digit");
    else if((!(a>='a') && !(a<='z') )|| (!(a>='A') && !(a<='Z'))) printf("Special Character");
    return 0;
}